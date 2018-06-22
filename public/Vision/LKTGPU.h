//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LKTMetalContext;

__attribute__((visibility("hidden")))
@interface LKTGPU : NSObject
{
    LKTMetalContext *_mtlContext;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _computePipelines[9];
    unsigned long long _maxThreadExecutionWidth;
    struct CGSize _pyramid_size[10];
    id <MTLTexture> _I_tex[2][10];
    id <MTLTexture> _I_u32_alias_tex[2][10];
    struct __CVBuffer *_G0_pxbuf;
    struct __CVBuffer *_G1_pxbuf;
    id <MTLTexture> _G0_tex[10];
    id <MTLTexture> _G1_tex[10];
    struct __CVBuffer *_C0_pxbuf;
    struct __CVBuffer *_C1_pxbuf;
    id <MTLTexture> _C0_tex[10];
    id <MTLTexture> _C1_tex[10];
    id <MTLBuffer> _Adiagb_buf[2];
    id <MTLBuffer> _Ixy_buf[2];
    struct __CVBuffer *_w_pxbuf;
    id <MTLTexture> _w_tex[10];
    struct __CVBuffer *_uv_pxbuf[2];
    id <MTLTexture> _uv_tex[2][10];
    id <MTLTexture> _uv_u32_alias_tex[2][10];
    int _current_frame_index;
    int _streamFrameCount;
    id <MTLTexture> _uv_tex_user_ref;
    _Bool _isValid;
    _Bool _needConversionBGRA2YUVA;
    _Bool _useNonLocalRegularization;
    int _width;
    int _height;
    int _nscales;
    int _nwarpings;
    int _nlreg_radius;
    int _nlreg_padding;
    float _nlreg_sigma_l;
    float _nlreg_sigma_c;
    float _nlreg_sigma_w;
}

@property(nonatomic) float nlreg_sigma_w; // @synthesize nlreg_sigma_w=_nlreg_sigma_w;
@property(nonatomic) float nlreg_sigma_c; // @synthesize nlreg_sigma_c=_nlreg_sigma_c;
@property(nonatomic) float nlreg_sigma_l; // @synthesize nlreg_sigma_l=_nlreg_sigma_l;
@property(nonatomic) int nlreg_padding; // @synthesize nlreg_padding=_nlreg_padding;
@property(nonatomic) int nlreg_radius; // @synthesize nlreg_radius=_nlreg_radius;
@property(nonatomic) _Bool useNonLocalRegularization; // @synthesize useNonLocalRegularization=_useNonLocalRegularization;
@property(nonatomic) int nwarpings; // @synthesize nwarpings=_nwarpings;
@property(readonly, nonatomic) int streamFrameCount; // @synthesize streamFrameCount=_streamFrameCount;
@property(readonly, nonatomic) int nscales; // @synthesize nscales=_nscales;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) _Bool needConversionBGRA2YUVA; // @synthesize needConversionBGRA2YUVA=_needConversionBGRA2YUVA;
@property(readonly, nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
- (void).cxx_destruct;
- (int)_doNLRegularizationWithCommandBuffer:(id)arg1 in_uv_tex:(id)arg2 join_tex:(id)arg3 w_tex:(id)arg4 out_uv_tex:(id)arg5;
- (int)_doSolverWithCommandBuffer:(id)arg1 scale:(int)arg2 scale_factor:(id)arg3 in_uv_tex:(id)arg4 out_uv_tex:(id)arg5 out_w_tex: /* Error: Ran out of types for this method. */;
- (int)_computeFeaturesDerivativesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (int)_computeFeaturesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (int)_downscale2XWithCommandBuffer:(id)arg1 in_u32_alias_tex:(id)arg2 out_u32_alias_tex:(id)arg3;
- (int)_zeroFlowWithCommandBuffer:(id)arg1 uv_tex:(id)arg2;
- (_Bool)_createImagePyramidWithCommandBuffer:(id)arg1 in_pixelbuf:(struct __CVBuffer *)arg2 I_idx:(int)arg3 error:(id *)arg4;
- (int)_computeOpticalFlow;
- (_Bool)_setupBufferAndReturnError:(id *)arg1;
- (void)_setupPipelines;
- (_Bool)_initMemory:(int)arg1 height:(int)arg2 nscales:(int)arg3 error:(id *)arg4;
- (void)_setDefaultParameters;
- (int)estimateFlowStream:(struct __CVBuffer *)arg1;
- (int)estimateFlowFromReference:(struct __CVBuffer *)arg1 target:(struct __CVBuffer *)arg2;
- (_Bool)setOutputUV:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (void)setPreset:(long long)arg1;
- (void)waitUntilCompleted;
- (void)reset;
- (void)dealloc;
- (id)initWithMetalContext:(id)arg1 width:(int)arg2 height:(int)arg3 nscales:(int)arg4 error:(id *)arg5;

@end

