//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthStoreEndpoint.h>

@class NSError;

@interface HDHealthStoreErrorEndpoint : HDHealthStoreEndpoint
{
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)remote_fetchPluginServiceEndpointWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_serverForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithClient:(id)arg1 daemon:(id)arg2 error:(id)arg3;

@end
