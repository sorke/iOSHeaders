//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCActionDonation.h"

@class NSData, NSDate, NSString, NSUserActivity;

@interface VCUserActivityDonation : NSObject <VCActionDonation>
{
    NSString *_identifier;
    NSString *_sourceAppIdentifier;
    NSDate *_date;
    NSData *_keyImageData;
    NSDate *_endDate;
    NSUserActivity *_userActivity;
}

+ (id)timestampDateFormatter;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) id uniqueProperty;
@property(readonly, copy, nonatomic) NSString *suggestedPhrase;
- (void)createActionWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *fullDescription;
@property(readonly, nonatomic) NSData *keyImageData; // @synthesize keyImageData=_keyImageData;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)dateString;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifierForLaunching;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifierForDisplay;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (id)initWithUserActivity:(id)arg1 identifier:(id)arg2 sourceAppIdentifier:(id)arg3 date:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

