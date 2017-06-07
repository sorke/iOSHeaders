//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKEffectPickerView.h>

@interface CKEffectPickerLargeTextView : CKEffectPickerView
{
    _Bool _finishedInitializing;
}

@property(nonatomic) _Bool finishedInitializing; // @synthesize finishedInitializing=_finishedInitializing;
- (void)effectTypeDidChange:(id)arg1;
- (_Bool)shouldAnimatePreviousLabelForCancel:(id)arg1;
- (double)offsetYForLabelAtIndex:(long long)arg1 withInitialY:(double)arg2;
- (void)_touchUpInsideDotButton:(id)arg1;
- (void)cancelImpactSelection;
- (struct CGRect)_updateBalloonViewOrigin:(struct CGRect)arg1 forButtonFrame:(struct CGRect)arg2;
- (void)_updateRoundedContainerView;
- (double)marginBetweenPickerDotButtons;
- (void)setCloseButtonYPosition:(double)arg1;
- (void)addEffect:(id)arg1 withDescriptiveText:(id)arg2 withIdentifier:(id)arg3;
- (void)activateTextSizeDependentConstraintsForSendButtonFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 sendButtonFrame:(struct CGRect)arg2 balloonViewOrigin:(struct CGPoint)arg3 composition:(id)arg4 color:(BOOL)arg5;

@end
