//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVAsset.h"

@class AVAssetTrack, NSString;

@interface AVAsset (Utilities)
- (_Bool)isMarkedNotSerializable;
- (id)commonMetadataStringValueForKey:(id)arg1;
- (_Bool)valuesForKeysAreFinishedLoading:(id)arg1;
@property(readonly) struct CGSize scaleFactors;
@property(readonly) float mainVideoTrackNominalFrameRate;
@property(readonly) struct CGAffineTransform mainVideoTrackPreferredTransform;
@property(readonly) struct CGSize mainVideoTrackPreferredSize;
@property(readonly) struct CGSize mainVideoTrackNaturalSize;
@property(readonly) AVAssetTrack *mainAudioTrack;
@property(readonly) AVAssetTrack *mainVideoTrack;
@property(readonly) NSString *localizedDisplayName;
- (_Bool)canPassthroughExport;
@property(readonly, nonatomic) _Bool isDecodableMovie;
@end

