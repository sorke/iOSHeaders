//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTLPipelineBufferDescriptor, MTLRenderPipelineDescriptor, NSMutableDictionary, NSObject<OS_dispatch_queue>, PKLRUCache, PKMetalResourceHandlerBuffer, PKMetalShader;

@interface PKMetalResourceHandler : NSObject
{
    id <MTLComputePipelineState> _particleShaderKernelPipelineState;
    id <MTLComputePipelineState> _particleShaderKernelPipelineStateWithVariableSpacing;
    id <MTLComputePipelineState> _paintShaderKernelPipelineState;
    PKMetalShader *_particleShader;
    PKMetalShader *_particleShaderWithAspectRatioSupport;
    PKMetalShader *_paintShader;
    PKMetalShader *_particleShaderForAccumulator;
    PKMetalShader *_particleShaderForAccumulatorWithAspectRatioSupport;
    PKMetalShader *_paintShaderForAccumulator;
    PKMetalShader *_erasePaintShader;
    PKMetalShader *_erasePaintAccumulatorShader;
    PKMetalShader *_eraseOriginalBackShader;
    PKMetalShader *_paperShader;
    PKMetalShader *_blitIntoPaintShader;
    PKMetalShader *_blitShader;
    PKMetalShader *_singleAttachmentBlitShader;
    PKMetalShader *_eraseShader;
    PKMetalShader *_copyAccumulatorIntoPaintShader;
    PKMetalShader *_linesShader;
    id <MTLBuffer> _cachedQuadVertexBuffer;
    id <MTLBuffer> _cachedQuadTexCoordBuffer;
    NSMutableDictionary *_inkTextures;
    struct unordered_map<unsigned long long, PKMetalShader *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, PKMetalShader *>>> _uberShaders;
    id <MTLLibrary> _defaultLibrary;
    id <MTLTexture> _paperTexture;
    struct CGSize _paperTextureSize;
    MTLRenderPipelineDescriptor *_sharedPipelineDescriptor;
    MTLRenderPipelineDescriptor *_singleColorPipelineDescriptor;
    PKLRUCache *_strokeRenderCache;
    id <MTLBuffer> _particleIndexBuffer;
    id <MTLBuffer> _randomNumberBuffer;
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _signpost_id;
    PKMetalResourceHandlerBuffer *_purgeableResourceBuffer;
    PKMetalResourceHandlerBuffer *_resourceBuffer;
    PKMetalResourceHandlerBuffer *_gpuResourceBuffer;
    id <MTLDevice> _device;
    unsigned long long _pixelFormat;
    unsigned long long _paintAndParticlePixelFormat;
    unsigned long long _stencilPixelFormat;
}

+ (id)inkBundle;
+ (id)resourceHandlerWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 paintAndParticlePixelFormat:(unsigned long long)arg3 stencilPixelFormat:(unsigned long long)arg4;
@property(readonly, nonatomic) unsigned long long stencilPixelFormat; // @synthesize stencilPixelFormat=_stencilPixelFormat;
@property(readonly, nonatomic) unsigned long long paintAndParticlePixelFormat; // @synthesize paintAndParticlePixelFormat=_paintAndParticlePixelFormat;
@property(readonly, nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_signpostLog;
- (id)newGPUBufferWithLength:(unsigned long long)arg1 outOffset:(unsigned long long *)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 bytes:(const void *)arg2 outOffset:(unsigned long long *)arg3;
- (id)newPurgeableBufferWithLength:(unsigned long long)arg1 bytes:(const void *)arg2 outOffset:(unsigned long long *)arg3;
- (void)_setupParticleIndexBuffer;
- (void)_setupRandomNumberBuffer;
- (const float *)randomNumberArray;
- (id)particleIndexBuffer;
- (id)randomNumberBuffer;
@property(readonly, nonatomic) struct CGSize paperTextureSize;
@property(readonly, nonatomic) id <MTLTexture> paperTexture;
- (void)_setupPaperTexture;
- (id)inkTextureNamed:(id)arg1;
- (id)_inkTextureNamed:(id)arg1;
- (id)textureByUnpremultiplyingAlphaInTexture:(id)arg1;
- (id)cachedQuadTexCoordBuffer;
- (id)cachedQuadVertexBuffer;
- (void)_setupCachedQuad;
- (id)uberShaderForKey:(CDStruct_f4fa7470)arg1;
- (id)constantValuesForKey:(long long)arg1 clipping:(_Bool)arg2 colorAttachmentIndex:(unsigned int)arg3;
- (id)compositeEraseShaderWithMode:(long long)arg1 clipping:(_Bool)arg2 colorAttachmentIndex:(unsigned long long)arg3;
- (id)compositeSoftWhiteShaderWithMode:(long long)arg1 clipping:(_Bool)arg2 colorAttachmentIndex:(unsigned long long)arg3;
- (id)compositeMultiplyShaderWithMode:(long long)arg1 clipping:(_Bool)arg2 colorAttachmentIndex:(unsigned long long)arg3;
- (id)compositeOverShaderWithMode:(long long)arg1 clipping:(_Bool)arg2 colorAttachmentIndex:(unsigned long long)arg3;
- (id)compositePaperShaderWithMode:(long long)arg1 colorAttachmentIndex:(unsigned long long)arg2;
- (void)_preloadInkTextures;
- (void)_preloadShaders;
- (id)newLinesShader;
- (id)copyFramebufferShaderWithSourceColorAttachmentIndex:(unsigned int)arg1 destinationColorAttachmentIndex:(unsigned int)arg2;
- (id)blitShaderWithColorAttachmentIndex:(unsigned int)arg1 sharedPipelineDescriptor:(_Bool)arg2;
- (id)newPaperShader;
- (id)particleShaderWithColorAttachmentIndex:(unsigned int)arg1 aspectRatioSupport:(_Bool)arg2;
- (id)paintShaderWithColorAttachmentIndex:(unsigned int)arg1;
- (id)eraseShaderWithColorAttachmentIndex:(unsigned int)arg1;
- (id)eraseShaderWithColorAttachmentIndex:(unsigned int)arg1 sharedPipelineDescriptor:(_Bool)arg2;
- (id)linesShader;
- (id)copyAccumulatorIntoPaintShader;
- (id)eraseShader;
- (id)singleAttachmentBlitShader;
- (id)blitShader;
- (id)blitIntoPaintShader;
@property(readonly, nonatomic) MTLPipelineBufferDescriptor *sharedPipelineDescriptor;
- (id)eraseOriginalBackShader;
- (id)erasePaintAccumulatorShader;
- (id)erasePaintShader;
- (id)paperShader;
- (id)paintShaderKernelPipelineState;
- (id)particleShaderKernelPipelineState;
- (id)particleShaderKernelPipelineStateWithVariableSpacing;
- (id)particleShaderForAccumulatorWithAspectRatioSupport;
- (id)particleShaderForAccumulator;
- (id)paintShaderForAccumulator;
- (id)particleShaderWithAspectRatioSupport;
- (id)particleShader;
- (id)paintShader;
- (id)strokeRenderCache;
- (id)initWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 paintAndParticlePixelFormat:(unsigned long long)arg3 stencilPixelFormat:(unsigned long long)arg4;
- (id)init;

@end

