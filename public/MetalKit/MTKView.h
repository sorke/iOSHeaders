//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CALayerDelegate.h"
#import "NSCoding.h"

@class MTLRenderPassDescriptor, NSString;

@interface MTKView : UIView <NSCoding, CALayerDelegate>
{
    _Bool _framebufferOnly;
    _Bool _presentsWithTransaction;
    _Bool _enableSetNeedsDisplay;
    _Bool _autoResizeDrawable;
    _Bool _paused;
    unsigned int _clearStencil;
    id <MTKViewDelegate> _delegate;
    id <MTLDevice> _device;
    id <MTLDrawable> _currentDrawable;
    unsigned long long _colorPixelFormat;
    unsigned long long _depthStencilPixelFormat;
    unsigned long long _sampleCount;
    double _clearDepth;
    id <MTLTexture> _depthStencilTexture;
    id <MTLTexture> _multisampleColorTexture;
    MTLRenderPassDescriptor *_currentRenderPassDescriptor;
    long long _preferredFramesPerSecond;
    struct CGColorSpace *_colorspace;
    struct CGSize _drawableSize;
    CDStruct_3ead2808 _clearColor;
}

+ (Class)layerClass;
@property(nonatomic) struct CGColorSpace *colorspace; // @synthesize colorspace=_colorspace;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) struct CGSize drawableSize; // @synthesize drawableSize=_drawableSize;
@property(nonatomic) _Bool autoResizeDrawable; // @synthesize autoResizeDrawable=_autoResizeDrawable;
@property(nonatomic) _Bool enableSetNeedsDisplay; // @synthesize enableSetNeedsDisplay=_enableSetNeedsDisplay;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor; // @synthesize currentRenderPassDescriptor=_currentRenderPassDescriptor;
@property(readonly, nonatomic) id <MTLTexture> multisampleColorTexture; // @synthesize multisampleColorTexture=_multisampleColorTexture;
@property(readonly, nonatomic) id <MTLTexture> depthStencilTexture; // @synthesize depthStencilTexture=_depthStencilTexture;
@property(nonatomic) unsigned int clearStencil; // @synthesize clearStencil=_clearStencil;
@property(nonatomic) double clearDepth; // @synthesize clearDepth=_clearDepth;
@property(nonatomic) CDStruct_3ead2808 clearColor; // @synthesize clearColor=_clearColor;
@property(nonatomic) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) unsigned long long depthStencilPixelFormat; // @synthesize depthStencilPixelFormat=_depthStencilPixelFormat;
@property(nonatomic) unsigned long long colorPixelFormat; // @synthesize colorPixelFormat=_colorPixelFormat;
@property(nonatomic) _Bool presentsWithTransaction; // @synthesize presentsWithTransaction=_presentsWithTransaction;
@property(nonatomic) _Bool framebufferOnly; // @synthesize framebufferOnly=_framebufferOnly;
@property(readonly, nonatomic) id <MTLDrawable> currentDrawable; // @synthesize currentDrawable=_currentDrawable;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(nonatomic) __weak id <MTKViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)draw;
- (void)releaseDrawables;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 device:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)__initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

