//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "HACCContentModule.h"

@class HACCLiveListenLevelGroup, NSString, UILabel, UIVisualEffectView;

@interface HACCLiveListenButton : UIControl <HACCContentModule>
{
    UIVisualEffectView *_titleContainer;
    UIVisualEffectView *_subtitleContainer;
    _Bool _isListening;
    unsigned long long module;
    id <HACCContentModuleDelegate> delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    HACCLiveListenLevelGroup *_levelGroup;
}

@property(nonatomic) _Bool isListening; // @synthesize isListening=_isListening;
@property(retain, nonatomic) HACCLiveListenLevelGroup *levelGroup; // @synthesize levelGroup=_levelGroup;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HACCContentModuleDelegate> delegate; // @synthesize delegate;
@property(nonatomic) unsigned long long module; // @synthesize module;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)contentValue;
- (void)updateValue;
- (void)buttonTapped:(id)arg1;
- (void)liveListenAudioLevelDidChange:(double)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

