//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NNMKAccountsSyncServiceServer, NNMKProtoAccountSourceType, NSDictionary, NSString;

@protocol NNMKAccountsSyncServiceServerDelegate <NSObject>
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didReceivedWatchAccountsStatus:(NSDictionary *)arg2;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didChangeAccountSourceType:(NNMKProtoAccountSourceType *)arg2;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(NSString *)arg2;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didFailSendingProtobufWithIDSIdentifier:(NSString *)arg2 errorCode:(long long)arg3;
@end

