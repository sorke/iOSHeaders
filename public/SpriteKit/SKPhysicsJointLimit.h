//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointLimit : SKPhysicsJoint
{
    double _maxLength;
}

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) double maxLength; // @synthesize maxLength=_maxLength;

@end

