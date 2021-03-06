//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKVectorTileSource.h>

@class VKTrafficTileSource;

__attribute__((visibility("hidden")))
@interface VKRoadTileSource : VKVectorTileSource
{
    VKTrafficTileSource *_trafficTileSource;
    struct map<VKTileKey, VKTile *, bool (*)(const VKTileKey &, const VKTileKey &), std::__1::allocator<std::__1::pair<const VKTileKey, VKTile *>>> *_inflightTiles;
    struct map<VKTileKey, geo::_retain_ptr<VKTile *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, bool (*)(const VKTileKey &, const VKTileKey &), std::__1::allocator<std::__1::pair<const VKTileKey, geo::_retain_ptr<VKTile *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>>> *_privateInflightTiles;
    _Bool _trafficEnabled;
}

@property(nonatomic) _Bool trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(retain, nonatomic) VKTrafficTileSource *trafficTileSource; // @synthesize trafficTileSource=_trafficTileSource;
- (id)stateDescriptionForRenderKey:(const struct VKTileKey *)arg1;
- (id)_privateInflightTileForKey:(const struct VKTileKey *)arg1;
- (void)releaseTraffic;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3 userInfo:(id)arg4;
- (void)_trafficFailed:(const struct VKTileKey *)arg1;
- (void)_fetchedTile:(id)arg1 isPreliminary:(_Bool)arg2;
- (void)clearCaches;
- (void)expireAllTraffic;
- (id)inflightTileForKey:(const struct VKTileKey *)arg1;
- (_Bool)shouldObeyHybridUnavailableRegions;
- (unsigned char)mapLayerForZoomLevelRange;
- (void)setClient:(id)arg1;
- (_Bool)minimumZoomLevelBoundsCamera;
- (void)setMapType:(long long)arg1;
- (void)dealloc;
- (id)detailedDescription;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 taskContext:(shared_ptr_e963992e)arg5;

@end

