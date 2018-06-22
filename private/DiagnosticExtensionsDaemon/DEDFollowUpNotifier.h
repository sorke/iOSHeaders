//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DEDNotifier.h"
#import "DEDSecureArchiving.h"
#import "NSSecureCoding.h"

@class DEDNotifierConfiguration, FLFollowUpController, NSObject<OS_os_log>, NSString;

@interface DEDFollowUpNotifier : NSObject <DEDNotifier, DEDSecureArchiving, NSSecureCoding>
{
    DEDNotifierConfiguration *_config;
    NSString *_bugSessionIdentifier;
    FLFollowUpController *_followUpController;
    NSObject<OS_os_log> *_log;
}

+ (_Bool)supportsSecureCoding;
+ (id)archivedClasses;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) FLFollowUpController *followUpController; // @synthesize followUpController=_followUpController;
@property(retain) NSString *bugSessionIdentifier; // @synthesize bugSessionIdentifier=_bugSessionIdentifier;
@property __weak DEDNotifierConfiguration *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)cancelNotification;
- (void)scheduleNotification;
- (id)identifier;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

