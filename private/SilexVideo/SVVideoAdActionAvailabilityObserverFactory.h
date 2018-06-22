//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoAdActionAvailabilityObserverFactory.h"

@class NSString;

@interface SVVideoAdActionAvailabilityObserverFactory : NSObject <SVVideoAdActionAvailabilityObserverFactory>
{
    id <SVVideoProviderProviding> _videoProviderProvider;
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
}

@property(readonly, nonatomic) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property(readonly, nonatomic) id <SVVideoProviderProviding> videoProviderProvider; // @synthesize videoProviderProvider=_videoProviderProvider;
- (void).cxx_destruct;
- (id)createActionAvailabilityObserverForVideo:(id)arg1;
- (id)initWithVideoProviderProvider:(id)arg1 loadingStateObserverFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

