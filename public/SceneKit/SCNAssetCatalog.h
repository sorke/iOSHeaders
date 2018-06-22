//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSURL;

@interface SCNAssetCatalog : NSObject
{
    NSURL *_catalogURL;
    NSDictionary *_db;
    NSMutableDictionary *_cache;
}

+ (id)objectWithName:(id)arg1 class:(Class)arg2;
+ (void)clearCache;
+ (id)recursivePathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)assetCatalogForResourceURL:(id)arg1;
+ (id)assetCatalogWithURL:(id)arg1;
+ (id)assetCatalogNamed:(id)arg1;
@property(readonly, nonatomic) NSURL *catalogURL; // @synthesize catalogURL=_catalogURL;
- (id)pathByMakingURLRelativeToCatalog:(id)arg1;
- (id)particleSystemNamed:(id)arg1;
- (id)actionNamed:(id)arg1;
- (id)animationNamed:(id)arg1;
- (id)sceneNamed:(id)arg1;
- (id)sceneWithURL:(id)arg1;
- (void)cacheObject:(id)arg1 withTimestamp:(double)arg2 forKey:(id)arg3;
- (id)URLOfResourceNamed:(id)arg1;
- (void)dealloc;

@end

