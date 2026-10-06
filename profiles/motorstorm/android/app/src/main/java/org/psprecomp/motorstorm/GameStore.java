package org.psprecomp.motorstorm;

import android.content.Context;
import java.io.*;
import java.nio.file.*;
import java.security.MessageDigest;
import java.util.*;
import java.util.function.Consumer;

final class GameStore {
    static final String EBOOT_SHA256="bfb677677c939aa6cf99fc97120d7345c9361b77125115338ed479fd1d7c4c16";
    static File root(Context c){return new File(c.getExternalFilesDir(null),"PSP_DATA");}
    static boolean ready(Context c){return new File(root(c),"disc0/PSP_GAME/PARAM.SFO").isFile() &&
        new File(root(c),"EBOOT_DECRYPTED.BIN").isFile();}
    static String hash(File file)throws Exception{
        MessageDigest digest=MessageDigest.getInstance("SHA-256");byte[] bytes=new byte[65536];
        try(InputStream in=new FileInputStream(file)){int n;while((n=in.read(bytes))!=-1)digest.update(bytes,0,n);}
        StringBuilder out=new StringBuilder();for(byte b:digest.digest())out.append(String.format(Locale.ROOT,"%02x",b));return out.toString();
    }
    static void importEboot(Context c,InputStream input)throws Exception{
        File base=root(c);base.mkdirs();File temp=new File(base,"eboot-"+UUID.randomUUID()+".tmp");
        try{
            try(InputStream in=input;OutputStream out=new FileOutputStream(temp)){
                byte[] bytes=new byte[65536];long total=0;int n;
                while((n=in.read(bytes))!=-1){if((total+=n)>32L*1024*1024)throw new IOException("EBOOT is too large");out.write(bytes,0,n);}
            }
            if(!hash(temp).equals(EBOOT_SHA256))throw new IOException("This decrypted EBOOT does not match the game's supported build");
            Files.move(temp.toPath(),new File(base,"EBOOT_DECRYPTED.BIN").toPath(),StandardCopyOption.REPLACE_EXISTING,StandardCopyOption.ATOMIC_MOVE);
        }finally{Files.deleteIfExists(temp.toPath());}
    }
    static void removeOwned(File directory)throws IOException{
        if(!directory.exists())return;
        try(var files=Files.walk(directory.toPath())){
            for(Path p:files.sorted(Comparator.reverseOrder()).collect(java.util.stream.Collectors.toList()))Files.deleteIfExists(p);
        }
    }
    static final class IsoReader implements AutoCloseable {
        final RandomAccessFile file; final long length; long extracted; int files;
        final Set<Long> visited=new HashSet<>(); final Consumer<String> progress;
        IsoReader(File path,Consumer<String> update)throws IOException{file=new RandomAccessFile(path,"r");length=file.length();progress=update;}
        byte[] read(long offset,int size)throws IOException{
            if(offset<0 || size<0 || offset>length-size)throw new IOException("ISO contains a truncated extent");
            byte[] bytes=new byte[size];file.seek(offset);file.readFully(bytes);return bytes;
        }
        static long u32(byte[] b,int p){return (b[p]&255L)|((b[p+1]&255L)<<8)|((b[p+2]&255L)<<16)|((b[p+3]&255L)<<24);}
        void directory(long offset,long size,File destination,int depth)throws IOException{
            if(depth>16 || size>8L*1024*1024 || !visited.add(offset))throw new IOException("Invalid ISO directory");
            if(!destination.mkdirs()&&!destination.isDirectory())throw new IOException("Cannot create game directory");
            byte[] data=read(offset,(int)size);int cursor=0;
            while(cursor<data.length){
                if(Thread.currentThread().isInterrupted())throw new InterruptedIOException("Import cancelled");
                int n=data[cursor]&255;if(n==0){cursor=(cursor/2048+1)*2048;continue;}
                if(n<34 || cursor+n>data.length)throw new IOException("Invalid ISO directory record");
                int nameLength=data[cursor+32]&255;if(33+nameLength>n)throw new IOException("Invalid ISO name");
                byte[] record=Arrays.copyOfRange(data,cursor,cursor+n);cursor+=n;
                if(nameLength==1&&(record[33]==0||record[33]==1))continue;
                String name=new String(record,33,nameLength,java.nio.charset.StandardCharsets.US_ASCII).split(";",2)[0];
                if(name.isEmpty() || name.equals(".")||name.equals("..")||name.contains("/")||name.contains("\\"))throw new IOException("Unsafe ISO path");
                File output=new File(destination,name);long start=u32(record,2)*2048,bytes=u32(record,10);
                if(start>length-bytes || bytes>2L*1024*1024*1024)throw new IOException("Invalid ISO file extent");
                if((record[25]&2)!=0){directory(start,bytes,output,depth+1);continue;}
                if(++files>20000 || (extracted+=bytes)>2L*1024*1024*1024)throw new IOException("ISO extraction exceeds limits");
                file.seek(start);byte[] buffer=new byte[65536];
                try(OutputStream out=new FileOutputStream(output)){
                    while(bytes>0){if(Thread.currentThread().isInterrupted())throw new InterruptedIOException("Import cancelled");
                        int chunk=(int)Math.min(bytes,buffer.length);file.readFully(buffer,0,chunk);out.write(buffer,0,chunk);bytes-=chunk;}
                }
                progress.accept("Extracted "+(extracted/1048576)+" MiB · "+files+" files");
            }
        }
        void extract(File output)throws IOException{
            byte[] pvd=read(16L*2048,2048);
            if(pvd[0]!=1 || !new String(pvd,1,5,java.nio.charset.StandardCharsets.US_ASCII).equals("CD001"))throw new IOException("Select an uncompressed PSP ISO");
            directory(u32(pvd,158)*2048,u32(pvd,166),output,0);
        }
        @Override public void close()throws IOException{file.close();}
    }
    static void importIso(Context c,InputStream input,Consumer<String> progress)throws Exception{
        File base=root(c);base.mkdirs();
        File image=new File(base,"import-"+UUID.randomUUID()+".iso");
        File staging=new File(base,"disc0-pending-"+UUID.randomUUID());
        File old=new File(base,"disc0-previous-"+UUID.randomUUID());
        try{
            progress.accept("Copying selected ISO…");long total=0;
            try(InputStream in=input;OutputStream out=new FileOutputStream(image)){
                byte[] buffer=new byte[262144];int n;
                while((n=in.read(buffer))!=-1){
                    if(Thread.currentThread().isInterrupted())throw new InterruptedIOException("Import cancelled");
                    if((total+=n)>2L*1024*1024*1024)throw new IOException("ISO exceeds 2 GiB");
                    if(base.getUsableSpace()<n+32L*1024*1024)throw new IOException("Not enough storage for ISO import");
                    out.write(buffer,0,n);
                }
            }
            if(base.getUsableSpace()<total+32L*1024*1024)throw new IOException("Not enough storage to extract ISO");
            try(IsoReader reader=new IsoReader(image,progress)){reader.extract(staging);}
            if(!new File(staging,"PSP_GAME/PARAM.SFO").isFile())throw new IOException("ISO has no PSP_GAME data");
            File installed=new File(base,"disc0");boolean hadOld=installed.exists();
            if(hadOld)Files.move(installed.toPath(),old.toPath(),StandardCopyOption.ATOMIC_MOVE);
            try{Files.move(staging.toPath(),installed.toPath(),StandardCopyOption.ATOMIC_MOVE);}
            catch(Exception e){if(hadOld)Files.move(old.toPath(),installed.toPath(),StandardCopyOption.ATOMIC_MOVE);throw e;}
            removeOwned(old);
            progress.accept("ISO extracted. Select the matching decrypted EBOOT to play.");
        }finally{Files.deleteIfExists(image.toPath());removeOwned(staging);}
    }
}
