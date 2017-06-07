//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDeviceSetupOperationHandler, SFDeviceOperationHandlerWiFiSetup, SFService, SFSession;
@protocol OS_dispatch_queue;

@interface SFDeviceRepairService : NSObject
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    SFService *_sfService;
    SFSession *_sfSession;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned long long _problemFlags;
    CDUnknownBlockType _progressHandler;
}

@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) unsigned long long problemFlags; // @synthesize problemFlags=_problemFlags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleGetProblemsRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_sfServiceStart;
- (void)_invalidate;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end
