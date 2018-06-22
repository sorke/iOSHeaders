//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVWeakReference, NSError, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface AVAssetReaderInternal : NSObject
{
    AVWeakReference *weakReference;
    AVAsset *asset;
    struct OpaqueFigAssetReader *figAssetReader;
    CDStruct_e83c9415 timeRange;
    _Bool readSingleSample;
    NSMutableArray *outputs;
    NSMutableSet *outputFinishedCallbackInvokers;
    long long status;
    NSError *error;
    NSError *errorThatOccurredBeforeStartReading;
    NSObject<OS_dispatch_queue> *statusReadWriteQueue;
}

@end

