//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, UNSKeyedDictionaryRepository;

@interface UNSPushRegistrationRepository : NSObject
{
    UNSKeyedDictionaryRepository *_repository;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;
- (void)_queue_performMigration;
- (void)_queue_removeRegistrationForBundleIdentifier:(id)arg1;
- (void)_queue_setRegistration:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_registrationForBundleIdentifier:(id)arg1;
- (void)performMigration;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)removeRegistrationForBundleIdentifier:(id)arg1;
- (void)setRegistration:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)registrationForBundleIdentifier:(id)arg1;
- (id)allBundleIdentifiers;
- (id)initWithDirectory:(id)arg1;

@end

