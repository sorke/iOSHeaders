//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDDrawableInfo.h>

#import "TSDAttachmentAwareContainerInfo.h"
#import "TSDMixing.h"
#import "TSDModelContainer.h"
#import "TSDMutableContainerInfo.h"
#import "TSDSelectionStatisticsContributor.h"
#import "TSKDocumentObject.h"

@class NSArray, NSMutableArray, NSObject<TSDContainerInfo>, NSSet, NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>;

__attribute__((visibility("hidden")))
@interface TSDGroupInfo : TSDDrawableInfo <TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDSelectionStatisticsContributor, TSDModelContainer, TSDAttachmentAwareContainerInfo>
{
    NSMutableArray *mChildInfos;
    _Bool mIsInDocument;
}

+ (id)p_drawablesToInsertForGroup:(id)arg1 outDidUngroup:(_Bool *)arg2 filteredWithBlock:(CDUnknownBlockType)arg3;
+ (id)drawablesToInsertForGroup:(id)arg1 filteredWithBlock:(CDUnknownBlockType)arg2;
+ (id)groupGeometryFromChildrenInfos:(id)arg1 currentlyLaidOutWithLayoutController:(id)arg2;
+ (id)groupGeometryFromChildrenInfos:(id)arg1;
+ (_Bool)canEditGroupsInCollaborativeDocuments;
+ (Class)classForUnarchiver:(id)arg1;
- (void).cxx_destruct;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (_Bool)needsDownload;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (_Bool)canAnchor;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (void)ensureGeometryFitsChildren;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)removeChildInfo:(id)arg1;
- (void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
- (id)ungroupedGeometryForChildInfo:(id)arg1;
- (id)groupedGeometryForChildInfo:(id)arg1;
- (void)removeAllChildrenInDocument:(_Bool)arg1;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildInfo:(id)arg1;
- (void)setChildInfos:(id)arg1;
@property(readonly, nonatomic) _Bool supportsCollaborativeEditing;
- (void)moveModel:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeContainedModel:(id)arg1;
- (void)insertContainedModel:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *containedModels;
@property(readonly, nonatomic) NSSet *infosToObserveForAttachedInfo;
- (id)infoForSelectionPath:(id)arg1;
@property(readonly, nonatomic) NSArray *childInfos;
@property(readonly, nonatomic) NSArray *allNestedChildrenInfosIncludingGroups;
@property(readonly, nonatomic) NSArray *allNestedChildrenInfosForWrap;
@property(readonly, nonatomic) NSArray *allNestedChildrenInfos;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic) _Bool isFreehandDrawing;
- (Class)repClass;
- (Class)layoutClass;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (_Bool)supportsParentRotation;
- (_Bool)allowsParentGroupToBeResizedWithoutAspectRatioLock;
@property(readonly, nonatomic) _Bool canAspectRatioLockBeChangedByUser;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct GroupArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct GroupArchive *)arg1 unarchiver:(id)arg2 upgradeDOLC:(_Bool)arg3;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)containsDisallowedElementKind:(unsigned int)arg1;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText; // @dynamic floatingAboveText;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText; // @dynamic inlineWithText;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @dynamic parentInfo;
@property(readonly) Class superclass;

@end

