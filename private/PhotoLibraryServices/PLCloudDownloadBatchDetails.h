//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PLCloudDownloadBatchDetails : NSObject
{
    _Bool _hasResourceChanges;
    long long _numberOfPhotos;
    long long _numberOfVideos;
    NSArray *_cmmUUIDsToNotify;
    NSArray *_flippedPlaceholderAssetUUIDs;
}

@property(copy, nonatomic) NSArray *flippedPlaceholderAssetUUIDs; // @synthesize flippedPlaceholderAssetUUIDs=_flippedPlaceholderAssetUUIDs;
@property(copy, nonatomic) NSArray *cmmUUIDsToNotify; // @synthesize cmmUUIDsToNotify=_cmmUUIDsToNotify;
@property(nonatomic) long long numberOfVideos; // @synthesize numberOfVideos=_numberOfVideos;
@property(nonatomic) long long numberOfPhotos; // @synthesize numberOfPhotos=_numberOfPhotos;
@property(nonatomic) _Bool hasResourceChanges; // @synthesize hasResourceChanges=_hasResourceChanges;
- (void).cxx_destruct;
- (void)unionBatchDetails:(id)arg1;

@end

