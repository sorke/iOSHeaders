//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNFuture, NSURL;

@protocol CNUIUserActionURLOpener <NSObject>
- (CNFuture *)openURL:(NSURL *)arg1 isSensitive:(_Bool)arg2 withScheduler:(id <CNScheduler>)arg3;
- (CNFuture *)openURL:(NSURL *)arg1 withScheduler:(id <CNScheduler>)arg2;
@end

