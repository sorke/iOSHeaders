//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCNNode;

@interface AVTPhysicsRig : NSObject
{
    SCNNode *rig;
    SCNNode *chainRoot;
    double applyDownForce;
    // Error parsing type: , name: restPosition
    // Error parsing type: , name: restDown
}

@property(nonatomic) double applyDownForce; // @synthesize applyDownForce;
// Error parsing type for property restDown:
// Property attributes: T,N,VrestDown

// Error parsing type for property restPosition:
// Property attributes: T,N,VrestPosition

@property(retain, nonatomic) SCNNode *chainRoot; // @synthesize chainRoot;
@property(retain, nonatomic) SCNNode *rig; // @synthesize rig;
- (void).cxx_destruct;

@end

