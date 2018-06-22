//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUITableViewCell.h>

@class NSArray, SearchUIAppIconsRowView, TLKAuxilliaryTextView;

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell
{
    SearchUIAppIconsRowView *_topRow;
    SearchUIAppIconsRowView *_bottomRow;
    NSArray *_results;
    long long _indexOfSelectedKeyboardIcon;
    TLKAuxilliaryTextView *_folderLabelView;
}

+ (unsigned long long)numberOfColumnsForCurrentOrientation;
+ (void)removeDropShadowIconStateForView:(id)arg1;
@property(retain, nonatomic) TLKAuxilliaryTextView *folderLabelView; // @synthesize folderLabelView=_folderLabelView;
@property(nonatomic) long long indexOfSelectedKeyboardIcon; // @synthesize indexOfSelectedKeyboardIcon=_indexOfSelectedKeyboardIcon;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) SearchUIAppIconsRowView *bottomRow; // @synthesize bottomRow=_bottomRow;
@property(retain, nonatomic) SearchUIAppIconsRowView *topRow; // @synthesize topRow=_topRow;
- (void).cxx_destruct;
- (void)removeKeyboardHandler;
- (_Bool)navigateKeyboardLeft;
- (void)returnKeyPressed;
- (_Bool)navigateKeyboardRight;
- (void)setupKeyboardHandler;
- (_Bool)canSetupKeyboardHandler;
- (unsigned long long)numberOfVisibleResults;
- (id)visibleResults;
- (void)updateExpanded:(_Bool)arg1;
- (_Bool)isExpandable;
- (void)layoutSubviews;
- (double)appRowSpacing;
- (double)topAndBottomPadding;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithRowModel:(id)arg1;
- (void)setFeedbackDelegateForRowView:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;

@end

