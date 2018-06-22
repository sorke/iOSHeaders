//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<OS_dispatch_queue>, PLEditSource, PLPhotoEditModel, PXPhotoKitEditSourceLoader;

@interface _PXPhotoKitAdjustedUIMediaRequest : NSObject
{
    PXPhotoKitEditSourceLoader *_editSourceLoader;
    _Bool _delayRenders;
    _Bool _useCachedRenders;
    id <PXPhotoKitAdjustedDisplayAsset> _asset;
    NSObject<OS_dispatch_queue> *_renderQueue;
    PLEditSource *_editSource;
    NSError *_loadError;
    PLPhotoEditModel *_baseEditModel;
    double _progress;
}

@property(nonatomic) _Bool useCachedRenders; // @synthesize useCachedRenders=_useCachedRenders;
@property(nonatomic) _Bool delayRenders; // @synthesize delayRenders=_delayRenders;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) PLPhotoEditModel *baseEditModel; // @synthesize baseEditModel=_baseEditModel;
@property(retain, nonatomic) NSError *loadError; // @synthesize loadError=_loadError;
@property(retain, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(readonly, nonatomic) id <PXPhotoKitAdjustedDisplayAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)_handleEditSourceLoadingFinished;
- (void)editSourceDidChange;
- (void)progressDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)cancel;
- (void)beginLoadingEditSource;
- (void)start;
- (id)initWithAsset:(id)arg1 renderQueue:(id)arg2;

@end

