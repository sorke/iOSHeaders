//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUAdContextProvider.h"

@class NSString, SXAdRequest;

@interface NUSilexRequestAdContextProvider : NSObject <NUAdContextProvider>
{
    SXAdRequest *_request;
}

@property(readonly, nonatomic) SXAdRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)contextProvidersForKeyPath:(id)arg1;
- (id)creativeTypeFromBannerType:(unsigned long long)arg1;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)initWithAdRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

