//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XCTElementQuery;

@protocol XCTAutomationTarget <NSObject>
- (void)notifyWhenAnimationsAreIdle:(void (^)(NSError *))arg1;
- (void)notifyWhenMainRunLoopIsIdle:(void (^)(NSError *))arg1;
- (void)fetchMatchesForQuery:(XCTElementQuery *)arg1 reply:(void (^)(XCTElementQueryResults *, NSError *))arg2;
- (void)requestHostAppExecutableNameWithReply:(void (^)(NSString *))arg1;
@end

