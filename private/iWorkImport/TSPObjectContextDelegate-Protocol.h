//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSPSupportDirectoryDelegate.h"

@class NSDictionary, NSError, NSSet, NSString, NSURL, NSUUID, TSPData, TSPObjectContext, TSPObjectReferenceMap;

@protocol TSPObjectContextDelegate <TSPSupportDirectoryDelegate>

@optional
@property(readonly, nonatomic) NSUUID *baseUUIDForObjectUUID;
@property(readonly, nonatomic) _Bool areNewExternalReferencesToDataAllowed;
@property(readonly, nonatomic) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property(readonly, nonatomic) NSDictionary *additionalDocumentPropertiesForWrite;
@property(readonly, nonatomic) _Bool isDocumentSupportTemporary;
@property(readonly, nonatomic) _Bool ignoreDocumentSupport;
@property(readonly, nonatomic) id <NSFilePresenter> filePresenter;
- (void)gilligan_data:(TSPData *)arg1 didMoveFromPackageIdentifier:(unsigned char)arg2 packageLocator:(NSString *)arg3 toPackageIdentifier:(unsigned char)arg4 packageLocator:(NSString *)arg5;
- (_Bool)gilligan_isRemoteData:(TSPData *)arg1;
- (_Bool)shouldLoadAllComponentsForContext:(TSPObjectContext *)arg1 documentURL:(NSURL *)arg2;
- (void)context:(TSPObjectContext *)arg1 willFailToAutosaveDueToDuplicateUUIDs:(NSSet *)arg2 objectReferenceMap:(TSPObjectReferenceMap *)arg3;
- (void)requestAutosaveForExpensiveCalculation;
- (void)requestAutosave;
- (void)resumeSaveAndAutosaveWithReason:(NSString *)arg1;
- (void)suspendSaveAndAutosaveWithReason:(NSString *)arg1;
- (void)resumeAutosaveWithReason:(NSString *)arg1;
- (void)suspendAutosaveWithReason:(NSString *)arg1;
- (_Bool)isDocumentSupportRequiredForContext:(TSPObjectContext *)arg1;
- (_Bool)didCollaborationContextValidateWithServerForContext:(TSPObjectContext *)arg1;
- (void)context:(TSPObjectContext *)arg1 canPerformUserActionUsingBlock:(void (^)(_Bool))arg2;
- (_Bool)isCollaborationOfflineForContext:(TSPObjectContext *)arg1;
- (_Bool)isInReadOnlyModeForContext:(TSPObjectContext *)arg1;
- (_Bool)isInCollaborationModeForContext:(TSPObjectContext *)arg1;
- (void)context:(TSPObjectContext *)arg1 didDownloadRemoteData:(TSPData *)arg2 error:(NSError *)arg3;
- (void)context:(TSPObjectContext *)arg1 didDownloadDocumentResources:(NSSet *)arg2;
- (NSSet *)persistenceWarningsForData:(TSPData *)arg1 flags:(unsigned long long)arg2;
- (_Bool)preserveDocumentRevisionIdentifierForSaveURL:(NSURL *)arg1;
- (_Bool)areExternalReferencesToDataAllowedAtURL:(NSURL *)arg1;
- (NSString *)documentPasswordHintForWrite;
- (NSSet *)additionalResourceRequestsForObjectContext:(TSPObjectContext *)arg1;
- (NSSet *)preferredResourceRequestTagsForContext:(TSPObjectContext *)arg1;
- (NSDictionary *)packageDataForWrite;
- (void)willBeginReadingFromURL:(NSURL *)arg1;
- (_Bool)retrievePassphraseWithConsumer:(id <TSPPassphraseConsumer>)arg1 error:(id *)arg2;
- (void)didLoadDocumentWrittenByPreviousVersion;
- (void)addPersistenceWarnings:(NSSet *)arg1;
- (void)presentPersistenceError:(NSError *)arg1;
@end

