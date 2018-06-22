//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SCNSceneRendererDelegate.h"

@class AVTEyeSkinningDescriptor, AVTPersonalAnimoji, AVTPhysicsController, AVTPupilReflectionCorrectionDescriptor, NSMutableArray, NSString, SCNNode;

@interface AVTAvatar : NSObject <NSCopying, SCNSceneRendererDelegate>
{
    AVTPersonalAnimoji *_avatar;
    SCNNode *_avatarNode;
    SCNNode *_skeleton;
    SCNNode *_headNode;
    SCNNode *_leftEye;
    SCNNode *_rightEye;
    SCNNode *_neckNode;
    SCNNode *_neckPivotNode;
    CDStruct_b01a1f36 *_morphInfoFromARKitBlendShapeIndex;
    int _transitionCount;
    _Bool _arMode;
    _Bool _optimizedForSnapshot;
    AVTPhysicsController *_physicsController;
    NSMutableArray *_clipsPlaying;
    struct SCNVector3 _lookAt;
    NSMutableArray *_correctiveMorpherDescriptors;
    NSMutableArray *_physicalizedMorpherDescriptors;
    NSMutableArray *_morpherDrivenMaterialDescriptors;
    AVTPupilReflectionCorrectionDescriptor *_pupilReflectionCorrectionDescriptor;
    AVTEyeSkinningDescriptor *_eyeSkinningDescriptor;
    // Error parsing type: , name: _arOffset
    float _arScale;
    double _physicsScaleFactor;
}

+ (id)avatarWithDataRepresentation:(id)arg1 error:(id *)arg2;
+ (unsigned char)classIdentifier;
+ (_Bool)canLoadDataRepresentation:(id)arg1;
+ (_Bool)canLoadDataRepresentationWithVersion:(unsigned short)arg1 minimumCompatibleVersion:(unsigned short)arg2 error:(id *)arg3;
+ (void)preloadAvatar:(id)arg1;
+ (id)defaultEnvironment;
+ (void)updateEnvironment:(id)arg1 withAvatar:(id)arg2 optimizeForSnapshot:(_Bool)arg3 arMode:(_Bool)arg4;
+ (struct SCNVector4)applyGazeCorrectionWithInputAngle:translation: /* Error: Ran out of types for this method. */;
+ (id)animationClips;
+ (id)animationClipForExpression:(long long)arg1;
+ (id)avatarWithData:(id)arg1 error:(id *)arg2;
+ (id)avatar;
- (void).cxx_destruct;
- (void)update;
- (_Bool)_decode:(id)arg1 error:(id *)arg2;
- (void)_encode:(id)arg1;
- (id)dataRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct UIImage *)snapshotWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (void)stopTransitionAnimation;
- (void)transitionFromPose:(id)arg1 toPose:(id)arg2 duration:(double)arg3 delay:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)animatePhysicsScaleFactor:(double)arg1 duration:(double)arg2;
- (void)setPhysicsScaleFactor:(double)arg1;
- (_Bool)isTransitioning;
- (void)setPose:(id)arg1;
- (id)pose;
- (void)_resetFaceToRandomPosition;
- (void)setupFaceTracking;
- (CDStruct_b01a1f36)morphInfoForARKitBlendShapeIndex:(unsigned long long)arg1;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(_Bool)arg2;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(_Bool)arg2 pointOfView:(id)arg3;
- (void)applyBlendShapesWithTrackingInfo:(id)arg1;
- (void)setupBlendShapeIndirection;
- (id)effectiveMorphedNodeForTargetName:(id)arg1;
- (_Bool)morphTargetNameIsDrivenByARKit:(id)arg1;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)didAddToScene:(id)arg1;
- (void)willRemoveFromScene:(id)arg1;
- (void)updateEyeOrientationAndReflections;
- (void)setupEyeOrientationAndReflections;
- (_Bool)usesSkinningForEyeOrientation;
- (void)updateMorpherDrivenMaterials;
- (void)removeMorpherDrivenMaterialsInHierarchy:(id)arg1;
- (void)addMorpherDrivenMaterialsInHierarchy:(id)arg1;
- (void)resetMorpherDrivenMaterials;
- (void)applyCorrectiveBlendShapes;
- (void)removeCorrectiveBlendShapesInHierarchy:(id)arg1;
- (void)addCorrectiveBlendShapesInHierarchy:(id)arg1;
- (void)resetCorrectiveBlendShapes;
- (void)evaluatePhysicalizedMorphers;
- (void)removePhysicalizedMorpherDescriptorsInHierarchy:(id)arg1;
- (void)addPhysicalizedMorpherDescriptorsInHierarchy:(id)arg1 ignoreUpperNodes:(_Bool)arg2;
- (void)resetPhysicalizedMorpherDescriptors;
- (id)descriptorsByRemovingDescriptors:(id)arg1 inHierarchy:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
- (void)removeMorphingSkinningControllersInHierarchy:(id)arg1;
- (void)addMorphingSkinningControllersInHierarchy:(id)arg1;
- (void)resetMorphingSkinningControllers;
- (void)removeCustomBehavioursInHierarchy:(id)arg1;
- (void)addCustomBehavioursInHierarchy:(id)arg1;
- (void)resetCustomBehaviours;
- (id)playAnimationClipForSnapshotting:(id)arg1;
- (void)stopAndRemoveAnimationClips;
- (id)playAnimationClip:(id)arg1 usingSceneTime:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)playAnimationClip:(id)arg1 usingSceneTime:(_Bool)arg2;
- (id)playAnimationClip:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)playAnimationClip:(id)arg1;
- (void)updateBindingsOfNode:(id)arg1;
- (void)updateBindings;
- (_Bool)_headMayContainsMorphTargetNamed:(id)arg1;
- (void)lookAt:(struct SCNVector3)arg1;
- (void)lookAt:(struct SCNVector3)arg1 withDuration:(double)arg2;
- (struct SCNVector3)currentLookAt;
- (void)rotateHead:(double)arg1;
- (void)resetARModeBehaviours;
@property(nonatomic) _Bool arMode;
- (void)_updateShaderModifier:(id)arg1 forARMode:(_Bool)arg2 withOnTopMask:(_Bool)arg3;
@property(readonly) SCNNode *avatarNode;
@property(readonly) SCNNode *neckNode;
@property(readonly) SCNNode *headNode;
- (void)setHeadNode:(id)arg1;
- (id)lightingNode;
- (void)setAvatarNode:(id)arg1;
- (float)arScale;
-     // Error parsing type: 16@0:8, name: arOffset
- (void)dealloc;
- (id)init;
- (void)avatarCommonInit;
- (void)setOptimizeForSnapshot:(_Bool)arg1;
- (_Bool)optimizeForSnapshot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

