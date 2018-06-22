//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSURL, TUDialRequest;

@protocol TUCallProviderManagerDataSource <NSObject>
@property(nonatomic) __weak id <TUCallProviderManagerDataSourceDelegate> delegate;
@property(readonly, copy, nonatomic) NSDictionary *pairedHostDeviceProvidersByIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *localProvidersByIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *providersByIdentifier;
@property(readonly, nonatomic) _Bool currentProcessCanAccessInitialState;
- (void)invalidate;
- (void)blockUntilInitialStateReceived;
- (void)launchAppForDialRequest:(TUDialRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (_Bool)openURL:(NSURL *)arg1 isSensitive:(_Bool)arg2 error:(id *)arg3;
@end

