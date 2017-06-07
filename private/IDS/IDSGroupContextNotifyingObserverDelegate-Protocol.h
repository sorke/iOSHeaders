//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDS/NSObject-Protocol.h>

@class ENGroup;

@protocol IDSGroupContextNotifyingObserverDelegate <NSObject>

@optional
- (void)didReceiveRegistrationIdentityUpdateWithCompletion:(void (^)(NSError *))arg1;
- (void)didReceiveDecryptionFailureForGroup:(ENGroup *)arg1 completion:(void (^)(NSError *))arg2;
- (void)didUpdateGroup:(ENGroup *)arg1 withNewGroup:(ENGroup *)arg2 completion:(void (^)(NSError *))arg3;
- (void)didCacheGroup:(ENGroup *)arg1 completion:(void (^)(NSError *))arg2;
- (void)didCreateGroup:(ENGroup *)arg1 completion:(void (^)(NSError *))arg2;
@end
