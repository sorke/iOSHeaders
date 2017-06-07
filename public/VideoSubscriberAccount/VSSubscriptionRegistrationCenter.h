//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSRemoteNotifierDelegate-Protocol.h>
#import <VideoSubscriberAccount/VSSubscriptionServiceProtocol-Protocol.h>

@class NSMutableDictionary, NSOperationQueue, NSString, VSDelayOperation, VSLinkedOnOrAfterChecker, VSRemoteNotifier, VSSecurityTask, VSSubscriptionFetchOptionsValidator, VSSubscriptionPredicateFactory, VSSubscriptionServiceConnection;

@interface VSSubscriptionRegistrationCenter : NSObject <VSRemoteNotifierDelegate, VSSubscriptionServiceProtocol>
{
    VSSubscriptionPredicateFactory *_predicateFactory;
    VSSubscriptionFetchOptionsValidator *_fetchOptionsValidator;
    NSOperationQueue *_privateQueue;
    NSMutableDictionary *_subscriptionsByOptions;
    VSDelayOperation *_expirationOperation;
    VSRemoteNotifier *_remoteNotifier;
    VSSubscriptionServiceConnection *_connection;
    VSSecurityTask *_currentTask;
    VSLinkedOnOrAfterChecker *_linkedOnOrAfterChecker;
}

+ (id)defaultSubscriptionRegistrationCenter;
@property(retain, nonatomic) VSLinkedOnOrAfterChecker *linkedOnOrAfterChecker; // @synthesize linkedOnOrAfterChecker=_linkedOnOrAfterChecker;
@property(retain, nonatomic) VSSecurityTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) VSSubscriptionServiceConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property(retain, nonatomic) VSDelayOperation *expirationOperation; // @synthesize expirationOperation=_expirationOperation;
@property(retain, nonatomic) NSMutableDictionary *subscriptionsByOptions; // @synthesize subscriptionsByOptions=_subscriptionsByOptions;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
- (void).cxx_destruct;
- (void)removeSubscriptions:(id)arg1;
- (void)registerSubscription:(id)arg1;
- (void)fetchActiveSubscriptionsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
@property(retain, nonatomic) VSSubscriptionFetchOptionsValidator *fetchOptionsValidator; // @synthesize fetchOptionsValidator=_fetchOptionsValidator;
@property(retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory; // @synthesize predicateFactory=_predicateFactory;
- (void)_resetExpirationOperation;
- (void)_refreshCachedSubscriptions;
- (void)_sendLocalNotificationWithUserInfo:(id)arg1;
- (_Bool)_shouldRaiseExceptionsForMisuse;
- (_Bool)_shouldAllowAccessToSubscription:(id)arg1;
- (id)_serviceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)setCurrentSubscription:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
