//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <DocumentManagerUICore/DOCTagViewDelegate-Protocol.h>
#import <DocumentManagerUICore/UICollectionViewDataSource-Protocol.h>
#import <DocumentManagerUICore/UICollectionViewDelegateFlowLayout-Protocol.h>

@class DOCTagView, NSArray, NSDictionary, NSString, UICollectionView;
@protocol DOCTagsCollectionViewDelegate;

@interface DOCTagsCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, DOCTagViewDelegate>
{
    id <DOCTagsCollectionViewDelegate> _delegate;
    NSArray *_tags;
    UICollectionView *_collectionView;
    NSDictionary *_sizingCells;
    DOCTagView *_firstBaselineView;
    DOCTagView *_lastBaselineView;
}

@property(readonly, nonatomic) DOCTagView *lastBaselineView; // @synthesize lastBaselineView=_lastBaselineView;
@property(readonly, nonatomic) DOCTagView *firstBaselineView; // @synthesize firstBaselineView=_firstBaselineView;
@property(readonly, nonatomic) NSDictionary *sizingCells; // @synthesize sizingCells=_sizingCells;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) __weak id <DOCTagsCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tagView:(id)arg1 didDeleteTag:(id)arg2;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)cellForIndexPath:(id)arg1 dequeueCell:(CDUnknownBlockType)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setupCells:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)awakeFromNib;
- (void)_DOCTagsCollectionViewSharedInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
