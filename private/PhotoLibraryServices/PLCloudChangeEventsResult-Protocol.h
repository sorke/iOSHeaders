//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PLCloudChangeEventsResult <NSObject>
@property(readonly, copy) NSString *currentTokenDescription;
@property(readonly) long long resultType;
- (void)enumerateLocalEventsWithBlock:(void (^)(NSDictionary *, _Bool *))arg1;
@end

