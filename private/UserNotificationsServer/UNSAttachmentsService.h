//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UNSNotificationRepositoryObserver.h"
#import "UNSPendingNotificationRepositoryObserver.h"

@class NSObject<OS_dispatch_queue>, NSString, UNSAttachmentsRepository, UNSNotificationRepository, UNSNotificationSchedulingService, UNSPendingNotificationRepository;

@interface UNSAttachmentsService : NSObject <UNSNotificationRepositoryObserver, UNSPendingNotificationRepositoryObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    UNSAttachmentsRepository *_attachmentsRepository;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationSchedulingService *_notificationSchedulingService;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
}

+ (id)_attachmentURLsRemovedByReplaceUpdate:(id)arg1;
+ (id)_notificationIdentifiersForNotificationRecords:(id)arg1;
+ (id)_stagingDirectory;
- (void).cxx_destruct;
- (void)_notificationIdentifiersForBundleIdentifier:(id)arg1 replyOnQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_repositoryDidPerformUpdates:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_beginObservingNotificationChanges;
- (void)pendingNotificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)_queue_applicationDidUninstall:(id)arg1;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_getAttachmentDataForAttachment:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAttachmentDataForAttachment:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_deleteAttachmentDataForNotificationRecord:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_queue_deleteAttachmentDataForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2;
- (id)_temporaryAttachmentFileURL;
- (id)_queue_resolvedFileURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id *)arg5;
- (id)_queue_validatedRepositoryURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id *)arg5;
- (id)_queue_resolvedURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id *)arg5;
- (id)_queue_resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 error:(id *)arg4;
- (id)resolveAttachmentsSkippingErrorsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3;
- (id)resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 error:(id *)arg4;
- (void)_queue_ensureIntegrityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)ensureIntegrityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAttachmentsRepository:(id)arg1 notificationRepository:(id)arg2 notificationSchedulingService:(id)arg3 pendingNotificationRepository:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

