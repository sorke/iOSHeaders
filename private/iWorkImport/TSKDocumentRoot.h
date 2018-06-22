//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSKAccessControllerDelegate.h"
#import "TSKModel.h"

@class NSDictionary, NSMutableArray, NSString, TSCHTextCache, TSKAccessController, TSKAnnotationAuthor, TSKAnnotationAuthorStorage, TSKChangeNotifier, TSKDocumentSupport, TSKPasteboardController, TSKSelectionDispatcher, TSSStylesheet, TSSTheme, TSULocale;

__attribute__((visibility("hidden")))
@interface TSKDocumentRoot : TSPObject <TSKAccessControllerDelegate, TSKModel>
{
    TSKAccessController *_accessController;
    TSKChangeNotifier *_changeNotifier;
    TSKSelectionDispatcher *_selectionDispatcher;
    TSKPasteboardController *_pasteboardController;
    TSKAnnotationAuthorStorage *_annotationAuthorStorage;
    TSKAnnotationAuthor *_authorForFiltering;
    _Bool _isFindActive;
    NSMutableArray *_iCloudTeardownStack;
    _Bool _preventImageConversionOnOpen;
    TSULocale *_documentLocale;
    _Bool _hasUserDefinedLocale;
    TSULocale *_documentCreationLocale;
    _Bool _isBeingLocalized;
    id <TSKDocumentRootDelegate> _delegate;
    TSKDocumentSupport *_documentSupport;
    TSKDocumentSupport *_documentSupportIfAvailable;
}

+ (_Bool)needsObjectUUID;
@property(readonly, nonatomic) TSKDocumentSupport *documentSupportIfAvailable; // @synthesize documentSupportIfAvailable=_documentSupportIfAvailable;
@property(readonly, nonatomic) TSKDocumentSupport *documentSupport; // @synthesize documentSupport=_documentSupport;
@property(readonly, nonatomic) _Bool isBeingLocalized; // @synthesize isBeingLocalized=_isBeingLocalized;
@property(readonly, nonatomic) TSKChangeNotifier *changeNotifier; // @synthesize changeNotifier=_changeNotifier;
@property(retain, nonatomic) TSKAnnotationAuthor *authorForFiltering; // @synthesize authorForFiltering=_authorForFiltering;
@property(readonly, retain, nonatomic) TSKAnnotationAuthorStorage *annotationAuthorStorage; // @synthesize annotationAuthorStorage=_annotationAuthorStorage;
@property(nonatomic, getter=isFindActive) _Bool findActive; // @synthesize findActive=_isFindActive;
@property(readonly, nonatomic) TSULocale *documentCreationLocale; // @synthesize documentCreationLocale=_documentCreationLocale;
@property(readonly, nonatomic) TSULocale *documentLocale; // @synthesize documentLocale=_documentLocale;
@property(retain, nonatomic) TSKPasteboardController *pasteboardController; // @synthesize pasteboardController=_pasteboardController;
@property(readonly, nonatomic) TSKSelectionDispatcher *selectionDispatcher; // @synthesize selectionDispatcher=_selectionDispatcher;
@property(readonly, nonatomic) TSKAccessController *accessController; // @synthesize accessController=_accessController;
- (void).cxx_destruct;
- (void)gilligan_documentDidRemoveObject:(id)arg1;
- (void)gilligan_documentWillRemoveObject:(id)arg1;
- (void)gilligan_documentWillInsertObject:(id)arg1;
- (void)gilligan_documentDidInsertObject:(id)arg1;
- (void)updateForNonCommandChangesWithWriteLock:(id)arg1;
- (void)willRelinquishReadLock;
- (void)didAcquireReadLock;
@property(readonly, nonatomic) _Bool hasICloudConflict;
- (_Bool)hasICloudTeardownObserver;
- (void)notifyICloudTeardownObservers;
- (void)removeICloudTeardownObserver:(long long)arg1;
- (long long)addObserverForICloudTeardownSuspendingCollaboration:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (long long)addObserverForICloudTeardownWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)updateDocumentLocaleToUseLanguageIfNeeded:(id)arg1;
- (_Bool)updateDocumentLocaleToCurrentIfNeeded;
@property(readonly, nonatomic) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property(readonly, nonatomic) NSDictionary *additionalDocumentPropertiesForWrite;
- (void)saveToArchive:(struct DocumentArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct DocumentArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) _Bool isCollaborative;
- (void)dumpReaderWriterThreads;
- (id)modelEnumeratorWithFlags:(unsigned long long)arg1 forObjectsPassingTest:(CDUnknownBlockType)arg2;
- (id)modelEnumeratorForObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)modelEnumeratorWithFlags:(unsigned long long)arg1 forObjectsRespondingToSelector:(SEL)arg2;
- (id)modelEnumeratorForObjectsRespondingToSelector:(SEL)arg1;
- (id)modelEnumeratorWithFlags:(unsigned long long)arg1 forObjectsConformingToProtocol:(id)arg2;
- (id)modelEnumeratorForObjectsConformingToProtocol:(id)arg1;
- (id)modelEnumeratorWithFlags:(unsigned long long)arg1 forObjectsOfClass:(Class)arg2;
- (id)modelEnumeratorForObjectsOfClass:(Class)arg1;
- (id)modelEnumeratorWithFlags:(unsigned long long)arg1;
- (id)modelEnumerator;
- (id)commandForUpdatingAfterInsertingDrawables:(id)arg1 context:(id)arg2;
- (void)removeAllAnnotationsFromDrawables:(id)arg1;
- (id)commandForRemovingCommentsFromDrawables:(id)arg1 context:(id)arg2;
- (id)makeIsolatedStyleMapper;
- (id)makeStyleMapper;
- (_Bool)documentAllowsPencilAnnotationsOnModel:(id)arg1;
- (_Bool)documentDisallowsHighlightsOnStorage:(id)arg1;
- (_Bool)shouldShowComments;
@property(readonly, nonatomic) _Bool freehandDrawingsRequireSpacerShape;
- (_Bool)isDirectionRightToLeft;
@property(readonly, nonatomic) NSString *documentLanguage;
@property(readonly, nonatomic) unsigned long long writingDirectionForStorage;
@property(readonly, nonatomic) unsigned long long writingDirection;
@property(readonly, nonatomic) _Bool hasFloatingLocale;
- (void)willClose;
- (void)didDisconnectFromServerWithCollaborationContext:(id)arg1;
- (void)didConnectToServerWithCollaborationContext:(id)arg1;
- (void)documentDidLoad;
- (void)didSaveWithEncryptionChange;
- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;
- (struct CGImageSource *)newImageSourceForDocumentCachePath:(id)arg1;
- (_Bool)writeData:(id)arg1 atDocumentCachePath:(id)arg2;
- (id)dataFromDocumentCachePath:(id)arg1;
- (void)updateAnnotationAuthorList:(id)arg1;
- (id)customFormatList;
- (id)tableIdRemappingCommandsForTablesInDrawables:(id)arg1;
- (id)tableIdRemappingCommandsForTablesInStorages:(id)arg1;
- (void)pauseRecalculationForBlock:(CDUnknownBlockType)arg1;
- (void)resumeRecalculation;
- (void)pauseRecalculationSometimeSoon;
- (void)pauseRecalculation;
- (id)calculationEngine;
@property(readonly, nonatomic) _Bool canUseHEVC;
@property(readonly, nonatomic) unsigned long long applicationType;
@property(readonly, nonatomic) unsigned long long maxMediaItemFileSize;
@property(nonatomic) _Bool shouldPreventImageConversionOnOpen;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
@property(nonatomic) __weak id <TSKDocumentRootDelegate> delegate;
@property(readonly) TSCHTextCache *tsch_textCache;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (id)UIStateForChart:(id)arg1;
- (id)stylesToNotResizeInStylesheet:(id)arg1;
- (id)migratedPropertyMapForPropertyMap:(id)arg1;
- (id)migratedPresetForPreset:(id)arg1;
- (_Bool)objectsNeedToBeMigrated:(id)arg1;
- (id)migratedStyleForStyle:(id)arg1;
- (void)migrateStylesInObjects:(id)arg1;
- (void)migrateStylesInObjects:(id)arg1 changePropagationMap:(id)arg2;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)setStylesheet:(id)arg1 andThemeForImport:(id)arg2;
@property(readonly, nonatomic) TSSStylesheet *stylesheet;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setTheme:(id)arg1;
@property(readonly, nonatomic) TSSTheme *theme;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

