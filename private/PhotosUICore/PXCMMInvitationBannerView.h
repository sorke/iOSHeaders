//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, PXRoundImageView, UIImage, UILabel, UIVisualEffectView;

@interface PXCMMInvitationBannerView : UIView
{
    UIVisualEffectView *_blurView;
    UILabel *_titleLabel;
    UILabel *_subtitle1Label;
    UILabel *_subtitle2Label;
    PXRoundImageView *_avatarImageView;
}

- (void).cxx_destruct;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(retain, nonatomic) UIImage *avatarImage;
@property(copy, nonatomic) NSString *subtitle2;
@property(copy, nonatomic) NSString *subtitle1;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

