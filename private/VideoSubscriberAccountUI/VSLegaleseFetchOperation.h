//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSAsyncOperation.h"

@class NSURL, SSRequest, VSAuditToken, VSOptional;

@interface VSLegaleseFetchOperation : VSAsyncOperation
{
    int _requestCompletionFlag;
    long long _format;
    NSURL *_endpointURL;
    VSAuditToken *_auditToken;
    VSOptional *_result;
    SSRequest *_storeServicesRequest;
}

@property(retain, nonatomic) SSRequest *storeServicesRequest; // @synthesize storeServicesRequest=_storeServicesRequest;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(retain, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, copy, nonatomic) NSURL *endpointURL; // @synthesize endpointURL=_endpointURL;
@property(readonly, nonatomic) long long format; // @synthesize format=_format;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (void)_finishWithData:(id)arg1 orError:(id)arg2;
- (void)_finishWithResponse:(id)arg1;
- (_Bool)_isFirstToFinish;
- (id)initWithFormat:(long long)arg1 endpointURL:(id)arg2;
- (id)init;

@end
