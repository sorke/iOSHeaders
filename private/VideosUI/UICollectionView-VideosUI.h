//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

@interface UICollectionView (VideosUI)
+ (id)_vui_indexPathsWithIndexSet:(id)arg1 andSection:(unsigned long long)arg2;
- (void)_vui_applyItemUpdateChanges:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;
- (void)_vui_applySectionUpdateChanges:(id)arg1 applyChangeBlock:(CDUnknownBlockType)arg2;
- (void)_vui_applyUpdateChanges:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;
- (void)_vui_applyMoveChanges:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;
- (void)_vui_applyInsertChange:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;
- (void)_vui_applyDeleteChange:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;
- (void)vui_applySectionChangeSet:(id)arg1 updateDataSourceBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 updateDataSourceBlock:(CDUnknownBlockType)arg3 applyChangeBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 updateDataSourceBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)vui_applyChangeSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@end

