//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDTaskServer.h"
#import "HKUnitTestingTaskServerInterface.h"

@class HDProfile, HDXPCClient, NSString, NSUUID;

@interface HDStandardTaskServer : NSObject <HDTaskServer, HKUnitTestingTaskServerInterface>
{
    NSUUID *_taskUUID;
    HDProfile *_profile;
    HDXPCClient *_client;
    id <HDTaskServerDelegate> _delegate;
}

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
@property(readonly, nonatomic) __weak id <HDTaskServerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HDXPCClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, copy, nonatomic) NSUUID *taskUUID; // @synthesize taskUUID=_taskUUID;
- (void).cxx_destruct;
- (void)remote_unitTesting_createTaskServerNoOpWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

