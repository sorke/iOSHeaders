//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class BSUIFontProvider, MTMaterialView, NSString, UILabel;

@interface WGShortLookStyleButton : UIControl
{
    MTMaterialView *_backgroundView;
    UILabel *_titleLabel;
    BSUIFontProvider *_fontProvider;
    double _dimension;
    _Bool _backgroundBlurred;
}

@property(nonatomic, getter=isBackgroundBlurred) _Bool backgroundBlurred; // @synthesize backgroundBlurred=_backgroundBlurred;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_layoutTitleLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)invalidateCachedGeometry;
- (double)_dimension;
@property(copy, nonatomic) NSString *title;
- (void)_configureMaskIfNecessary;
- (void)_setBackgroundViewCornerRadius:(double)arg1;
- (double)_backgroundViewCornerRadius;
- (void)_configureTitleLabelIfNecessary;
- (void)_updateTitleLabelFont;
- (void)_configureBackgroundViewIfNecessary;
- (double)_minimumScaleFactorForFont:(id)arg1;
- (id)_fontProvider;
@property(retain, nonatomic) NSString *groupName;

@end

