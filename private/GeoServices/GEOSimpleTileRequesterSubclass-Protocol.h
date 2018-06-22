//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GEOURLWithHeaders, NSData, NSObject<OS_xpc_object>, NSString;

@protocol GEOSimpleTileRequesterSubclass
- (GEOURLWithHeaders *)urlForTileKey:(const struct _GEOTileKey *)arg1;

@optional
- (_Bool)allowsCookies;
- (_Bool)tileDataIsCacheableForTileKey:(const struct _GEOTileKey *)arg1;
- (NSData *)mergeBaseTile:(NSData *)arg1 withLocalizationTile:(NSData *)arg2;
- (unsigned int)tileEditionForKey:(const struct _GEOTileKey *)arg1;
- (NSString *)editionHeader;
- (NSObject<OS_xpc_object> *)newXPCDataRequestForTileKey:(const struct _GEOTileKey *)arg1;
- (int)checksumMethodForIncomingTileDataWithKey:(const struct _GEOTileKey *)arg1;
- (_Bool)needsLocalizationForKey:(const struct _GEOTileKey *)arg1;
- (GEOURLWithHeaders *)localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
@end

