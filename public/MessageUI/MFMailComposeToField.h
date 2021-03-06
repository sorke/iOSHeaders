//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MessageUI/MFComposeRecipientTextView.h>

@class MFComposeSMIMELockButton;

@interface MFMailComposeToField : MFComposeRecipientTextView
{
    MFComposeSMIMELockButton *_smimeButton;
    _Bool _wantsEncryption;
    _Bool _canEncrypt;
    _Bool _smimeButtonVisible;
    _Bool _smimeButtonEnabled;
    id <MFMailComposeToFieldDelegate> _toFieldDelegate;
}

@property(nonatomic) _Bool smimeButtonEnabled; // @synthesize smimeButtonEnabled=_smimeButtonEnabled;
@property(nonatomic) _Bool smimeButtonVisible; // @synthesize smimeButtonVisible=_smimeButtonVisible;
@property(nonatomic) id <MFMailComposeToFieldDelegate> toFieldDelegate; // @synthesize toFieldDelegate=_toFieldDelegate;
- (id)_textContainerExclusionPathsWithAddButton:(_Bool)arg1;
- (void)_setSMIMEButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setWantsEncryption:(_Bool)arg1 canEncrypt:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setExpanded:(_Bool)arg1;
- (void)_tappedSMIMEButton:(id)arg1;
@property(readonly, nonatomic) MFComposeSMIMELockButton *SMIMEButton;
- (void)layoutSubviews;
- (void)dealloc;

@end

