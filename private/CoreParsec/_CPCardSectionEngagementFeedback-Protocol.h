//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, _CPCardSectionForFeedback, _CPPunchoutForFeedback;

@protocol _CPCardSectionEngagementFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *resultId;
@property(copy, nonatomic) NSString *cardSectionId;
@property(copy, nonatomic) NSString *parPunchoutActionTarget;
@property(nonatomic) _Bool destinationWasPARPunchout;
@property(retain, nonatomic) _CPCardSectionForFeedback *cardSection;
@property(nonatomic) int actionCardType;
@property(nonatomic) int triggerEvent;
@property(retain, nonatomic) _CPPunchoutForFeedback *destination;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

