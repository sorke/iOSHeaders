//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoPassKit/NPKPeerPaymentAccountManager.h>

@class NSObject<OS_dispatch_queue>, PKPeerPaymentAccount;

@interface NPKMockPeerPaymentAccountManager : NPKPeerPaymentAccountManager
{
    PKPeerPaymentAccount *_mockAccount;
    NSObject<OS_dispatch_queue> *_accountQueue;
    unsigned long long _balanceOffset;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)account;
- (void)_updateMockBalance;
- (void)dealloc;
- (id)initWithPeerPaymentService:(id)arg1;

@end

