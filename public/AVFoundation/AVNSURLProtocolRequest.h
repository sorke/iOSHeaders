//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAssetCustomURLRequest.h>

@class AVAssetCustomURLBridgeForNSURLProtocol;

__attribute__((visibility("hidden")))
@interface AVNSURLProtocolRequest : AVAssetCustomURLRequest
{
    AVAssetCustomURLBridgeForNSURLProtocol *_bridge;
    struct _CFURLConnection *_connection;
    struct __CFError *_error;
}

@property(nonatomic) __weak AVAssetCustomURLBridgeForNSURLProtocol *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
@property(nonatomic) struct _CFURLConnection *connection;
- (void)dealloc;

@end

