//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, _CPActionItemForFeedback, _CPPunchoutForFeedback, _CPStruct;

@protocol _CPSearchResultForFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) unsigned long long blockId;
@property(nonatomic) _Bool doNotFold;
@property(nonatomic) _Bool isFuzzyMatch;
@property(copy, nonatomic) NSString *userInput;
@property(copy, nonatomic) NSString *fbr;
@property(nonatomic) _Bool publiclyIndexable;
@property(nonatomic) _Bool isLocalApplicationResult;
@property(copy, nonatomic) NSString *completedQuery;
@property(copy, nonatomic) NSString *correctedQuery;
@property(copy, nonatomic) NSString *intendedQuery;
@property(nonatomic) unsigned long long queryId;
@property(nonatomic) _Bool isStaticCorrection;
@property(nonatomic) double rankingScore;
@property(copy, nonatomic) NSString *resultType;
@property(copy, nonatomic) NSString *sectionBundleIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier;
@property(copy, nonatomic) NSString *resultBundleId;
@property(retain, nonatomic) _CPStruct *localFeatures;
@property(copy, nonatomic) NSString *srf;
@property(nonatomic) int type;
@property(retain, nonatomic) _CPPunchoutForFeedback *punchout;
@property(retain, nonatomic) _CPActionItemForFeedback *action;
@property(nonatomic) int topHit;
@property(copy, nonatomic) NSString *identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

