//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPKPassSyncEngine, NSData, NSString;

@protocol NPKPassSyncEngineDataSource <NSObject>
- (NSData *)passSyncEngine:(NPKPassSyncEngine *)arg1 dataForPassWithUniqueID:(NSString *)arg2;
@end

