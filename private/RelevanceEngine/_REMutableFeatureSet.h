//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/REMutableFeatureSet.h>

@class NSMutableSet;

@interface _REMutableFeatureSet : REMutableFeatureSet
{
    NSMutableSet *_names;
    NSMutableSet *_features;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllFeatures;
- (void)removeFeature:(id)arg1;
- (void)addFeature:(id)arg1;
- (_Bool)containsFeature:(id)arg1;
- (id)featureWithName:(id)arg1;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithFeature:(id)arg1;
- (id)initWithFeatures:(id)arg1;
- (id)init;

@end

