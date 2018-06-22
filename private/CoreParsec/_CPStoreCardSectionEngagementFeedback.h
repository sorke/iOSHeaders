//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPProcessableFeedback.h"
#import "_CPStoreCardSectionEngagementFeedback.h"

@class NSData, NSDictionary, NSString, _CPCardSectionForFeedback, _CPPunchoutForFeedback;

@interface _CPStoreCardSectionEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPStoreCardSectionEngagementFeedback, NSSecureCoding>
{
    int _triggerEvent;
    int _actionCardType;
    int _productPageResult;
    unsigned long long _timestamp;
    _CPPunchoutForFeedback *_destination;
    _CPCardSectionForFeedback *_cardSection;
    NSString *_cardSectionId;
    NSString *_resultId;
}

@property(copy, nonatomic) NSString *resultId; // @synthesize resultId=_resultId;
@property(copy, nonatomic) NSString *cardSectionId; // @synthesize cardSectionId=_cardSectionId;
@property(nonatomic) int productPageResult; // @synthesize productPageResult=_productPageResult;
@property(retain, nonatomic) _CPCardSectionForFeedback *cardSection; // @synthesize cardSection=_cardSection;
@property(nonatomic) int actionCardType; // @synthesize actionCardType=_actionCardType;
@property(nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(retain, nonatomic) _CPPunchoutForFeedback *destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)init;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) _Bool requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end

