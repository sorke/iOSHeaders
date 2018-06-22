//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVMediaFileType, AVWeakReference, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface AVFigAssetWriterTrack : NSObject
{
    AVWeakReference *_weakReference;
    struct OpaqueFigAssetWriter *_figAssetWriter;
    int _trackID;
    NSString *_mediaType;
    AVMediaFileType *_mediaFileType;
    NSObject<OS_dispatch_queue> *_aboveHighWaterLevelQueue;
    _Bool _aboveHighWaterLevel;
    CDStruct_1b6d18a9 _sampleBufferCoalescingInterval;
    NSOperationQueue *_operationQueue;
}

+ (id)assetWriterTrackWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(_Bool)arg6 attachedAdaptor:(id)arg7 error:(id *)arg8;
@property(readonly, nonatomic) AVMediaFileType *mediaFileType; // @synthesize mediaFileType=_mediaFileType;
@property(readonly, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) int trackID; // @synthesize trackID=_trackID;
@property(readonly, nonatomic) struct OpaqueFigAssetWriter *figAssetWriter; // @synthesize figAssetWriter=_figAssetWriter;
@property(nonatomic) CDStruct_1b6d18a9 sampleBufferCoalescingInterval; // @synthesize sampleBufferCoalescingInterval=_sampleBufferCoalescingInterval;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(_Bool)arg3 error:(id *)arg4;
- (void)setFormatDescriptions:(id)arg1;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setMediaDataLocation:(id)arg1;
- (void)setPreferredChunkSize:(long long)arg1;
- (void)setPreferredChunkAlignment:(long long)arg1;
- (void)setPreferredChunkDuration:(CDStruct_1b6d18a9)arg1;
- (void)setExcludeFromAutoSelection:(_Bool)arg1;
- (void)setProvisionalAlternateGroupID:(short)arg1;
- (void)setAlternateGroupID:(short)arg1;
- (void)setLayer:(long long)arg1;
- (void)setTrackVolume:(float)arg1;
- (void)setMarksOutputTrackAsEnabled:(_Bool)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setFigDimensions:(id)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setFigTrackMatrix:(id)arg1;
- (void)setFigMetadata:(id)arg1;
- (_Bool)markEndOfDataReturningError:(id *)arg1;
- (void)prepareToEndSession;
- (void)endPassWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)addPixelBuffer:(struct __CVBuffer *)arg1 atPresentationTime:(CDStruct_1b6d18a9)arg2 error:(id *)arg3;
- (_Bool)addSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (_Bool)beginPassReturningError:(id *)arg1;
@property(readonly, getter=isAboveHighWaterLevel) _Bool aboveHighWaterLevel;
@property(readonly, nonatomic) _Bool encoderSupportsMultiPass;
- (void)_refreshAboveHighWaterLevel;
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)arg1;
@property(readonly, nonatomic) struct __CVPixelBufferPool *pixelBufferPool;
- (void)finalize;
- (void)dealloc;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(_Bool)arg6 error:(id *)arg7;
- (id)init;

@end

