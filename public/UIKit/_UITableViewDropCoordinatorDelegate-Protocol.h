//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UITableViewPlaceholderContextDelegate-Protocol.h>

@class NSIndexPath, UIDragItem, UIDragPreviewParameters, UIDragPreviewTarget, UITableView, UITableViewCell, _UITableViewDropPlaceholderContextImpl;

@protocol _UITableViewDropCoordinatorDelegate <_UITableViewPlaceholderContextDelegate>
- (void)insertPlaceholderAtIndexPath:(NSIndexPath *)arg1 withContext:(_UITableViewDropPlaceholderContextImpl *)arg2;
- (void)animateDragItem:(UIDragItem *)arg1 toTarget:(UIDragPreviewTarget *)arg2;
- (void)animateDragItem:(UIDragItem *)arg1 toCell:(UITableViewCell *)arg2 withPreviewParameters:(UIDragPreviewParameters *)arg3;
- (void)animateDragItem:(UIDragItem *)arg1 toRowAtIndexPath:(NSIndexPath *)arg2 withPreviewParameters:(UIDragPreviewParameters *)arg3;
- (void)animateDragItem:(UIDragItem *)arg1 intoRowAtIndexPath:(NSIndexPath *)arg2 rect:(struct CGRect)arg3;
- (UITableView *)tableView;
@end
