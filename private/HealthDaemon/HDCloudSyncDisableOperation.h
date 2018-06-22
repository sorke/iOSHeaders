//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSProgressReporting.h"

@class HDCloudSyncFetchOperationResult, HDCloudSyncOperationConfiguration, NSObject<OS_dispatch_queue>, NSProgress, NSString;

@interface HDCloudSyncDisableOperation : NSObject <NSProgressReporting>
{
    NSObject<OS_dispatch_queue> *_queue;
    HDCloudSyncOperationConfiguration *_configuration;
    HDCloudSyncFetchOperationResult *_fetchResult;
    _Bool _queue_hasStarted;
    CDUnknownBlockType _completion;
    NSProgress *_progress;
}

@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)_finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateMasterRecordCreationCompletionForOperationWithError:(id)arg1 masterRecordToSave:(id)arg2 savedRecords:(id)arg3 isBestEffortOperation:(_Bool)arg4 container:(id)arg5 isOperationSuccessful:(_Bool *)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_updateMasterZoneCreationCompletionForOperationWithError:(id)arg1 masterZoneToSave:(id)arg2 savedRecordZones:(id)arg3 isBestEffortOperation:(_Bool)arg4 container:(id)arg5 isOperationSuccessful:(_Bool *)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_updateProgressForPrimaryContainer:(_Bool)arg1 forOperationComponent:(unsigned long long)arg2;
- (id)_zonesByContainerIDForZones:(id)arg1;
- (id)initWithConfiguration:(id)arg1 fetchResult:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

