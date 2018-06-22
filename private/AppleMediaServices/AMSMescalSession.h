//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSMescalFairPlay, AMSURLSession, NSData, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface AMSMescalSession : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSData *_certificateData;
    AMSURLSession *_urlSession;
    AMSMescalFairPlay *_fairPlayContext;
    long long _mescalType;
    _Bool _primed;
}

+ (id)sessionWithType:(long long)arg1;
@property(nonatomic) _Bool primed; // @synthesize primed=_primed;
- (void).cxx_destruct;
- (_Bool)_verifyPrimeResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_shouldRetryFairPlayForError:(id)arg1;
- (void)_resetSession;
- (id)_postExchangeData:(id)arg1 contract:(id)arg2 logKey:(id)arg3 error:(id *)arg4;
- (id)_loadCertificateDataWithContract:(id)arg1 logKey:(id)arg2 error:(id *)arg3;
- (id)_establishContextWithContract:(id)arg1 logKey:(id)arg2 error:(id *)arg3;
- (_Bool)verifyData:(id)arg1 withSignature:(id)arg2 contract:(id)arg3 logKey:(id)arg4 error:(id *)arg5;
- (id)signData:(id)arg1 contract:(id)arg2 logKey:(id)arg3 error:(id *)arg4;
- (_Bool)primeTheConnectionWithContract:(id)arg1 logKey:(id)arg2 error:(id *)arg3;
- (id)initWithType:(long long)arg1;

@end

