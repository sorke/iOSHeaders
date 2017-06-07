//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString, NSXPCListenerEndpoint;

@protocol CacheDeleteClientProtocol
- (void)clientUpdatePurgeable:(NSDictionary *)arg1 replyBlock:(void (^)(void))arg2;
- (void)clientGetState:(NSString *)arg1 replyBlock:(void (^)(id))arg2;
- (void)clientSetState:(id)arg1 key:(NSString *)arg2 replyBlock:(void (^)(void))arg3;
- (void)clientCancelPurge:(NSDictionary *)arg1 replyBlock:(void (^)(void))arg2;
- (void)clientPerformOperation:(NSDictionary *)arg1 replyBlock:(void (^)(NSDictionary *))arg2;
- (void)clientPurge:(NSDictionary *)arg1 replyBlock:(void (^)(NSDictionary *))arg2;
- (void)clientItemizedPurgeableSpace:(NSDictionary *)arg1 replyBlock:(void (^)(NSDictionary *))arg2;
- (void)clientPurgeableSpace:(NSDictionary *)arg1 replyBlock:(void (^)(NSDictionary *))arg2;
- (void)clientCheckin:(NSString *)arg1 endpoint:(NSXPCListenerEndpoint *)arg2 info:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
@end
