//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource
{
}

+ (id)sharedStoreArtworkDataSource;
- (id)_bestURLForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (_Bool)wantsBackgroundImageDecompression;
- (id)supportedSizesForCatalog:(id)arg1;
- (id)sortedSupportedSizesForCatalog:(id)arg1;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end
