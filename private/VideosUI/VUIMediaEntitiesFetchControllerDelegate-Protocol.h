//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, VUIMediaEntitiesFetchController, VUIMediaEntitiesFetchControllerResult;

@protocol VUIMediaEntitiesFetchControllerDelegate <NSObject>
- (void)controller:(VUIMediaEntitiesFetchController *)arg1 fetchRequests:(NSArray *)arg2 didFailWithError:(NSError *)arg3;
- (void)controller:(VUIMediaEntitiesFetchController *)arg1 fetchRequests:(NSArray *)arg2 didCompleteWithResult:(VUIMediaEntitiesFetchControllerResult *)arg3;

@optional
- (_Bool)controllerShouldFetchForContentsChange:(VUIMediaEntitiesFetchController *)arg1;
@end

