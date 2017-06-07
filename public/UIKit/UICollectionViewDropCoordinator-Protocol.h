//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSIndexPath, NSString, UICollectionViewDropProposal, UIDragItem, UIDragPreviewTarget;
@protocol UICollectionViewDropPlaceholderContext, UIDropSession;

@protocol UICollectionViewDropCoordinator <NSObject>
@property(readonly, nonatomic) id <UIDropSession> session;
@property(readonly, nonatomic) UICollectionViewDropProposal *proposal;
@property(readonly, nonatomic) NSIndexPath *destinationIndexPath;
@property(readonly, nonatomic) NSArray *items;
- (void)dropItem:(UIDragItem *)arg1 toTarget:(UIDragPreviewTarget *)arg2;
- (void)dropItem:(UIDragItem *)arg1 intoItemAtIndexPath:(NSIndexPath *)arg2 rect:(struct CGRect)arg3;
- (void)dropItem:(UIDragItem *)arg1 toItemAtIndexPath:(NSIndexPath *)arg2;
- (id <UICollectionViewDropPlaceholderContext>)dropItem:(UIDragItem *)arg1 toPlaceholderInsertedAtIndexPath:(NSIndexPath *)arg2 withReuseIdentifier:(NSString *)arg3 cellUpdateHandler:(void (^)(UICollectionViewCell *))arg4;
@end
