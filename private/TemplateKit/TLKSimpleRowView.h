//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TemplateKit/TLKView.h>

#import "NUIContainerGridViewDelegate.h"

@class NSString, NUIContainerGridView, TLKImage, TLKImageView, TLKRichText, TLKVibrantLabel;

@interface TLKSimpleRowView : TLKView <NUIContainerGridViewDelegate>
{
    TLKImage *_leadingImage;
    TLKRichText *_leadingTitle;
    TLKRichText *_leadingSubtitle;
    TLKImage *_trailingImage;
    TLKRichText *_trailingTitle;
    TLKRichText *_trailingSubtitle;
    TLKImageView *_leadingImageView;
    TLKVibrantLabel *_leadingTitleLabel;
    TLKVibrantLabel *_leadingSubtitleLabel;
    TLKVibrantLabel *_trailingTitleLabel;
    TLKVibrantLabel *_trailingSubtitleLabel;
    TLKImageView *_trailingImageView;
    NUIContainerGridView *_containerView;
}

+ (void)applyText:(id)arg1 toLabel:(id)arg2;
@property(retain) NUIContainerGridView *containerView; // @synthesize containerView=_containerView;
@property(retain) TLKImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(retain) TLKVibrantLabel *trailingSubtitleLabel; // @synthesize trailingSubtitleLabel=_trailingSubtitleLabel;
@property(retain) TLKVibrantLabel *trailingTitleLabel; // @synthesize trailingTitleLabel=_trailingTitleLabel;
@property(retain) TLKVibrantLabel *leadingSubtitleLabel; // @synthesize leadingSubtitleLabel=_leadingSubtitleLabel;
@property(retain) TLKVibrantLabel *leadingTitleLabel; // @synthesize leadingTitleLabel=_leadingTitleLabel;
@property(retain) TLKImageView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
@property(retain, nonatomic) TLKRichText *trailingSubtitle; // @synthesize trailingSubtitle=_trailingSubtitle;
@property(retain, nonatomic) TLKRichText *trailingTitle; // @synthesize trailingTitle=_trailingTitle;
@property(retain, nonatomic) TLKImage *trailingImage; // @synthesize trailingImage=_trailingImage;
@property(retain, nonatomic) TLKRichText *leadingSubtitle; // @synthesize leadingSubtitle=_leadingSubtitle;
@property(retain, nonatomic) TLKRichText *leadingTitle; // @synthesize leadingTitle=_leadingTitle;
@property(retain, nonatomic) TLKImage *leadingImage; // @synthesize leadingImage=_leadingImage;
- (void).cxx_destruct;
- (id)bottomRowViews;
- (id)topRowViews;
- (double)widthOfColumnAtIndex:(unsigned long long)arg1;
- (id)trailingSubtitleLabelFont;
- (id)trailingTitleLabelFont;
- (id)leadingTitleLabelFont;
- (id)trailingSubtitleLabelString;
- (id)trailingTitleLabelString;
- (id)leadingSubtitleLabelString;
- (id)leadingTitleLabelString;
- (id)stringForLabel:(id)arg1;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (_Bool)hasSubtitles;
- (void)observedPropertiesChanged;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)gridOfAllViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

