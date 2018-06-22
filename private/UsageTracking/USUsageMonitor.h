//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface USUsageMonitor : NSObject
{
    NSXPCConnection *_xpcConnection;
}

@property(readonly) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)checkStatusOfBudgets:(id)arg1 clientIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)checkStatusOfAllBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)checkStatusOfBudgets:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)checkStatusOfBudgets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopMonitoringAllBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopMonitoringBudgets:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stopMonitoringBudgets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startMonitoringBudgets:(id)arg1 darwinNotificationName:(id)arg2 notificationTimes:(id)arg3 clientIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)startMonitoringBudgets:(id)arg1 darwinNotificationName:(id)arg2 notificationTimes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

