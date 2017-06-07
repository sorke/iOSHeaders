//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/NSObject-Protocol.h>

@class NSArray, NSError, OSActivityStream;

@protocol OSActivityStreamDelegate <NSObject>
- (_Bool)activityStream:(OSActivityStream *)arg1 results:(NSArray *)arg2;

@optional
- (_Bool)activityStream:(OSActivityStream *)arg1 results:(NSArray *)arg2 error:(NSError *)arg3;
- (void)streamDidStop:(OSActivityStream *)arg1;
- (void)streamDidFail:(OSActivityStream *)arg1 error:(NSError *)arg2;
- (void)streamDidStart:(OSActivityStream *)arg1;
@end
