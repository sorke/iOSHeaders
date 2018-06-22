//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSTableCell.h"

@class CALayer, PKPaymentApplication, PKPaymentPass, UIActivityIndicatorView, UIControl, UILabel, UIView;

@interface PKPaymentPassTableCell : PSTableCell
{
    PKPaymentApplication *_paymentApplication;
    long long _settingsContext;
    UIView *_cardSnapshotView;
    CALayer *_cardSnapshotMask;
    _Bool _snapshotLoaded;
    UIActivityIndicatorView *_spinner;
    _Bool _showState;
    _Bool _showSubTitle;
    _Bool _showAddButton;
    PKPaymentPass *_pass;
    id <PKPaymentPassTableCellDelegate> _delegate;
    UILabel *_mainLabel;
    UILabel *_subTextLabel;
    UIControl *_actionButton;
}

+ (double)heightForCellWithMinimum:(double)arg1 hasSubTitle:(_Bool)arg2;
+ (id)subTitleFont;
+ (id)titleFont;
@property(readonly, nonatomic) UIControl *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UILabel *subTextLabel; // @synthesize subTextLabel=_subTextLabel;
@property(readonly, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(nonatomic) id <PKPaymentPassTableCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showAddButton; // @synthesize showAddButton=_showAddButton;
@property(nonatomic) _Bool showSubTitle; // @synthesize showSubTitle=_showSubTitle;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)setTransitProperties:(id)arg1;
- (void)disableAddButton;
- (void)showActivitySpinner:(_Bool)arg1;
- (void)_addButtonPressed:(id)arg1;
- (void)_verifyButtonPressed:(id)arg1;
- (id)_stringForPassState:(unsigned long long)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end

