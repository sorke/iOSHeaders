//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSUtility/TSUIOChannel-Protocol.h>

@class NSObject;
@protocol OS_dispatch_data, OS_dispatch_queue;

@protocol TSUStreamWriteChannel <TSUIOChannel>
- (void)writeData:(NSObject<OS_dispatch_data> *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 handler:(void (^)(_Bool, NSObject<OS_dispatch_data> *, NSError *))arg3;
@end
