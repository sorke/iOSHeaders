//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, PARBag;

@protocol PARClientXPC <NSObject>
- (void)didDeleteResource:(NSString *)arg1;
- (void)didDownloadResource:(NSString *)arg1;
- (void)bagDidLoad:(PARBag *)arg1 error:(NSError *)arg2;
@end

