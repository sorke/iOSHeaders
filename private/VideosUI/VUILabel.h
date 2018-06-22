//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_TVLabel.h"

@class VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUILabel : _TVLabel
{
    _Bool _selected;
    _Bool _lastSelectedOrHighlighted;
    VUITextLayout *_textLayout;
}

+ (unsigned long long)_numberOfLinesForTraitCollection:(id)arg1 textLayout:(id)arg2;
+ (id)labelWithString:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3;
@property(retain, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
- (void).cxx_destruct;
- (void)_updateTextColor:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)baselineHeight;

@end

