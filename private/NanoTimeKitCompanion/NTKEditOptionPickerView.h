//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIView<NTKEditOptionContainerView>;

@interface NTKEditOptionPickerView : UIView
{
    NSArray *_options;
    unsigned long long _visibleOptionBufferSize;
    CDUnknownBlockType _optionToViewMapper;
    _Bool _active;
    unsigned long long _numberOfOptions;
    unsigned long long _selectedOptionIndex;
    UIView<NTKEditOptionContainerView> *_containerView;
    struct UIEdgeInsets _padding;
}

@property(retain, nonatomic) UIView<NTKEditOptionContainerView> *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) unsigned long long selectedOptionIndex; // @synthesize selectedOptionIndex=_selectedOptionIndex;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(copy, nonatomic) CDUnknownBlockType optionToViewMapper; // @synthesize optionToViewMapper=_optionToViewMapper;
@property(readonly, nonatomic) unsigned long long numberOfOptions; // @synthesize numberOfOptions=_numberOfOptions;
- (void).cxx_destruct;
- (void)_enumerateSideViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_transitionAnimatedToSelectedOptionFromIndex:(unsigned long long)arg1;
- (void)_transitionToSelectedOption;
- (void)_willDisplaySideView:(id)arg1;
- (void)_configureSideView:(id)arg1 forOption:(id)arg2;
- (Class)_sideViewClass;
- (id)_newContainerView;
- (void)_tileContainerForTransitionDirection:(long long)arg1;
- (id)_selectedSideView;
- (id)_sideViewAtIndex:(unsigned long long)arg1;
- (struct CGRect)_frameForContainerView;
- (void)applyRubberBandingFraction:(double)arg1;
- (void)applyBreathingScale:(double)arg1;
- (void)layoutSubviews;
- (void)setTransitionFraction:(double)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)setSelectedOptionIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)optionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) id selectedOption;
- (void)decrementSelection;
- (void)incrementSelection;
@property(nonatomic) unsigned long long numberOfSides;
- (void)_updateContainer;
- (id)description;
- (id)initWithOptions:(id)arg1 selectedOption:(id)arg2;

@end

