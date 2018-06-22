//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DEDSecureArchiving.h"
#import "NSSecureCoding.h"

@class DEDBugSessionConfiguration, DEDExtensionIdentifierManager, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_os_log>, NSString;

@interface DEDBugSession : NSObject <NSSecureCoding, DEDSecureArchiving>
{
    DEDBugSessionConfiguration *_config;
    NSString *_identifier;
    NSString *_deviceIdentifier;
    long long _priorClientTransportType;
    long long _priorWorkerTransportType;
    id <DEDUploadStatusDelegate> _uploadDelegate;
    NSMutableSet *_filePromises;
    CDUnknownBlockType _pingHandler;
    NSMutableArray *_deListCompletions;
    NSMutableDictionary *_deCompletions;
    NSMutableArray *_adoptFilesCompletions;
    NSMutableDictionary *_ongoingCompletionHandlers;
    DEDExtensionIdentifierManager *_identifierManager;
    NSDate *_uploadStartTime;
    NSMutableDictionary *_pendingOperations;
    CDUnknownBlockType _statusCompletionBlock;
    CDUnknownBlockType _syncCompletionBlock;
    NSDictionary *_cachedExtensions;
    id <DEDClientProtocol> _client;
    id <DEDWorkerProtocol> _worker;
    id <DEDFinisher><DEDSecureArchiving> __finisher;
    id <DEDNotifier><DEDSecureArchiving> __notifier;
}

+ (id)archivedClasses;
+ (_Bool)supportsSecureCoding;
@property(retain) id <DEDNotifier><DEDSecureArchiving> _notifier; // @synthesize _notifier=__notifier;
@property(retain) id <DEDFinisher><DEDSecureArchiving> _finisher; // @synthesize _finisher=__finisher;
@property(retain) id <DEDWorkerProtocol> worker; // @synthesize worker=_worker;
@property(retain) id <DEDClientProtocol> client; // @synthesize client=_client;
@property(retain) NSDictionary *cachedExtensions; // @synthesize cachedExtensions=_cachedExtensions;
@property(copy) CDUnknownBlockType syncCompletionBlock; // @synthesize syncCompletionBlock=_syncCompletionBlock;
@property(copy) CDUnknownBlockType statusCompletionBlock; // @synthesize statusCompletionBlock=_statusCompletionBlock;
@property(retain) NSMutableDictionary *pendingOperations; // @synthesize pendingOperations=_pendingOperations;
@property(retain) NSDate *uploadStartTime; // @synthesize uploadStartTime=_uploadStartTime;
@property(retain) DEDExtensionIdentifierManager *identifierManager; // @synthesize identifierManager=_identifierManager;
@property(retain) NSMutableDictionary *ongoingCompletionHandlers; // @synthesize ongoingCompletionHandlers=_ongoingCompletionHandlers;
@property(retain) NSMutableArray *adoptFilesCompletions; // @synthesize adoptFilesCompletions=_adoptFilesCompletions;
@property(retain) NSMutableDictionary *deCompletions; // @synthesize deCompletions=_deCompletions;
@property(retain) NSMutableArray *deListCompletions; // @synthesize deListCompletions=_deListCompletions;
@property(copy) CDUnknownBlockType pingHandler; // @synthesize pingHandler=_pingHandler;
@property(retain) NSMutableSet *filePromises; // @synthesize filePromises=_filePromises;
@property(retain) id <DEDUploadStatusDelegate> uploadDelegate; // @synthesize uploadDelegate=_uploadDelegate;
@property long long priorWorkerTransportType; // @synthesize priorWorkerTransportType=_priorWorkerTransportType;
@property long long priorClientTransportType; // @synthesize priorClientTransportType=_priorClientTransportType;
@property(retain) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_logOperationQueue;
- (void)_streamOperationQueue;
- (void)didFinishOperation:(long long)arg1 withIdentifier:(id)arg2;
- (void)willPerformOperationWithID:(id)arg1 type:(long long)arg2 options:(id)arg3;
- (void)save;
- (void)removeFromStore;
- (_Bool)hasCapability:(id)arg1;
- (id)attachmentHandler;
- (void)storeCollectionCompletion:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;
- (CDUnknownBlockType)nextCompletionBlockForIdentifier:(id)arg1;
- (id)hashExtensions:(id)arg1;
- (void)_terminateExtensionWithIdentifier:(id)arg1 info:(id)arg2;
- (_Bool)hasStaleDirectory;
- (_Bool)hasDirectory;
- (_Bool)isTarget;
- (void)didAdoptGroup:(id)arg1;
- (id)scheduledDeferredExtensionCollectionOperations;
- (id)ongoingExtensionCollectionOperations;
- (id)ongoingCollectOperationsWithOperations:(id)arg1;
- (void)notifyPromiseCancellationIfNeeded:(id)arg1;
- (void)didTerminateDiagnosticExtension:(id)arg1;
- (_Bool)shouldCollectDiagnosticWithId:(id)arg1;
- (_Bool)isRunningDE:(id)arg1;
- (void)_clearNotification;
- (void)presentNotification;
- (void)beginSessionSubmission;
- (_Bool)readyToFinish;
- (_Bool)readyToCancel;
- (_Bool)readyToNotify;
- (void)didFinishAllUploads;
- (long long)state;
- (void)cleanup;
- (void)didStart;
@property(retain) DEDBugSessionConfiguration *config; // @synthesize config=_config;
- (void)_cancel;
- (void)cancel;
- (void)didCancel;
- (void)terminateExtension:(id)arg1 withInfo:(id)arg2;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 identifiers:(id)arg3;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2;
- (void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2;
- (void)didCommit;
- (void)commit;
- (void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)didAdoptFilesWithError:(id)arg1;
- (void)adoptFiles:(id)arg1;
- (void)supportsDiagnostics:(id)arg1;
- (void)listAvailableExtensions;
- (void)pong;
- (void)ping;
- (void)syncStatus;
- (void)getStatus;
@property(readonly) NSArray *allExtensionIdentifiers;
- (void)clearNotification;
- (void)scheduleNotification;
- (void)resumePendingOperations;
- (void)adoptFiles:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)cancelDiagnosticExtensionWithDEDExtensionIdentifier:(id)arg1;
- (void)cancelDiagnosticExtensionWithIdentifier:(id)arg1 invocationNumber:(long long)arg2;
- (void)cancelDiagnosticExtensionWithIdentifier:(id)arg1;
- (void)cancelDiagnosticExtension:(id)arg1;
- (void)removeAttachment:(id)arg1;
- (void)startDiagnosticExtension:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)startDiagnosticExtensionWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startDiagnosticExtensionWithDEDIdentifier:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)startDiagnosticExtensionWithIdentifier:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)synchronizeSessionStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSessionStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)listDiagnosticExtensionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)pingWithCallback:(CDUnknownBlockType)arg1;
- (id)knownExtensions;
- (void)attachCompletionHandlerForDEDExtensionIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)attachCompletionHandlerForOngoingOperation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)configuration;
- (id)shortDescription;
- (id)prettyDescription;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)notifier;
- (id)finisher;
- (id)initWithConfiguration:(id)arg1;
@property(readonly) NSObject<OS_os_log> *log;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

