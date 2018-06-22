//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUFeedCell.h>

@class PXFeedSectionInfo, UIButton, UIImage, UILabel;

__attribute__((visibility("hidden")))
@interface PUFeedCaptionCell : PUFeedCell
{
    _Bool _hideCaption;
    PXFeedSectionInfo *_sectionInfo;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_likeButton;
    struct UIEdgeInsets _contentInsets;
}

@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool hideCaption; // @synthesize hideCaption=_hideCaption;
@property(retain, nonatomic) PXFeedSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (void)_handleLikeButtonTap:(id)arg1;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_updateUI;
- (void)_updateLikeButton;
- (void)_setLikeButtonLiked:(_Bool)arg1;
- (void)_updateSubtitle;
- (void)_updateTitle;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIImage *notLikedImage;
@property(readonly, nonatomic) UIImage *likedImage;
@property(nonatomic) _Bool isLiked; // @dynamic isLiked;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

