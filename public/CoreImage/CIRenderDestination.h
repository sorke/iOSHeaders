//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIBlendKernel;

@interface CIRenderDestination : NSObject
{
    void *_priv;
}

- (id)debugDescription;
- (id)description;
- (id)imageRepresentation;
- (void)setLabel:(id)arg1;
- (id)label;
@property _Bool blendsInDestinationColorSpace;
@property(retain, nonatomic) CIBlendKernel *blendKernel;
@property(nonatomic) struct CGColorSpace *colorSpace;
- (int)format;
@property(getter=isClamped) _Bool clamped;
- (int)ditherDepth;
@property(getter=isDithered) _Bool dithered;
@property(getter=isFlipped) _Bool flipped;
@property unsigned long long alphaMode;
@property(readonly) unsigned long long height;
@property(readonly) unsigned long long width;
- (id)initWithBitmapData:(void *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5;
- (id)initWithGLTexture:(unsigned int)arg1 target:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 commandBuffer:(id)arg4 mtlTextureProvider:(CDUnknownBlockType)arg5;
- (id)initWithMTLTexture:(id)arg1 commandBuffer:(id)arg2;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 colorSpace:(struct CGColorSpace *)arg4 pixelBufferProvider:(CDUnknownBlockType)arg5;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;
-     // Error parsing type: ^{RenderTask=^^?{atomic<unsigned int>=AI}**i[64c]Q^{Node}{CGRect={CGPoint=dd}{CGSize=dd}}iQ^{__CFString}^{__CFString}{vector<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> >, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > > >=^{unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> >}^{unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> >}{__compressed_pair<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > *, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > > >=^{unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> >}}}dQQQQ}32@0:8^{Image=^^?{atomic<unsigned int>=AI}{CGRect={CGPoint=dd}{CGSize=dd}}^{__CFURL}^v^vI}16^{Context=^^?{atomic<unsigned int>=AI}^{CGColorSpace}^{CGColorSpace}iBBBBB^{CGContext}fB{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}IQQi[64c]B[1024{TreeCacheElement=Q^{Kernel}}]Q^{ObjectCache<CI::Node>}^{ObjectCache<CI::Node>}dd@^{RenderTask}ii^{Context}Q@@}24, name: _render:withContext:
- (void)dealloc;
-     // Error parsing type: @52@0:8^{RenderDestination=^^?{atomic<unsigned int>=AI}^{__CFString}}16Q24Q32i40^{CGColorSpace=}44, name: _initWithInternalRenderDestination:width:height:format:colorspace:
-     // Error parsing type: ^{RenderDestination=^^?{atomic<unsigned int>=AI}^{__CFString}}16@0:8, name: _internalRenderDestination
- (struct CIRenderDestinationInternal *)_internalRepresentation;
- (id)init;

@end

