//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, SKNode;

@interface SKPhysicsBody : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _dynamic;
    _Bool _usesPreciseCollisionDetection;
    _Bool _allowsRotation;
    _Bool _pinned;
    _Bool _resting;
    _Bool _affectedByGravity;
    unsigned int _fieldBitMask;
    unsigned int _categoryBitMask;
    unsigned int _collisionBitMask;
    unsigned int _contactTestBitMask;
    double _friction;
    double _charge;
    double _restitution;
    double _linearDamping;
    double _angularDamping;
    double _density;
    double _mass;
    double _area;
    NSArray *_joints;
    SKNode *_node;
    double _angularVelocity;
    struct CGVector _velocity;
}

+ (id)bodyWithBodies:(id)arg1;
+ (id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(struct CGSize)arg3 accuracy:(float)arg4;
+ (id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(struct CGSize)arg3;
+ (id)bodyWithTexture:(id)arg1 size:(struct CGSize)arg2;
+ (id)bodyWithEdgeLoopFromRect:(struct CGRect)arg1;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (id)bodyWithPolygonFromPath:(struct CGPath *)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1 center:(struct CGPoint)arg2;
+ (id)bodyWithCircleOfRadius:(double)arg1;
+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) double angularVelocity; // @synthesize angularVelocity=_angularVelocity;
@property(nonatomic) struct CGVector velocity; // @synthesize velocity=_velocity;
@property(readonly, nonatomic) __weak SKNode *node; // @synthesize node=_node;
@property(readonly, nonatomic) NSArray *joints; // @synthesize joints=_joints;
@property(nonatomic) unsigned int contactTestBitMask; // @synthesize contactTestBitMask=_contactTestBitMask;
@property(nonatomic) unsigned int collisionBitMask; // @synthesize collisionBitMask=_collisionBitMask;
@property(nonatomic) unsigned int categoryBitMask; // @synthesize categoryBitMask=_categoryBitMask;
@property(nonatomic) unsigned int fieldBitMask; // @synthesize fieldBitMask=_fieldBitMask;
@property(nonatomic) _Bool affectedByGravity; // @synthesize affectedByGravity=_affectedByGravity;
@property(readonly, nonatomic) double area; // @synthesize area=_area;
@property(nonatomic) double mass; // @synthesize mass=_mass;
@property(nonatomic) double density; // @synthesize density=_density;
@property(nonatomic) double angularDamping; // @synthesize angularDamping=_angularDamping;
@property(nonatomic) double linearDamping; // @synthesize linearDamping=_linearDamping;
@property(nonatomic) double restitution; // @synthesize restitution=_restitution;
@property(nonatomic) double charge; // @synthesize charge=_charge;
@property(nonatomic) double friction; // @synthesize friction=_friction;
@property(nonatomic, getter=isResting) _Bool resting; // @synthesize resting=_resting;
@property(nonatomic) _Bool pinned; // @synthesize pinned=_pinned;
@property(nonatomic) _Bool allowsRotation; // @synthesize allowsRotation=_allowsRotation;
@property(nonatomic) _Bool usesPreciseCollisionDetection; // @synthesize usesPreciseCollisionDetection=_usesPreciseCollisionDetection;
@property(nonatomic, getter=isDynamic) _Bool dynamic; // @synthesize dynamic=_dynamic;
- (void).cxx_destruct;
- (id)allContactedBodies;
- (void)applyAngularImpulse:(double)arg1;
- (void)applyImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyImpulse:(struct CGVector)arg1;
- (void)applyTorque:(double)arg1;
- (void)applyForce:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyForce:(struct CGVector)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

