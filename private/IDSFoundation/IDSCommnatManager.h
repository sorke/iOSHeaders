//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface IDSCommnatManager : NSObject
{
    NSString *_cbuuid;
    NSString *_deviceUniqueID;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _linkBlock;
    struct sockaddr_storage _commnatServer;
    NSMutableDictionary *_nonceToRequest;
    NSMutableDictionary *_nonceToCandidates;
}

- (void).cxx_destruct;
- (void)_getCommNATServerAddress;
- (void)processCommnatResponse:(CDStruct_f4928324 *)arg1 arrivalTime:(double)arg2;
- (void)sendCommnatRequest:(id)arg1 candidate:(id)arg2;
- (_Bool)isCommnatDiscoveryDone;
- (void)startCommnatDiscoveryForHostCandidates:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 linkBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

