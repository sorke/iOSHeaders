//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ImageCapture/ICCameraItem.h>

@class NSArray, NSDate, NSMutableDictionary, NSString;

@interface ICCameraFile : ICCameraItem
{
    void *_fileProperties;
    _Bool _retrievedMetadata;
    _Bool _retrievedThumbnail;
    unsigned int _ptpObjectHandle;
    NSMutableDictionary *_subImages;
}

@property(readonly) unsigned int ptpObjectHandle; // @synthesize ptpObjectHandle=_ptpObjectHandle;
@property(readonly) _Bool retrievedThumbnail; // @synthesize retrievedThumbnail=_retrievedThumbnail;
@property(readonly) _Bool retrievedMetadata; // @synthesize retrievedMetadata=_retrievedMetadata;
@property(retain) NSMutableDictionary *subImages; // @synthesize subImages=_subImages;
- (id)mediaData;
- (_Bool)isJPEG;
- (_Bool)isData;
- (_Bool)isImage;
- (_Bool)isMovie;
- (id)base;
- (_Bool)isLegacy;
- (_Bool)isSidecar;
- (void)flagAsSidecar;
- (_Bool)isDataUniversal;
- (_Bool)universalFamily;
- (_Bool)originalFamily;
- (_Bool)convertedFamily;
- (_Bool)partOfFamily:(unsigned long long)arg1;
- (_Bool)isEditedUniversal;
- (_Bool)isEditedConverted;
- (_Bool)isEditedOriginal;
- (_Bool)isEdited:(unsigned long long)arg1;
- (_Bool)isUniversal;
- (_Bool)isConverted;
- (_Bool)isOriginal;
- (_Bool)isUntouched:(unsigned long long)arg1;
- (void)flushMetadataCache;
- (void)flushThumbnailCache;
- (void)requestMetadata;
- (void)requestMetadataWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestThumbnail;
- (void)requestThumbnailWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)flagMediaMetadata:(unsigned long long)arg1;
@property(readonly) NSString *mediaBase;
- (void)setTimeLapse:(_Bool)arg1;
- (void)setHighFramerate:(_Bool)arg1;
- (void)setBurstPicked:(_Bool)arg1;
- (void)setBurstFavorite:(_Bool)arg1;
- (void)setBurstUUID:(id)arg1;
- (void)setDuration:(double)arg1;
@property(readonly) _Bool timeLapse;
@property(readonly) _Bool highFramerate;
@property(readonly) _Bool burstPicked;
@property(readonly) _Bool burstFavorite;
@property(readonly) NSString *burstUUID;
@property(readonly) double duration;
- (id)metadata;
- (struct CGImage *)thumbnail;
- (void)setKeywordPropertiesFromMetadata;
- (_Bool)setMetadata:(id)arg1;
- (_Bool)setThumbnailData:(struct __CFData *)arg1 withOrientation:(id)arg2;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)overrideOrientation:(unsigned long long)arg1;
- (void)setRelatedUUID:(id)arg1;
- (void)setCreatedFilename:(id)arg1;
- (void)setUTime:(unsigned long long)arg1;
- (unsigned long long)uTime;
- (void)setGroupUUID:(id)arg1;
- (void)setOriginalFilename:(id)arg1;
- (void)setFirstPicked:(_Bool)arg1;
- (void)setOriginatingAssetID:(id)arg1;
@property(readonly) NSString *relatedUUID;
@property(readonly) NSString *createdFilename;
@property(readonly) NSString *groupUUID;
@property(readonly) NSString *originalFilename;
@property(readonly) _Bool firstPicked;
@property(readonly) NSString *originatingAssetID;
@property _Bool fetchingMetadata;
@property _Bool fetchingThumbnail;
- (void)setHasMetadata:(_Bool)arg1;
- (_Bool)hasMetadata;
- (void)setHasThumbnail:(_Bool)arg1;
- (_Bool)hasThumbnail;
@property(readonly) _Bool orientationOverridden;
@property unsigned long long orientation;
@property(getter=isRaw) _Bool raw;
@property long long fileSize;
- (void)setUTI:(id)arg1;
- (void)setFileModificationDate:(id)arg1;
@property(readonly) NSDate *fileModificationDate;
- (void)setFileCreationDate:(id)arg1;
@property(readonly) NSDate *fileCreationDate;
- (void)setExifModificationDate:(id)arg1;
@property(readonly) NSDate *exifModificationDate;
- (void)setExifCreationDate:(id)arg1;
@property(readonly) NSDate *exifCreationDate;
- (id)modificationDate;
- (id)creationDate;
- (void)setHeight:(long long)arg1;
@property(readonly) long long height;
- (void)setWidth:(long long)arg1;
@property(readonly) long long width;
- (id)debugIdentity;
- (id)debugMediaMetadata;
- (id)description;
- (void)dealloc;
- (void)addSidecarFile:(id)arg1;
@property(readonly) NSArray *sidecarFiles;
- (id)subImageDictForPixelWidth:(id)arg1;
- (void)addSubImageDict:(id)arg1 forPixelWidth:(id)arg2;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;

@end

