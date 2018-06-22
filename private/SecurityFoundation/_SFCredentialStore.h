//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface _SFCredentialStore : NSObject
{
    id _credentialStoreInternal;
    id <NSXPCProxyCreating> _serverConnection;
    NSError *_serverError;
}

+ (id)_serverConnectionWithError:(id *)arg1;
+ (id)defaultCredentialStore;
- (void).cxx_destruct;
- (void)replaceOldCredential:(id)arg1 withNewCredential:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)removeCredentialWithPersistentIdentifier:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)lookupCredentialsForServiceIdentifiers:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)fetchPasswordCredentialForPersistentIdentifier:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)addCredential:(id)arg1 withAccessPolicy:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)serverProxyWithBooleanHandler:(CDUnknownBlockType)arg1;
- (id)serverProxyWithDualResultHandler:(CDUnknownBlockType)arg1;
- (id)serverProxyWithResultHandler:(CDUnknownBlockType)arg1;
- (id)_init;

@end

