//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSSet;
@protocol NTKUpNextDataSourceManagerDelegate, OS_dispatch_queue;

@interface NTKUpNextDataSourceManager : NSObject
{
    NSMutableArray *_dataSourceControllers;
    unsigned long long _aggregatedState;
    NSSet *_disabledDataSources;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _paused;
    NSObject<OS_dispatch_queue> *_coordinatorQueue;
    id <NTKUpNextDataSourceManagerDelegate> _delegate;
}

+ (id)_activeDataSourceIdentifiers;
+ (id)_removedDataSourceIdentifiers;
+ (id)_availableDataSourceIdentifiers;
+ (id)_dataSourceIdentifierMap;
+ (_Bool)shouldPreWarmApplicationWithBundleIdentifier:(id)arg1;
+ (id)availableDataSourceIdentifiers;
+ (void)loadDataSourceTitlesUsingBlock:(CDUnknownBlockType)arg1;
+ (void)loadDataSourceImageForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_dataSourceLoadingQueue;
+ (id)_dataSourceTitleCache;
+ (id)_dataSourceImageCache;
@property(readonly, nonatomic) __weak id <NTKUpNextDataSourceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *coordinatorQueue; // @synthesize coordinatorQueue=_coordinatorQueue;
- (void).cxx_destruct;
- (void)_availableDataSourcesDidChange;
- (void)_unloadDataSourceWithIdentifier:(id)arg1;
- (void)_loadDataSourceWithIdentifier:(id)arg1;
- (void)enumerateElementDataSourceControllers:(CDUnknownBlockType)arg1;
- (void)enumerateElementDataSourceControllersAsync:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSSet *currentDataSourceIdentifiers;
@property(retain, nonatomic) NSSet *userDisabledDataSources;
- (void)resumeDataSources;
- (void)pauseDataSources;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
@property(nonatomic) unsigned long long dataSourceState;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;

@end
