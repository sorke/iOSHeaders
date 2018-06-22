//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVURLAssetLoaderFactory.h"

@class NSString;

@interface SVURLAssetLoaderFactory : NSObject <SVURLAssetLoaderFactory>
{
    id <SVURLAssetFactory> _URLAssetFactory;
    id <SVVideoURLProviderFactory> _URLProviderFactory;
}

@property(readonly, nonatomic) id <SVVideoURLProviderFactory> URLProviderFactory; // @synthesize URLProviderFactory=_URLProviderFactory;
@property(readonly, nonatomic) id <SVURLAssetFactory> URLAssetFactory; // @synthesize URLAssetFactory=_URLAssetFactory;
- (void).cxx_destruct;
- (id)createURLAssetLoaderForVideo:(id)arg1;
- (id)initWithURLAssetFactory:(id)arg1 URLProviderFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

