//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XCTElementQuery, XCTElementQueryResults;

@protocol XCTRunnerAutomationSession <NSObject>
@property(readonly) _Bool supportsAnimationsIdleNotifications;
@property(readonly) _Bool supportsMainRunLoopIdleNotifications;
- (void)notifyWhenAnimationsAreIdle:(void (^)(NSError *))arg1;
- (void)notifyWhenMainRunLoopIsIdle:(void (^)(NSError *))arg1;
- (XCTElementQueryResults *)matchesForQuery:(XCTElementQuery *)arg1 error:(id *)arg2;
@end

