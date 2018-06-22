//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface PRSL2FeatureVector : NSObject <NSCopying>
{
    struct PRSL2FeatureScoreSmallCache _cache;
    void *_featureData;
    unsigned short _featureDataSize;
    unsigned char _flags;
    unsigned char _values;
    float _originalL2Score;
    float _experimentalScore;
    NSString *_bundleID;
    NSString *_device_type;
    NSDictionary *_searchThroughCEPData;
    struct ranking_index_score_t _indexScore;
}

+ (struct FeatureInfo *)featureForName:(id)arg1;
+ (id)contextWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3;
+ (struct __CFSet *)getL2FeatureSet;
+ (void)initialize;
@property(nonatomic) struct ranking_index_score_t indexScore; // @synthesize indexScore=_indexScore;
@property(retain, nonatomic) NSDictionary *searchThroughCEPData; // @synthesize searchThroughCEPData=_searchThroughCEPData;
@property(retain, nonatomic) NSString *device_type; // @synthesize device_type=_device_type;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) float experimentalScore; // @synthesize experimentalScore=_experimentalScore;
@property(nonatomic) float originalL2Score; // @synthesize originalL2Score=_originalL2Score;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)cleanup;
- (_Bool)serializeToJSON:(void *)arg1 valuesOnly:(_Bool)arg2 ignoreDefaultValues:(_Bool)arg3;
- (id)dictionaryRepresentationWithoutDefaultValues;
- (id)_dictionaryRepresentationWithoutDefaultValues:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (void)setScores:(float *)arg1 forFeatures:(unsigned short *)arg2 count:(unsigned long long)arg3;
- (float *)getAllScores:(float [1173])arg1;
- (float)scoreForFeature:(unsigned short)arg1;
@property(readonly, nonatomic) _Bool receiverIsVip;
@property(readonly, nonatomic) _Bool senderIsVip;
@property(readonly, nonatomic) _Bool vipSenderMatchesQuery;
@property(nonatomic) _Bool isAppInDock;
@property(nonatomic) _Bool isSiriAction;
@property(nonatomic) _Bool displayNameFuzzySpecialInsertion;
- (id)init;

@end

