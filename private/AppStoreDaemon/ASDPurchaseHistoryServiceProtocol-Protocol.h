//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ASDPurchaseHistoryQuery;

@protocol ASDPurchaseHistoryServiceProtocol
- (void)updateWithReplyHandler:(void (^)(NSError *))arg1;
- (void)updateForAccountID:(long long)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)showAllWithReplyHandler:(void (^)(NSError *))arg1;
- (void)setHidden:(_Bool)arg1 forStoreItemID:(long long)arg2 withReplyHandler:(void (^)(NSError *))arg3;
- (void)executeQuery:(ASDPurchaseHistoryQuery *)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
@end

