//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSOrientationObserverClientDelegate.h"

@class FBSOrientationObserverClient, NSObject<OS_dispatch_queue>, NSString;

@interface FBSOrientationObserver : NSObject <FBSOrientationObserverClientDelegate>
{
    FBSOrientationObserverClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callback_queue;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
- (void)client:(id)arg1 handleOrientationUpdate:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType handler;
- (void)activeInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (long long)activeInterfaceOrientation;
- (void)invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

