//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, NSString, PXRoundedCornerOverlayView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUSearchResultsContentView : UIView
{
    NSAttributedString *_attributedTitle;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_auxSubtitleLabel;
    UIView *_imageContentView;
    PXRoundedCornerOverlayView *_cornerOverlayView;
    NSAttributedString *_title;
    NSString *_subtitle;
    NSString *_auxSubtitle;
    UIImageView *_imageView;
}

@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSString *auxSubtitle; // @synthesize auxSubtitle=_auxSubtitle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_preferredContentSizeChanged:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateAuxSubtitleLabel;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (void)layoutMarginsDidChange;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

