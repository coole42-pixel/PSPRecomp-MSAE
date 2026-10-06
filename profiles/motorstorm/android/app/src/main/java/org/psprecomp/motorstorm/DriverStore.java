package org.psprecomp.motorstorm;
import android.content.Context;
import android.os.Build;
import org.json.JSONObject;
import java.io.*;
import java.nio.file.*;
import java.security.MessageDigest;
import java.util.*;
import java.util.zip.*;

final class DriverStore {
    record Driver(String id, String name, String library, File directory) {}
    static File root(Context c){return new File(c.getFilesDir(),"drivers");}
    static Driver read(Context c,String id) throws Exception {
        if(!id.matches("[a-f0-9]{64}"))throw new IOException("Invalid driver identity");
        File directory=new File(root(c),id);
        JSONObject meta=new JSONObject(new String(Files.readAllBytes(new File(directory,"meta.json").toPath()),java.nio.charset.StandardCharsets.UTF_8));
        String library=meta.getString("libraryName");
        if(meta.getInt("schemaVersion")!=1 || meta.getInt("minApi")>Build.VERSION.SDK_INT ||
            !library.matches("[A-Za-z0-9_.-]+\\.so"))throw new IOException("Unsupported driver package metadata");
        File lib=new File(directory,library);
        try(RandomAccessFile file=new RandomAccessFile(lib,"r")){
            byte[] elf=new byte[20];file.readFully(elf);
            if(elf[0]!=127||elf[1]!='E'||elf[2]!='L'||elf[3]!='F'||elf[4]!=2||elf[5]!=1||
                (elf[18]&255)!=183||elf[19]!=0)throw new IOException("Driver must be an arm64 little-endian ELF library");
        }
        return new Driver(id,meta.optString("name",id),library,directory);
    }
    static List<Driver> list(Context c){
        List<Driver> list=new ArrayList<>(); File[] dirs=root(c).listFiles();
        if(dirs!=null)for(File dir:dirs)try{list.add(read(c,dir.getName()));}catch(Exception ignored){}
        list.sort(Comparator.comparing(Driver::name));return list;
    }
    static Driver importZip(Context c,InputStream input) throws Exception {
        File base=root(c);if(!base.mkdirs()&&!base.isDirectory())throw new IOException("Cannot create private driver storage");
        File staging=new File(base,"pending-"+UUID.randomUUID());if(!staging.mkdir())throw new IOException("Cannot stage driver");
        try {
            long total=0;int entries=0; MessageDigest hash=MessageDigest.getInstance("SHA-256");
            try(ZipInputStream zip=new ZipInputStream(input)){
                for(ZipEntry entry;(entry=zip.getNextEntry())!=null;){
                    if(++entries>32)throw new IOException("Too many driver files");
                    String name=entry.getName();
                    if(!name.matches("[A-Za-z0-9_.-]+")||name.equals(".")||name.equals("..")||entry.isDirectory())
                        throw new IOException("Driver package must contain safe root-level files");
                    if(!name.equals("meta.json")&&!name.endsWith(".so")&&!name.startsWith("LICENSE"))
                        throw new IOException("Unexpected driver file: "+name);
                    File destination=new File(staging,name);
                    try(OutputStream output=Files.newOutputStream(destination.toPath(),StandardOpenOption.CREATE_NEW)){
                        byte[] buffer=new byte[65536];int n;long fileSize=0;
                        while((n=zip.read(buffer))!=-1){
                            total+=n;fileSize+=n;if(total>64L*1024*1024 || (name.equals("meta.json")&&fileSize>65536))
                                throw new IOException("Driver package exceeds import limits");
                            output.write(buffer,0,n);
                        }
                    }
                }
            }
            // Identity is content based and independent of ZIP order/compression.
            File[] files=staging.listFiles();Arrays.sort(files,Comparator.comparing(File::getName));
            for(File file:files){hash.update(file.getName().getBytes(java.nio.charset.StandardCharsets.UTF_8));
                try(InputStream in=new FileInputStream(file)){byte[] buffer=new byte[65536];int n;while((n=in.read(buffer))!=-1)hash.update(buffer,0,n);}}
            StringBuilder id=new StringBuilder();for(byte b:hash.digest())id.append(String.format(Locale.ROOT,"%02x",b));
            // Validate metadata and ELF before publication by temporarily addressing the staging tree.
            JSONObject meta=new JSONObject(new String(Files.readAllBytes(new File(staging,"meta.json").toPath()),java.nio.charset.StandardCharsets.UTF_8));
            if(meta.getInt("schemaVersion")!=1 || meta.getInt("minApi")>Build.VERSION.SDK_INT ||
                !meta.getString("libraryName").matches("[A-Za-z0-9_.-]+\\.so"))throw new IOException("Unsupported driver metadata");
            try(RandomAccessFile lib=new RandomAccessFile(new File(staging,meta.getString("libraryName")),"r")){
                byte[] elf=new byte[20];lib.readFully(elf);
                if(elf[0]!=127||elf[1]!='E'||elf[2]!='L'||elf[3]!='F'||elf[4]!=2||elf[5]!=1||
                    (elf[18]&255)!=183||elf[19]!=0)throw new IOException("Not an arm64 ELF driver");
            }
            File installed=new File(base,id.toString());
            if(!installed.exists())Files.move(staging.toPath(),installed.toPath(),StandardCopyOption.ATOMIC_MOVE);
            return read(c,id.toString());
        } finally {
            if(staging.exists())try(var paths=Files.walk(staging.toPath())){
                for(Path p:paths.sorted(Comparator.reverseOrder()).collect(java.util.stream.Collectors.toList()))Files.deleteIfExists(p);
            }
        }
    }
}
