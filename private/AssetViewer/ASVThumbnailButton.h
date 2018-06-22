//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class ASVBadgeView, ASVLoadingView, NSError, NSLayoutConstraint, UIImage, UIImageView;

@interface ASVThumbnailButton : UIButton
{
    ASVLoadingView *_loadingView;
    ASVBadgeView *_badgeView;
    UIImageView *_imageView;
    NSLayoutConstraint *_badgeTopConstraint;
    NSLayoutConstraint *_badgeTrailingConstraint;
}

+ (id)thumbnailButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateSubviewVisibility;
- (void)setHighlighted:(_Bool)arg1;
@property(retain, nonatomic) NSError *error;
@property(retain, nonatomic) UIImage *thumbnail;
- (void)_setupButton;

@end

