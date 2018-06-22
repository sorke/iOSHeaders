//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVContentKeySessionInternal, NSData, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface AVContentKeySession : NSObject
{
    AVContentKeySessionInternal *_session;
}

+ (id)contentKeySessionWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2;
+ (id)contentKeySessionWithKeySystem:(id)arg1;
+ (void)initialize;
+ (struct OpaqueFigSecureStopManager *)copyDefaultSecureStopManagerForAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2;
+ (void)removePendingExpiredSessionReports:(id)arg1 withAppIdentifier:(id)arg2 storageDirectoryAtURL:(id)arg3;
+ (id)pendingExpiredSessionReportsWithAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2;
+ (id)_uniqueIDForCyptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2;
- (void)makeSecureTokenForExpirationDateOfPersistableContentKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)renewExpiringResponseDataForContentKeyRequest:(id)arg1;
- (void)processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3;
@property(readonly) NSData *contentProtectionSessionIdentifier;
- (void)expire;
@property(readonly) NSString *keySystem;
- (id)contentKeyRecipients;
- (void)removeContentKeyRecipient:(id)arg1;
- (void)addContentKeyRecipient:(id)arg1;
@property(readonly, nonatomic, getter=isInternal) _Bool internal;
@property(readonly) NSURL *storageURL;
@property(readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly) __weak id <AVContentKeySessionDelegate> delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (void)finalize;
- (void)_willDeallocOrFinalize;
- (id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2;
- (id)initWithStorageDirectoryAtURL:(id)arg1;
- (id)init;
- (void)_handleSecureStopDidFinalizeRecordCallback;
- (void)_invokeDelegateCallbackWithBlock:(CDUnknownBlockType)arg1 synchronouslyWhenDelegateQueueIsNULL:(_Bool)arg2;
- (void)_removeContentKeyRequestForCryptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2;
- (id)_contentKeyRequestForCryptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2;
- (void)_setContentKeyRequest:(id)arg1 forCryptorUUID:(id)arg2 cryptorKeyRequestID:(unsigned long long)arg3;
- (id)_internalQueue;
- (void)issueContentKeyRequestWithPreloadingRequestOptions:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 providesPersistableKey:(_Bool)arg4;
- (void)issueContentKeyRequestWithCustomURLHandler:(struct OpaqueFigCustomURLHandler *)arg1 identifier:(id)arg2 requestInfo:(struct __CFDictionary *)arg3 requestID:(unsigned long long)arg4 providesPersistableKey:(_Bool)arg5;
- (void)issueContentKeyRequestWithCustomURLProviderContext:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 providesPersistableKey:(_Bool)arg4;
- (void)issueContentKeyRequest:(id)arg1;
- (_Bool)clientCanReceivePersistableContentKeyRequest;
- (void)createProtectorSessionIdentifierIfNecessary;
- (int)setAppIdentifier:(id)arg1;
- (void)_handleKeyResponseSuccessfullyProcessedForCryptorUUID:(id)arg1 andCryptorKeyRequestID:(unsigned long long)arg2;
- (void)_handleKeyResponseError:(id)arg1 forCryptorUUID:(id)arg2 andCryptorKeyRequestID:(unsigned long long)arg3;
- (void)_handleUpdateToPersistentKey:(id)arg1 forKeyIdentifier:(id)arg2;
- (int)createAndInstallCustomURLHandlerForAsset:(id)arg1 outHandler:(struct OpaqueFigCustomURLHandler **)arg2;
- (void)_handleRequest:(struct __CFDictionary *)arg1 withRequestID:(unsigned long long)arg2 fromHandler:(struct OpaqueFigCustomURLHandler *)arg3 willHandleRequest:(_Bool *)arg4;
- (const struct OpaqueFigContentKeySession *)_figContentKeySession;
- (id)_weakReference;
- (const struct OpaqueFigCPECryptor *)copyDecryptorForIdentifier:(id)arg1 initializationData:(id)arg2;
- (const struct OpaqueFigCPECryptor *)createDecryptorIfNecessaryForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3 hlsMethod:(id)arg4 error:(id *)arg5;
- (id)createCryptorOptionsForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3 hlsMethod:(id)arg4;
- (id)issueContentKeyRequestForInitializationData:(id)arg1;
- (_Bool)hasProtector;
- (void)setDelegate:(id)arg1;
- (id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 internal:(_Bool)arg3;

@end

