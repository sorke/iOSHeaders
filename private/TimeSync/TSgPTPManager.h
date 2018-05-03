//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, TSgPTPClock;

@interface TSgPTPManager : NSObject
{
    unsigned int _connection;
    TSgPTPClock *_systemDomain;
    NSObject<OS_dispatch_queue> *_systemDomainQueue;
    unsigned long long _systemDomainClockIdentifier;
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)gPTPManager;
+ (id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)arg1;
+ (id)sharedgPTPManager;
+ (void)notifyWhengPTPManagerIsAvailable:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long systemDomainClockIdentifier; // @synthesize systemDomainClockIdentifier=_systemDomainClockIdentifier;
- (void)dealloc;
- (_Bool)removeDomainWithIdentifier:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)addDomain:(unsigned long long *)arg1 error:(id *)arg2;
@property(readonly, retain, nonatomic) TSgPTPClock *systemDomain; // @dynamic systemDomain;
- (id)init;

@end

