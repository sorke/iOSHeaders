//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class UWLMessageWireEnvelope;

@interface WLKPlayActivityNetworkRequestOperation : WLKNetworkRequestOperation
{
    UWLMessageWireEnvelope *_playActivityProto;
}

+ (id)playActivityURL;
- (void).cxx_destruct;
- (id)nextExpectedReportMillis;
- (id)_requestPropertiesWithServerRouteKey:(id)arg1 queryParameters:(id)arg2 additionalHeaderFields:(id)arg3;
- (id)initWithMessageEnvelope:(id)arg1;
- (id)initWithServerRouteKey:(id)arg1 serverRouteReplacements:(id)arg2 queryParameters:(id)arg3;

@end

