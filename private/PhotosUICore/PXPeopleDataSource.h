//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPredicate, NSString, PHFetchResult;
@protocol OS_dispatch_queue, PXPeopleDataSourceDelegate;

@interface PXPeopleDataSource : NSObject
{
    _Bool _disclosed;
    _Bool _useAsynchronousLoad;
    NSString *_name;
    unsigned long long _maximumNumberOfMembers;
    id <PXPeopleDataSourceDelegate> _delegate;
    NSString *_localizedDisclosedTitle;
    NSString *_localizedUndisclosedTitle;
    NSPredicate *_filterPredicate;
    CDUnknownBlockType _sortComparator;
    NSArray *_members;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    PHFetchResult *_objects;
    PHFetchResult *_originalObjects;
    CDUnknownBlockType _reloadBlock;
    NSArray *_originalMembers;
}

@property(retain, nonatomic) NSArray *originalMembers; // @synthesize originalMembers=_originalMembers;
@property(copy, nonatomic) CDUnknownBlockType reloadBlock; // @synthesize reloadBlock=_reloadBlock;
@property(retain, nonatomic) PHFetchResult *originalObjects; // @synthesize originalObjects=_originalObjects;
@property(retain, nonatomic) PHFetchResult *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) _Bool useAsynchronousLoad; // @synthesize useAsynchronousLoad=_useAsynchronousLoad;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue; // @synthesize reloadQueue=_reloadQueue;
@property(retain, nonatomic) NSArray *members; // @synthesize members=_members;
@property(copy, nonatomic) CDUnknownBlockType sortComparator; // @synthesize sortComparator=_sortComparator;
@property(copy, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(getter=isDisclosed) _Bool disclosed; // @synthesize disclosed=_disclosed;
@property(copy) NSString *localizedUndisclosedTitle; // @synthesize localizedUndisclosedTitle=_localizedUndisclosedTitle;
@property(copy) NSString *localizedDisclosedTitle; // @synthesize localizedDisclosedTitle=_localizedDisclosedTitle;
@property(nonatomic) __weak id <PXPeopleDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maximumNumberOfMembers; // @synthesize maximumNumberOfMembers=_maximumNumberOfMembers;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)_asyncLoadImageForItem:(id)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3 fastDisplayBlock:(CDUnknownBlockType)arg4;
- (void)_asyncLoadImageForItem:(id)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)_itemsArrayFromObjects:(id)arg1;
- (void)stopListeningForChanges;
- (void)startListeningForChanges;
- (void)_updateMembers;
- (void)loadObjectsAndUpdateMembersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setObjectsWithoutUpdate:(id)arg1;
- (CDUnknownBlockType)defaultComparator;
- (id)localizedTitle;
- (unsigned long long)photoQuantityAtIndex:(unsigned long long)arg1;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3 fastDisplayBlock:(CDUnknownBlockType)arg4;
- (id)titleAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfMember:(id)arg1;
- (id)memberAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfMembers;
- (void)dealloc;
- (id)initWithName:(id)arg1 objects:(id)arg2;
- (id)initWithName:(id)arg1 objectsReloadBlock:(CDUnknownBlockType)arg2 asynchronousLoad:(_Bool)arg3 callbackDelegate:(id)arg4;
- (id)initWithName:(id)arg1 objectsReloadBlock:(CDUnknownBlockType)arg2;

@end
