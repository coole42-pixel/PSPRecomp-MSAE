// Native-resolution PSP pixel operations. ROV ordering lets the hardware
// rasterizer implement stencil-in-framebuffer-alpha and bit write masks exactly,
// including operations D3D12's fixed blend unit cannot express.
static constexpr char kGeShader[] = R"HLSL(
cbuffer DrawState : register(b0) {
    uint4 commands[64];
    float4 clipRows[4];
    float4 viewZ, viewportScale, viewportCenter;
    uint4 surface; // width, height, color stride, depth stride
    uint4 mode; // format, hardware transform, clip/isPoint flags, valid depth
    uint4 feedback; // use, base index, texture stride, packed format
    uint4 render; // raster scale, output scale, AA (0 none, 1 FXAA, 2 SSAA4x), reserved
};
uint C(uint i) { return commands[i >> 2][i & 3]; }
RasterizerOrderedStructuredBuffer<uint> colorTarget : register(u0);
RasterizerOrderedStructuredBuffer<uint> depthTarget : register(u1);
Texture2D<float4> textureImage : register(t0);
SamplerState samplerWrapWrap : register(s0);
SamplerState samplerClampWrap : register(s1);
SamplerState samplerWrapClamp : register(s2);
SamplerState samplerClampClamp : register(s3);
StructuredBuffer<uint> feedbackImage : register(t2);
struct Input {
    float3 position : POSITION;
    uint color : COLOR0;
    uint secondary : COLOR1;
    float3 uvq : TEXCOORD0;
    float fog : TEXCOORD1;
};
float4 channels(uint c) { return float4(c & 255, (c >> 8) & 255, (c >> 16) & 255, c >> 24); }
uint4 bytes(uint c) { return uint4(c & 255, (c >> 8) & 255, (c >> 16) & 255, c >> 24); }
uint pack(uint4 c) { return c.x | (c.y << 8) | (c.z << 16) | (c.w << 24); }
uint unpackColor(uint c, uint format) {
    if (format == 3) return c;
    if (format == 0) {
        uint3 rgb=uint3(c&31,(c>>5)&63,(c>>11)&31);
        return pack(uint4((rgb.x<<3)|(rgb.x>>2),(rgb.y<<2)|(rgb.y>>4),(rgb.z<<3)|(rgb.z>>2),255));
    }
    if (format == 1) {
        uint3 rgb=uint3(c&31,(c>>5)&31,(c>>10)&31);
        return pack(uint4((rgb<<3)|(rgb>>2),(c>>15)*255));
    }
    return pack(uint4(c & 15, (c >> 4)&15, (c >> 8)&15, (c >> 12)&15)*17);
}
uint unpackFrame(uint c) { return unpackColor(c,mode.x); }
uint packFrame(uint rgba) {
    uint4 c = bytes(rgba);
    if (mode.x == 3) return rgba;
    if (mode.x == 0) return (c.x >> 3) | ((c.y >> 2) << 5) | ((c.z >> 3) << 11);
    if (mode.x == 1) return (c.x >> 3) | ((c.y >> 3) << 5) | ((c.z >> 3) << 10) | ((c.w >> 7) << 15);
    return (c.x >> 4) | ((c.y >> 4) << 4) | ((c.z >> 4) << 8) | ((c.w >> 4) << 12);
}
struct Varying {
    float4 position : SV_Position;
    noperspective float4 color : COLOR0;
    noperspective float3 secondary : COLOR1;
    float3 uvq : TEXCOORD0;
    noperspective float2 depthFog : TEXCOORD1;
    float4 clipXY : SV_ClipDistance0;
    float2 clipZ : SV_ClipDistance1;
};
Varying VS(Input i) {
    Varying o;
    float4 p = float4(i.position, 1);
    float4 clip = mode.y ? float4(dot(clipRows[0],p),dot(clipRows[1],p),dot(clipRows[2],p),dot(clipRows[3],p)) : p;
    float w = mode.y ? clip.w : 1;
    float2 xy = mode.y ? clip.xy * viewportScale.xy + viewportCenter.xy * w : i.position.xy;
    bool isPoint = (mode.z&2)!=0;
    if(isPoint) xy=(floor(xy/w)+0.5)*w;
    xy *= render.x;
    o.position = float4(xy.x * (2.0/surface.x) - w, w - xy.y * (2.0/surface.y), 0.5*w, w);
    o.clipXY = mode.y && !isPoint ? float4(w+clip.x,w-clip.x,w+clip.y,w-clip.y) : 1;
    o.clipZ = mode.y && (mode.z&1) && !isPoint ? float2(w+clip.z,w-clip.z) : 1;
    float z = mode.y ? clip.z/w * viewportScale.z + viewportCenter.z : i.position.z;
    float fog = mode.y && (C(0x1f)&1) ? (dot(viewZ,p)+asfloat(C(0xcd)<<8))*asfloat(C(0xce)<<8) : i.fog;
    o.depthFog = float2(z,fog);
    o.color = channels(i.color); o.secondary = channels(i.secondary).rgb;
    o.uvq = i.uvq;
    return o;
}
[maxvertexcount(4)]
void PointGS(point Varying inputVertices[1], inout TriangleStream<Varying> outputVertices) {
    Varying a=inputVertices[0];
    float2 radius=float2(render.x,render.x)/surface.xy*a.position.w;
    Varying v=a; v.position.xy=a.position.xy+radius*float2(-1,1); outputVertices.Append(v);
    v=a; v.position.xy=a.position.xy+radius*float2(1,1); outputVertices.Append(v);
    v=a; v.position.xy=a.position.xy+radius*float2(-1,-1); outputVertices.Append(v);
    v=a; v.position.xy=a.position.xy+radius*float2(1,-1); outputVertices.Append(v);
    outputVertices.RestartStrip();
}
bool compare(uint v, uint r, uint f) {
    f &= 7;
    if (f==0) return false; if(f==1) return true;
    if(f==2) return v==r; if(f==3) return v!=r;
    if(f==4) return v<r; if(f==5) return v<=r;
    if(f==6) return v>r; return v>=r;
}
uint stencilOp(uint op, uint old) {
    uint maximum = mode.x == 0 ? 0 : 255;
    uint step = mode.x == 1 ? 255 : mode.x == 2 ? 17 : 1;
    op &= 7;
    if(op==1) return 0; if(op==2) return (C(0xdc)>>8)&255;
    if(op==3) return old ^ maximum;
    if(op==4) return min(maximum,old+step);
    if(op==5) return old>=step ? old-step : 0;
    return old;
}
int wrap(int x, uint width, bool clampAxis) {
    if(clampAxis) return clamp(x,0,int(width)-1);
    if((width&(width-1))==0) return x&(int(width)-1);
    int value=x%int(width); return value<0 ? value+int(width) : value;
}
uint4 texel(int2 p, uint level) {
    uint w,h,n;
    if(feedback.x) {
        w=1u<<(C(0xb8)&15); h=1u<<((C(0xb8)>>8)&15);
        if(feedback.x==2) { w*=render.x; h*=render.x; }
    }
    else textureImage.GetDimensions(level,w,h,n);
    p = int2(wrap(p.x,w,(C(0xc7)&1)!=0),wrap(p.y,h,(C(0xc7)&256)!=0));
    if(feedback.x) return bytes(unpackColor(feedbackImage[feedback.y+p.y*feedback.z+p.x],feedback.w));
    return uint4(textureImage.Load(int3(p,level))*255+0.5);
}
uint4 sampleLevel(float2 uv, uint level, bool filterLinear) {
    uv /= float(1u<<level);
    if(!filterLinear) return texel(int2(floor(uv)),level);
    int2 fixedUV = int2(floor((uv-0.5)*16));
    int2 p = fixedUV >> 4; uint2 f = uint2(fixedUV)&15;
    if(!feedback.x) {
        uint w,h,n; textureImage.GetDimensions(level,w,h,n);
        if((w&(w-1))==0 && (h&(h-1))==0) {
            bool clampU=(C(0xc7)&1)!=0, clampV=(C(0xc7)&256)!=0;
            // Preserve PSP four-bit filter weights, including the edge where
            // clamp must duplicate a texel rather than shift its neighbor.
            int2 bounded=int2(clampU ? clamp(p.x,-1,int(w)-1) : wrap(p.x,w,false),
                              clampV ? clamp(p.y,-1,int(h)-1) : wrap(p.y,h,false));
            float2 normalized=(float2(bounded)+float2(f)/16+0.5)/float2(w,h);
            float4 filtered;
            if(clampU && clampV) filtered=textureImage.SampleLevel(samplerClampClamp,normalized,level);
            else if(clampU) filtered=textureImage.SampleLevel(samplerClampWrap,normalized,level);
            else if(clampV) filtered=textureImage.SampleLevel(samplerWrapClamp,normalized,level);
            else filtered=textureImage.SampleLevel(samplerWrapWrap,normalized,level);
            // The exact result is an integer / 256. Correct tiny UNORM float
            // error at integer boundaries without crossing a 1/256 fraction.
            return min(uint4(max(filtered,0)*255+0.001),255);
        }
    }
    uint4 a = texel(p,level)*(16-f.x)+texel(p+int2(1,0),level)*f.x;
    uint4 b = texel(p+int2(0,1),level)*(16-f.x)+texel(p+1,level)*f.x;
    return (a*(16-f.y)+b*f.y)>>8;
}
uint4 shade(float2 uv, uint4 v, float clipW) {
    if(feedback.x==2) uv*=render.x;
    uint lodMode = C(0xc8)&3;
    float footprint = max(max(abs(ddx(uv.x)),abs(ddy(uv.x))),max(abs(ddx(uv.y)),abs(ddy(uv.y))));
    float delta = lodMode==0 ? footprint : lodMode==2 ? 2*clipW*asfloat(C(0xd0)<<8) : 1;
    uint bits = asuint(delta);
    int detail = lodMode==0 || lodMode==2 ? (delta>0 ? (int((bits>>23)&255)-127)*16 + int((bits>>19)&15) : -2048) : 0;
    detail += (int(C(0xc8)<<8)>>24);
    uint maxLevel = (C(0xc6)&4) ? (C(0xc2)>>16)&7 : 0;
    uint w,h,n; if(feedback.x) n=1; else textureImage.GetDimensions(0,w,h,n); maxLevel = min(maxLevel,n-1);
    bool filterLinear = detail>0 ? (C(0xc6)&1)!=0 : (C(0xc6)&256)!=0;
    uint lod = uint(clamp(detail,0,int(maxLevel*16)));
    bool linearMip = (C(0xc6)&2)!=0;
    uint level = linearMip ? lod>>4 : min(maxLevel,(lod+8)>>4);
    uint4 t = sampleLevel(uv,level,filterLinear);
    if(linearMip && level<maxLevel) t = (t*(16-(lod&15))+sampleLevel(uv,level+1,filterLinear)*(lod&15))>>4;
    bool alpha = (C(0xc9)&256)!=0;
    uint scale = (C(0xc9)&65536)!=0 ? 2 : 1;
    uint a = alpha ? t.a*(v.a+1)/256 : v.a;
    uint function = C(0xc9)&7;
    if(function==0) return uint4(min(255,t.rgb*(v.rgb+1)*scale/256),a);
    if(function==1) return uint4(alpha ? min(255,((t.rgb+1)*t.a+(v.rgb+1)*(255-t.a))*scale/256) : min(255,t.rgb*scale),v.a);
    if(function==2) return uint4(min(255,(v.rgb*(255-t.rgb)+bytes(C(0xca)).rgb*t.rgb+255)*scale/256),a);
    if(function==3) return uint4(min(255,t.rgb*scale),alpha?t.a:v.a);
    return uint4(min(255,(t.rgb+v.rgb)*scale),a);
}
uint3 factor(uint which, bool source, uint4 s, uint4 d, uint fixedColor) {
    if(which==0) return source?d.rgb:s.rgb;
    if(which==1) return 255-(source?d.rgb:s.rgb);
    if(which==2) return s.a; if(which==3) return 255-s.a;
    if(which==4) return d.a; if(which==5) return 255-d.a;
    if(which==6) return 2*s.a; if(which==7) return 255-min(2*s.a,255);
    if(which==8) return 2*d.a; if(which==9) return 255-min(2*d.a,255);
    return bytes(fixedColor).rgb;
}
void PS(Varying i, bool front : SV_IsFrontFace) {
    uint2 pixel = uint2(i.position.xy);
    if(any(pixel>=surface.xy)) return;
    bool clearing = (C(0xd3)&1)!=0;
    if(!clearing && (C(0x1d)&1) && (front != ((C(0x9b)&1)!=0))) return;
    uint4 s = uint4(clamp(i.color,0,255));
    if(!clearing && (C(0x1e)&1)) s = shade(i.uvq.xy/i.uvq.z,s,1/i.position.w);
    s.rgb = min(255,s.rgb+uint3(clamp(i.secondary,0,255)));
    if(!clearing && (C(0x22)&1) && !compare(s.a&((C(0xdb)>>16)&255),(C(0xdb)>>8)&((C(0xdb)>>16)&255),C(0xdb))) return;
    uint index = pixel.y*surface.z+pixel.x;
    uint oldColor = unpackFrame(colorTarget[index]); uint4 d = bytes(oldColor);
    uint oldStencil = mode.x==0 ? 0 : d.a;
    uint depthIndex = pixel.y*surface.w+pixel.x;
    uint z = uint(clamp(i.depthFog.x,0,65535));
    if(!clearing && (C(0x1f)&1) && i.depthFog.y<1) {
        uint fog = uint(saturate(i.depthFog.y)*255);
        s.rgb = (s.rgb*fog+bytes(C(0xcf)).rgb*(255-fog)+255)>>8;
    }
    if(!clearing && (C(0x27)&1) && !compare(pack(s)&(C(0xda)&0xffffff),C(0xd9)&C(0xda),C(0xd8)&3)) return;
    bool stencil = !clearing && (C(0x24)&1);
    uint alphaMask = (C(0xe9)&255)<<24;
    if(stencil && !compare(((C(0xdc)>>8)&255)&((C(0xdc)>>16)&255),oldStencil&((C(0xdc)>>16)&255),C(0xdc))) {
        colorTarget[index] = packFrame((oldColor&0xffffff) | ((stencilOp(C(0xdd),oldStencil)<<24)&~alphaMask) | (oldColor&alphaMask)); return;
    }
    if(!clearing && mode.w && (C(0x23)&1) && !compare(z,depthTarget[depthIndex],C(0xde))) {
        if(stencil) colorTarget[index] = packFrame((oldColor&0xffffff) | ((stencilOp(C(0xdd)>>8,oldStencil)<<24)&~alphaMask) | (oldColor&alphaMask));
        return;
    }
    if(!clearing && (C(0x21)&1)) {
        uint3 a=s.rgb*factor(C(0xdf)&15,true,s,uint4(d.rgb,oldStencil),C(0xe0))/255;
        uint3 b=d.rgb*factor((C(0xdf)>>4)&15,false,s,uint4(d.rgb,oldStencil),C(0xe1))/255;
        uint f=(C(0xdf)>>8)&7;
        if(f==1) s.rgb=a-min(a,b); else if(f==2) s.rgb=b-min(a,b);
        else if(f==3) s.rgb=min(s.rgb,d.rgb); else if(f==4) s.rgb=max(s.rgb,d.rgb);
        else if(f==5) s.rgb=max(s.rgb,d.rgb)-min(s.rgb,d.rgb); else s.rgb=min(255,a+b);
    }
    if(mode.w && (clearing ? (C(0xd3)&1024)!=0 : (C(0x23)&1) && C(0xe7)==0)) depthTarget[depthIndex]=z;
    if(clearing) { if(!(C(0xd3)&256)) s.rgb=d.rgb; if(!(C(0xd3)&512)) s.a=d.a; }
    else if(stencil) s.a=stencilOp(C(0xdd)>>16,oldStencil);
    uint mask=(C(0xe8)&0xffffff)|alphaMask;
    colorTarget[index]=packFrame((pack(s)&~mask)|(oldColor&mask));
}
// Direct swapchain presentation reads the GE's resident packed framebuffer.
StructuredBuffer<uint> presentColor : register(t1);
RWStructuredBuffer<uint> computeOutput : register(u2);
// Guest VRAM keeps its original stride and dimensions. Expansion and resolve
// happen on the GPU; high-resolution surfaces survive guest readback.
[numthreads(8,8,1)]
void ExpandCS(uint3 id : SV_DispatchThreadID) {
    uint2 extent=surface.xy*render.x;
    if(any(id.xy>=extent)) return;
    uint2 p=id.xy/render.x;
    computeOutput[id.y*surface.z+id.x]=presentColor[p.y*surface.x+p.x];
}
[numthreads(8,8,1)]
void ResolveCS(uint3 id : SV_DispatchThreadID) {
    if(any(id.xy>=surface.xy)) return;
    uint2 base=id.xy*render.x;
    uint center=presentColor[(base.y+render.x/2)*surface.z+base.x+render.x/2];
    if(mode.x==4) { computeOutput[id.y*surface.x+id.x]=center; return; }
    uint4 total=0;
    for(uint y=0;y<render.x;++y) for(uint x=0;x<render.x;++x)
        total+=bytes(unpackFrame(presentColor[(base.y+y)*surface.z+base.x+x]));
    uint samples=render.x*render.x;
    uint4 c=(total+samples/2)/samples;
    c.a=bytes(unpackFrame(center)).a; // stencil is never averaged
    computeOutput[id.y*surface.x+id.x]=packFrame(pack(c));
}
float3 outputPixel(int2 p) {
    uint2 extent=surface.xy*render.y;
    p=clamp(p,0,int2(extent)-1);
    uint ratio=render.x/render.y;
    uint2 base=uint2(p)*ratio;
    if(render.z==2) {
        float3 sum=0;
        for(uint y=0;y<ratio;++y) for(uint x=0;x<ratio;++x)
            sum+=channels(unpackFrame(presentColor[(base.y+y)*surface.z+base.x+x])).rgb;
        return sum/(255.0*ratio*ratio);
    }
    return channels(unpackFrame(presentColor[(base.y+ratio/2)*surface.z+base.x+ratio/2])).rgb/255;
}
float3 outputLinear(float2 p) {
    int2 lo=int2(floor(p)); float2 f=frac(p);
    return lerp(lerp(outputPixel(lo),outputPixel(lo+int2(1,0)),f.x),
                lerp(outputPixel(lo+int2(0,1)),outputPixel(lo+1),f.x),f.y);
}
float luma(float3 c) { return dot(c,float3(0.299,0.587,0.114)); }
float3 displayShade(float2 uv) {
    int2 p=min(int2(uv*surface.xy*render.y),int2(surface.xy*render.y)-1);
    float3 c=outputPixel(p);
    if(render.z!=1) return c;
    // Directional edge filtering in output-pixel coordinates. Flat regions and
    // low-contrast artwork retain their original color.
    float nw=luma(outputPixel(p+int2(-1,-1))), ne=luma(outputPixel(p+int2(1,-1)));
    float sw=luma(outputPixel(p+int2(-1,1))), se=luma(outputPixel(p+int2(1,1))), m=luma(c);
    float low=min(m,min(min(nw,ne),min(sw,se))), high=max(m,max(max(nw,ne),max(sw,se)));
    if(high-low<max(0.03125,high*0.125)) return c;
    float2 direction=float2(-(nw+ne-sw-se),nw+sw-ne-se);
    float reduction=max((nw+ne+sw+se)*0.03125,0.0078125);
    direction=clamp(direction/(min(abs(direction.x),abs(direction.y))+reduction),-8,8);
    float3 a=(outputLinear(p+direction*(-1.0/6))+outputLinear(p+direction*(1.0/6)))*0.5;
    float3 b=a*0.5+(outputLinear(p-direction*0.5)+outputLinear(p+direction*0.5))*0.25;
    float lb=luma(b); return lb<low || lb>high ? a : b;
}
[numthreads(8,8,1)]
void CaptureCS(uint3 id : SV_DispatchThreadID) {
    uint2 extent=surface.xy*render.y;
    if(any(id.xy>=extent)) return;
    float2 uv=(float2(id.xy)+0.5)/extent;
    computeOutput[id.y*extent.x+id.x]=pack(uint4(saturate(displayShade(uv))*255+0.5,255));
}
struct PresentVarying { float4 position : SV_Position; float2 uv : TEXCOORD0; };
PresentVarying PresentVS(uint id : SV_VertexID) {
    PresentVarying o; o.uv=float2((id<<1)&2,id&2);
    o.position=float4(o.uv*float2(2,-2)+float2(-1,1),0,1); return o;
}
float4 PresentPS(PresentVarying i) : SV_Target {
    return float4(displayShade(i.uv),1);
}
)HLSL";
