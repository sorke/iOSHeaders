//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKPassFooterContentView.h>

@class PKContinuousButton, PKGlyphView, PKPass, UILabel;

@interface PKPassPeerPaymentZeroBalanceView : PKPassFooterContentView
{
    PKGlyphView *_alertGlyph;
    UILabel *_alertLabel;
    PKContinuousButton *_addMoneyButton;
    PKPass *_pass;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)createSubviews;
- (void)addMoneyToCardTapped;
- (id)initWithPass:(id)arg1;

@end

