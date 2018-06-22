//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MSConversationDelegate.h"
#import "MSMessagesAppTranscriptPresentation.h"

@class MSConversation, NSString;

@interface MSMessagesAppViewController : UIViewController <MSConversationDelegate, MSMessagesAppTranscriptPresentation>
{
    _Bool _isReadyForDisplay;
    MSConversation *_activeConversation;
    id <_MSMessageComposeExtensionImplProtocol> _appContext;
}

@property(retain, nonatomic) id <_MSMessageComposeExtensionImplProtocol> appContext; // @synthesize appContext=_appContext;
@property(nonatomic) _Bool isReadyForDisplay; // @synthesize isReadyForDisplay=_isReadyForDisplay;
@property(retain, nonatomic) MSConversation *activeConversation; // @synthesize activeConversation=_activeConversation;
- (void).cxx_destruct;
- (void)_prepareForPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_didRemoveAssetArchiveWithIdentifier:(id)arg1;
- (_Bool)_handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2;
- (void)_validateMessageForSending:(id)arg1 conversation:(id)arg2 associatedText:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_validateMessageForSending:(id)arg1 conversation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) struct UIEdgeInsets _balloonMaskEdgeInsets;
- (void)contentDidLoad;
- (void)requestResize;
- (void)setReadyForDisplay;
- (_Bool)displaysAfterAppearance;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGSize)contentSizeThatFits:(struct CGSize)arg1;
- (void)updateSnapshotWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)didResignActiveWithConversation:(id)arg1;
- (void)willResignActiveWithConversation:(id)arg1;
- (void)didBecomeActiveWithConversation:(id)arg1;
- (void)willBecomeActiveWithConversation:(id)arg1;
@property(readonly, nonatomic) unsigned long long presentationContext;
@property(readonly, nonatomic) unsigned long long presentationStyle;
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)_conversation:(id)arg1 didSelectMessage:(id)arg2;
- (void)_conversation:(id)arg1 willSelectMessage:(id)arg2;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (void)dealloc;
- (void)didTransitionToPresentationStyle:(unsigned long long)arg1;
- (void)willTransitionToPresentationStyle:(unsigned long long)arg1;
- (void)didCancelSendingMessage:(id)arg1 conversation:(id)arg2;
- (void)didStartSendingMessage:(id)arg1 conversation:(id)arg2;
- (void)didReceiveMessage:(id)arg1 conversation:(id)arg2;
- (void)didSelectMessage:(id)arg1 conversation:(id)arg2;
- (void)willSelectMessage:(id)arg1 conversation:(id)arg2;
- (void)dismiss;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

