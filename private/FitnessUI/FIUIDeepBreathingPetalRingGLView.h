//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKGLView.h"

@class GLKTextureInfo;

@interface FIUIDeepBreathingPetalRingGLView : HKGLView
{
    unsigned int _program;
    // Error parsing type: , name: _ringCenterVector
    unsigned int _vertexBuffer;
    unsigned int _indexBuffer;
    struct {
        union _GLKVector2 position;
        union _GLKVector2 coordinate;
    } _vertices[25];
    unsigned int _indices[72];
    unsigned int _projectionMatrixUniform;
    unsigned int _textureSamplerUniform;
    unsigned int _petalPositionUniform;
    unsigned int _petalPropertiesUniform;
    unsigned int _textureRotationUniform;
    GLKTextureInfo *_texture;
    // Error parsing type: [20], name: _circlePosition
    // Error parsing type: [20], name: _circleProperties
    // Error parsing type: , name: _textureRotationVector
    _Bool _showBlurTrails;
    float _ringRadius;
    id <FIUIDeepBreathingPetalRingGLViewDelegate> _petalRingDelegate;
    long long _numberOfPetals;
    long long _numberOfVisiblePetals;
    struct CGPoint _ringCenter;
}

@property(readonly, nonatomic) _Bool showBlurTrails; // @synthesize showBlurTrails=_showBlurTrails;
@property(readonly, nonatomic) long long numberOfVisiblePetals; // @synthesize numberOfVisiblePetals=_numberOfVisiblePetals;
@property(readonly, nonatomic) long long numberOfPetals; // @synthesize numberOfPetals=_numberOfPetals;
@property(nonatomic) float ringRadius; // @synthesize ringRadius=_ringRadius;
@property(nonatomic) struct CGPoint ringCenter; // @synthesize ringCenter=_ringCenter;
@property(nonatomic) __weak id <FIUIDeepBreathingPetalRingGLViewDelegate> petalRingDelegate; // @synthesize petalRingDelegate=_petalRingDelegate;
- (void).cxx_destruct;
- (void)_teardown;
- (unsigned int)drawInRect:(struct CGRect)arg1 withContext:(id)arg2;
- (void)_updateVertices;
- (void)setGradientRotationAngle:(float)arg1;
- (void)_clearCirclesInRange:(struct _NSRange)arg1;
- (void)setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(_Bool)arg2;
- (void)_setCircleAtIndex:(long long)arg1 center:(struct CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;
- (void)setPetalAtIndex:(long long)arg1 center:(struct CGPoint)arg2 radius:(float)arg3 alpha:(float)arg4;
- (void)setBlurTrailAtIndex:(long long)arg1 center:(struct CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;
- (double)_maxPetalRingRadius;
- (void)_context_applyInitialState;
- (void)_context_setupScene;
- (void)_context_findUniformsAndAttributes;
- (void)_context_createBuffers;
- (void)_context_loadShadersWithNumberOfPetals:(long long)arg1 showBlurTrails:(_Bool)arg2;
- (void)update;
- (void)dealloc;
- (void)importDataFromPetalRing:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 numberOfPetals:(long long)arg2 showBlurTrails:(_Bool)arg3;

@end

