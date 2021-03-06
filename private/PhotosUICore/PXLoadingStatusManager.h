//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableDictionary, NSMutableSet;

@interface PXLoadingStatusManager : NSObject
{
    struct {
        _Bool respondsToDidUpdateLoadingStatusForItem;
    } _delegateFlags;
    _Bool __isUpdateScheduled;
    id <PXLoadingStatusManagerDelegate> _delegate;
    NSMutableSet *__invalidLoadingStatusItems;
    NSMapTable *__loadOperationTrackingIDsByItem;
    NSMapTable *__loadingStatusByItem;
    NSMutableDictionary *__itemByLoadOperationTrackingID;
    NSMutableDictionary *__loadingStatusByLoadOperationTrackingID;
}

@property(readonly, nonatomic) NSMutableDictionary *_loadingStatusByLoadOperationTrackingID; // @synthesize _loadingStatusByLoadOperationTrackingID=__loadingStatusByLoadOperationTrackingID;
@property(readonly, nonatomic) NSMutableDictionary *_itemByLoadOperationTrackingID; // @synthesize _itemByLoadOperationTrackingID=__itemByLoadOperationTrackingID;
@property(readonly, nonatomic) NSMapTable *_loadingStatusByItem; // @synthesize _loadingStatusByItem=__loadingStatusByItem;
@property(readonly, nonatomic) NSMapTable *_loadOperationTrackingIDsByItem; // @synthesize _loadOperationTrackingIDsByItem=__loadOperationTrackingIDsByItem;
@property(readonly, nonatomic) NSMutableSet *_invalidLoadingStatusItems; // @synthesize _invalidLoadingStatusItems=__invalidLoadingStatusItems;
@property(nonatomic, setter=_setUpdateScheduled:) _Bool _isUpdateScheduled; // @synthesize _isUpdateScheduled=__isUpdateScheduled;
@property(nonatomic) __weak id <PXLoadingStatusManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateLoadingStatusForItem:(id)arg1;
- (void)_updateLoadingStatusForItemIfNeeded:(id)arg1;
- (void)_updateLoadingStatusForItemsIfNeeded;
- (void)_invalidateLoadingStatusForItem:(id)arg1;
- (void)_updateNowIfNeeded;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)_resetLoadingStatusForItemIfAppropriate:(id)arg1;
- (void)_setLoadingStatus:(id)arg1 forItem:(id)arg2;
- (void)_setLoadingStatus:(id)arg1 forLoadOperationTrackingID:(struct NSString *)arg2;
- (void)didCancelLoadOperationWithTrackingID:(struct NSString *)arg1;
- (void)didCompleteLoadOperationWithTrackingID:(struct NSString *)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;
- (void)didUpdateLoadOperationWithTrackingID:(struct NSString *)arg1 withProgress:(double)arg2;
- (struct NSString *)willBeginLoadOperationWithItem:(id)arg1;
- (id)loadingStatusForItem:(id)arg1;
- (id)init;

@end

