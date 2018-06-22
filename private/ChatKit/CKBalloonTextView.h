//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "NSLayoutManagerDelegate.h"

@class NSAttributedString, NSString;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate>
{
    NSAttributedString *_attributedText;
    id <CKBalloonTextViewInteractionDelegate> _interactionDelegate;
}

+ (id)textView;
@property(nonatomic) __weak id <CKBalloonTextViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (void)_interactionStoppedFromPreviewItemController:(id)arg1;
- (void)_interactionStartedFromPreviewItemController:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2 isSingleLine:(_Bool *)arg3;
- (id)_textWithHyphenationAppliedForAttributedText:(id)arg1;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)didMoveToWindow;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

