//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSMutableSet, NSSet, PGGraphNode;

@interface PGPotentialSocialGroupMemory : PGPotentialMemory
{
    NSMutableSet *_mutableMomentNodes;
    PGGraphNode *_socialGroupNode;
    long long _year;
    NSArray *_facedAssets;
    NSSet *_peopleUUIDs;
}

@property(retain) NSSet *peopleUUIDs; // @synthesize peopleUUIDs=_peopleUUIDs;
@property(retain) NSArray *facedAssets; // @synthesize facedAssets=_facedAssets;
@property(readonly) long long year; // @synthesize year=_year;
@property(readonly) PGGraphNode *socialGroupNode; // @synthesize socialGroupNode=_socialGroupNode;
- (void).cxx_destruct;
- (void)addMomentNode:(id)arg1;
- (id)initWithSocialGroupNode:(id)arg1 year:(long long)arg2;

@end
