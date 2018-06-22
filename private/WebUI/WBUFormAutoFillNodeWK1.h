//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSFormAutoFillNode.h"

@class DOMNode, NSString;

@interface WBUFormAutoFillNodeWK1 : NSObject <WBSFormAutoFillNode>
{
    DOMNode *_domNode;
}

+ (id)autoFillNodeWithDOMNode:(id)arg1;
@property(readonly, nonatomic) DOMNode *domNode; // @synthesize domNode=_domNode;
- (void).cxx_destruct;
- (long long)htmlInputElementLastAutoFillButtonType;
- (long long)htmlInputElementAutoFillButtonType;
- (void)setHTMLInputElementAutoFilledWithAutomaticStrongPassword:(_Bool)arg1 inputElementIsPasswordConfirmation:(_Bool)arg2;
- (_Bool)isHTMLTextAreaElementUserEdited;
- (_Bool)isHTMLInputElementUserEdited;
- (void)setHTMLInputElementAutofilled:(_Bool)arg1;
- (struct CGRect)elementBounds;
- (id)initWithDOMNode:(id)arg1;
- (id)initWithJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

