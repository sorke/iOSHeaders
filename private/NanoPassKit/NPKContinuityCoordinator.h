//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserActivity;
@protocol OS_dispatch_queue;

@interface NPKContinuityCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSUserActivity *_provisionPassUserActivity;
    NSUserActivity *_getPaymentPassesUserActivity;
    NSUserActivity *_passListUserActivity;
    NSUserActivity *_individualPassUserActivity;
    NSUserActivity *_currentUserActivity;
}

+ (id)sharedContinuityCoordinator;
@property(nonatomic) __weak NSUserActivity *currentUserActivity; // @synthesize currentUserActivity=_currentUserActivity;
@property(retain, nonatomic) NSUserActivity *individualPassUserActivity; // @synthesize individualPassUserActivity=_individualPassUserActivity;
@property(retain, nonatomic) NSUserActivity *passListUserActivity; // @synthesize passListUserActivity=_passListUserActivity;
@property(retain, nonatomic) NSUserActivity *getPaymentPassesUserActivity; // @synthesize getPaymentPassesUserActivity=_getPaymentPassesUserActivity;
@property(retain, nonatomic) NSUserActivity *provisionPassUserActivity; // @synthesize provisionPassUserActivity=_provisionPassUserActivity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_saveUserActivity:(id)arg1;
- (id)_skeletonBridgeUserActivity;
- (void)invalidateAllActivities;
- (id)userActivityForPassWithUniqueID:(id)arg1;
- (void)userNeedsPaymentPasses;
- (void)userNeedsToProvisionPassWithUniqueID:(id)arg1;
- (void)userViewingPassWithUniqueID:(id)arg1 isPaymentPass:(_Bool)arg2;
- (void)userViewingPassList;
- (void)dealloc;
- (id)_init;
- (id)init;

@end
