//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOSimpleTileRequester.h>

#import "GEOSimpleTileRequesterSubclass.h"
#import "NSURLConnectionDelegate.h"

@class NSString;

@interface GEOVoltaireSimpleTileRequester : GEOSimpleTileRequester <NSURLConnectionDelegate, GEOSimpleTileRequesterSubclass>
{
}

- (_Bool)needsLocalizationForKey:(const struct _GEOTileKey *)arg1;
- (id)localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
- (id)_localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned char)_authTypeForTileKey:(const struct _GEOTileKey *)arg1;
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)tileEditionForKey:(const struct _GEOTileKey *)arg1;
- (int)checksumMethodForIncomingTileDataWithKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

