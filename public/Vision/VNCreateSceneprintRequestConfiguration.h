//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

__attribute__((visibility("hidden")))
@interface VNCreateSceneprintRequestConfiguration : VNImageBasedRequestConfiguration
{
    _Bool _returnAllResults;
    _Bool _useCenterTileOnly;
}

@property(nonatomic) _Bool useCenterTileOnly; // @synthesize useCenterTileOnly=_useCenterTileOnly;
@property(nonatomic) _Bool returnAllResults; // @synthesize returnAllResults=_returnAllResults;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end

