//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RECondition.h>

@class REFeature;

@interface _REHasFeatureRuleCondition : RECondition
{
    _Bool _contains;
    REFeature *_feature;
}

@property(readonly, nonatomic) _Bool contains; // @synthesize contains=_contains;
@property(readonly, nonatomic) REFeature *feature; // @synthesize feature=_feature;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)_acceptsFeatureMap:(id)arg1;
- (id)_notCondition;
- (id)_dependentFeatures;
- (id)initWithFeature:(id)arg1 contains:(_Bool)arg2;

@end

