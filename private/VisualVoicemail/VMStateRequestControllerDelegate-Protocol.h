//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, VMStateRequest, VMStateRequestController;

@protocol VMStateRequestControllerDelegate <NSObject>

@optional
- (void)stateRequestController:(VMStateRequestController *)arg1 didSendStateRequest:(VMStateRequest *)arg2 error:(NSError *)arg3;
@end

