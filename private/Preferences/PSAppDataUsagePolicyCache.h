//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSObject<OS_dispatch_queue>;

@interface PSAppDataUsagePolicyCache : NSObject
{
    NSCache *_policyCache;
    struct __CTServerConnection *_ctServerConnection;
    NSObject<OS_dispatch_queue> *_policyPrefetchQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *policyPrefetchQueue; // @synthesize policyPrefetchQueue=_policyPrefetchQueue;
@property(retain, nonatomic) struct __CTServerConnection *ctServerConnection; // @synthesize ctServerConnection=_ctServerConnection;
@property(retain, nonatomic) NSCache *policyCache; // @synthesize policyCache=_policyCache;
- (void).cxx_destruct;
- (_Bool)setUsagePoliciesForBundle:(id)arg1 cellular:(_Bool)arg2 wifi:(_Bool)arg3;
- (_Bool)setCellularUsagePolicy:(id)arg1 forBundle:(id)arg2;
- (id)usagePolicyFor:(id)arg1;
- (void)flushPrefetchingQueue;
- (void)prefetchUsagePolicyFor:(id)arg1;
- (id)fetchUsagePolicyFor:(id)arg1;
- (id)init;
- (void)willEnterForeground;
- (void)dealloc;
- (id)initPrivate;

@end

