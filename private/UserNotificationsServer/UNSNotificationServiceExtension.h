//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UNSNotificationServiceExtensionSessionDelegate.h"

@class NSExtension, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface UNSNotificationServiceExtension : NSObject <UNSNotificationServiceExtensionSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSExtension *_extension;
    NSMutableDictionary *_sessionBySessionUUID;
}

+ (void)extensionForNotificationSourceDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_setSession:(id)arg1 forSessionUUID:(id)arg2;
- (id)_takeSessionForSessionUUID:(id)arg1;
- (void)_setupExtension;
- (void)session:(id)arg1 wasCancelledWithError:(id)arg2;
- (void)beginSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)proxy;
- (id)_initWithExtension:(id)arg1;

@end

