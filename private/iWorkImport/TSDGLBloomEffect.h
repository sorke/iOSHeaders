//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSDGLFrameBuffer, TSDGLShader;

__attribute__((visibility("hidden")))
@interface TSDGLBloomEffect : NSObject
{
    struct CGSize _effectSize;
    struct CGSize _blurBufferSize;
    TSDGLFrameBuffer *_colorFramebuffer;
    TSDGLFrameBuffer *_blurFramebuffer;
    id <TSDGLDataBuffer> _dataBuffer;
    id <TSDGLDataBuffer> _blurTransferDataBuffer;
    id <TSDGLDataBuffer> _blurDataBuffer;
    TSDGLShader *_blurHorizontalShader;
    TSDGLShader *_blurVerticalShader;
    TSDGLShader *_bloomShader;
    TSDGLShader *_fboTransferShader;
    int _oldViewportRect[4];
    _Bool _oldViewportRectInitialized;
}

- (void)drawBloomEffectWithMVPMatrix:(struct CATransform3D)arg1 bloomAmount:(double)arg2 currentGLFramebuffer:(int)arg3 GLState:(id)arg4;
- (void)p_blurColorBufferWithPreviousFramebuffer:(int)arg1 GLState:(id)arg2;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)bindFramebuffer;
- (void)p_setupBuffers;
- (void)p_setupShaders;
- (void)teardown;
- (void)dealloc;
- (id)initWithEffectSize:(struct CGSize)arg1 blurScale:(double)arg2;

@end

