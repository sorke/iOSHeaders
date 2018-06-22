//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIBurstActionClassifier, CIBurstImageFaceAnalysisContext, CIBurstYUVImage, NSArray, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

__attribute__((visibility("hidden")))
@interface CIBurstImageSetInternal : NSObject
{
    NSObject<OS_dispatch_queue> *dq;
    NSObject<OS_dispatch_queue> *dq_yuvdump;
    NSObject<OS_dispatch_semaphore> *sem;
    NSMutableArray *clusterArray;
    int temporalOrder;
    int maxNumPendingFrames;
    _Bool enableAnalysis;
    int dummyAnalysisCount;
    _Bool enableFaceCore;
    _Bool enableDumpYUV;
    NSString *burstCoverSelection;
    _Bool isAction;
    _Bool isPortrait;
    CIBurstImageFaceAnalysisContext *faceAnalysisContext;
    CIBurstYUVImage *overrideImage;
    NSDictionary *overrideProps;
    NSMutableArray *allImageIdentifiers;
    NSCountedSet *faceIDCounts;
    NSMutableDictionary *statsByImageIdentifier;
    NSMutableDictionary *clusterByImageIdentifier;
    NSString *burstLogFileName;
    struct __sFILE *burstLogFileHandle;
    CIBurstActionClassifier *actionClassifier;
    int curClusterIndexToProcess;
    NSMutableArray *bestImageIdentifiersArray;
    int _version;
    NSString *burstId;
    NSString *_versionString;
}

+ (id)defaultVersionString;
@property int version; // @synthesize version=_version;
@property NSString *versionString; // @synthesize versionString=_versionString;
@property NSArray *bestImageIdentifiersArray; // @synthesize bestImageIdentifiersArray;
@property(retain, nonatomic) NSString *burstId; // @synthesize burstId;
@property NSString *burstCoverSelection; // @synthesize burstCoverSelection;
@property _Bool enableDumpYUV; // @synthesize enableDumpYUV;
@property _Bool enableFaceCore; // @synthesize enableFaceCore;
@property int dummyAnalysisCount; // @synthesize dummyAnalysisCount;
@property _Bool enableAnalysis; // @synthesize enableAnalysis;
@property int maxNumPendingFrames; // @synthesize maxNumPendingFrames;
@property NSString *burstLogFileName; // @synthesize burstLogFileName;
@property NSMutableDictionary *clusterByImageIdentifier; // @synthesize clusterByImageIdentifier;
@property NSMutableDictionary *statsByImageIdentifier; // @synthesize statsByImageIdentifier;
@property CIBurstActionClassifier *actionClassifier; // @synthesize actionClassifier;
@property NSMutableArray *allImageIdentifiers; // @synthesize allImageIdentifiers;
@property NSCountedSet *faceIDCounts; // @synthesize faceIDCounts;
@property int temporalOrder; // @synthesize temporalOrder;
@property NSMutableArray *clusterArray; // @synthesize clusterArray;
- (_Bool)isAction;
- (_Bool)isPortrait;
- (_Bool)isFaceDetectionForced;
- (id)imageClusterForIdentifier:(id)arg1;
- (id)bestImageIdentifiers;
- (void)selectCoverPhotoFromMultiple:(id)arg1 burstSize:(int)arg2;
- (id)findBestImage:(id)arg1 useActionScores:(_Bool)arg2;
- (void)computeAllImageScores;
- (float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;
- (float)computeCameraTravelDistance;
- (void)performEmotionalRejectionOnCluster:(id)arg1;
- (int)computeEmotion:(id)arg1;
- (void)addYUVImage:(id)arg1 properties:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)processClusters:(_Bool)arg1;
- (float)computeActionSelectionThreshold;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)burstDocumentDirectory;

@end

