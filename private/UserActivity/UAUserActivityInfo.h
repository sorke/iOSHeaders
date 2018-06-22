//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSError, NSMutableDictionary, NSSet, NSString, NSURL, NSUUID, SFPeerDevice, _LSUserActivityWasContinuedInfo;

@interface UAUserActivityInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_payloads;
    _Bool _eligibleForHandoff;
    _Bool _eligibleForSearch;
    _Bool _eligibleForPublicIndexing;
    _Bool _eligibleForReminders;
    _Bool _eligibleForPrediction;
    _Bool _eligibleToAdvertise;
    _Bool _eligibleToAlwaysAdvertise;
    _Bool _dirty;
    _Bool _payloadAvailable;
    _Bool _payloadRequested;
    NSUUID *_uuid;
    unsigned long long _type;
    NSString *_title;
    NSString *_activityType;
    NSString *_dynamicActivityType;
    NSString *_teamIdentifier;
    NSURL *_webpageURL;
    NSURL *_referrerURL;
    NSDictionary *_options;
    NSError *_encodedUserInfoError;
    NSSet *_requiredUserInfoKeys;
    NSDate *_when;
    NSDate *_lastInterestingTime;
    NSDictionary *_encodingOptions;
    NSString *_contentUserAction;
    NSSet *_keywords;
    NSDate *_expirationDate;
    NSString *_persistentIdentifier;
    NSError *_error;
    SFPeerDevice *_peerDevice;
    NSString *_bundleIdentifier;
    _LSUserActivityWasContinuedInfo *_wasContinuedInfo;
}

+ (id)encodedInfoToOldEncodedInfo:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain) _LSUserActivityWasContinuedInfo *wasContinuedInfo; // @synthesize wasContinuedInfo=_wasContinuedInfo;
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) SFPeerDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(getter=isPayloadRequested) _Bool payloadRequested; // @synthesize payloadRequested=_payloadRequested;
@property(getter=isPayloadAvailable) _Bool payloadAvailable; // @synthesize payloadAvailable=_payloadAvailable;
@property(readonly, getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(copy) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy) NSSet *keywords; // @synthesize keywords=_keywords;
@property(copy) NSString *contentUserAction; // @synthesize contentUserAction=_contentUserAction;
@property(copy) NSDictionary *encodingOptions; // @synthesize encodingOptions=_encodingOptions;
@property(readonly) _Bool eligibleToAlwaysAdvertise; // @synthesize eligibleToAlwaysAdvertise=_eligibleToAlwaysAdvertise;
@property(readonly) _Bool eligibleToAdvertise; // @synthesize eligibleToAdvertise=_eligibleToAdvertise;
@property _Bool eligibleForPrediction; // @synthesize eligibleForPrediction=_eligibleForPrediction;
@property _Bool eligibleForReminders; // @synthesize eligibleForReminders=_eligibleForReminders;
@property _Bool eligibleForPublicIndexing; // @synthesize eligibleForPublicIndexing=_eligibleForPublicIndexing;
@property _Bool eligibleForSearch; // @synthesize eligibleForSearch=_eligibleForSearch;
@property _Bool eligibleForHandoff; // @synthesize eligibleForHandoff=_eligibleForHandoff;
@property(copy) NSDate *lastInterestingTime; // @synthesize lastInterestingTime=_lastInterestingTime;
@property(copy) NSDate *when; // @synthesize when=_when;
@property(copy) NSSet *requiredUserInfoKeys; // @synthesize requiredUserInfoKeys=_requiredUserInfoKeys;
@property(copy) NSError *encodedUserInfoError; // @synthesize encodedUserInfoError=_encodedUserInfoError;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSURL *referrerURL; // @synthesize referrerURL=_referrerURL;
@property(copy) NSURL *webpageURL; // @synthesize webpageURL=_webpageURL;
@property(copy) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property(copy) NSString *dynamicActivityType; // @synthesize dynamicActivityType=_dynamicActivityType;
@property(copy) NSString *activityType; // @synthesize activityType=_activityType;
@property(copy) NSString *title; // @synthesize title=_title;
@property unsigned long long type; // @synthesize type=_type;
@property(copy) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)statusString;
- (id)description;
- (id)logString;
- (id)archiveUserActivityInfo;
- (void)clearPayload;
- (_Bool)wasResumedOnAnotherDeviceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)requestPayloadWithCompletionHandlerEvenIfClean:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)requestPayloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)optionalUserActivityData;
- (id)secondaryUserActivityString;
- (id)userActivityString;
- (void)_createUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3;
- (_Bool)setPayload:(id)arg1 identifier:(id)arg2;
- (id)payloadForIdentifier:(id)arg1;
- (id)payloadIdentifiers;
@property(copy) NSDictionary *payloads;
- (id)copyUserActivityInfoWithUUID:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithArchivedUserActivityInfo:(id)arg1;
- (id)initWithUserActivityInfo:(id)arg1;
- (id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3;

@end

