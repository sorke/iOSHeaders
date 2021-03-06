//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKLabelMarker.h"

#import "GEOTransitArtworkDataSource.h"

@class NSString;

@interface VKLabelMarker (MKTransitArtworkExtras) <GEOTransitArtworkDataSource>
@property(readonly, nonatomic) NSString *accessibilityText;
@property(readonly, nonatomic) _Bool hasRoutingIncidentBadge;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property(readonly, nonatomic) id <GEOTransitIconDataSource> iconDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> shieldDataSource;
@property(readonly, nonatomic) long long artworkUseType;
@property(readonly, nonatomic) long long artworkSourceType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

