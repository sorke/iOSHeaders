//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFAutoFillHelperProtocol.h"

@class NSString, NSXPCConnection;

@interface SFAutoFillHelperProxy : NSObject <SFAutoFillHelperProtocol>
{
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)getAutomaticStrongPasswordForAppWithPasswordRules:(id)arg1 confirmPasswordRules:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

