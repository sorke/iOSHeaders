//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface PXMemoriesSeenHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)defaultHelper;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)_clearPendingNotificationForMemory:(id)arg1 inLibrary:(id)arg2;
- (void)clearAnyPendingStateFromMemories:(id)arg1 inLibrary:(id)arg2;
- (void)clearAnyPendingNotificationsFromMemories:(id)arg1 inLibrary:(id)arg2;
- (id)init;

@end

