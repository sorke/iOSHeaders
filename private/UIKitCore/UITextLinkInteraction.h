//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UITextInteraction.h>

__attribute__((visibility("hidden")))
@interface UITextLinkInteraction : UITextInteraction
{
    _Bool _isTryingToHighlightLink;
}

- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (void)cancelInteractionWithLink;
- (_Bool)tapOnLinkWithGesture:(id)arg1;
- (void)longDelayRecognizer:(id)arg1;
- (void)linkTapRecognizer:(id)arg1;
- (void)smallDelayRecognizer:(id)arg1;
- (void)_resetForLink;
- (id)init;

@end

