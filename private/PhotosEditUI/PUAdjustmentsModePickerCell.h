//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIImage, UILabel;

__attribute__((visibility("hidden")))
@interface PUAdjustmentsModePickerCell : UITableViewCell
{
    UIButton *_accessoryButton;
    UILabel *_displayLabel;
    UILabel *_displayValueLabel;
    NSArray *_accessoryButtonConstraints;
    NSArray *_displayValueLabelConstraints;
    NSLayoutConstraint *_standardLeadingConstraint;
    NSLayoutConstraint *_subLeadingConstraint;
    _Bool _isSubMode;
    NSString *_localizedModeName;
    UIImage *_modeIcon;
    NSString *_currentDisplayValue;
    long long _buttonType;
    CDUnknownBlockType _buttonAction;
}

+ (void)configureModePickerCellLabel:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType buttonAction; // @synthesize buttonAction=_buttonAction;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) _Bool isSubMode; // @synthesize isSubMode=_isSubMode;
@property(copy, nonatomic) NSString *currentDisplayValue; // @synthesize currentDisplayValue=_currentDisplayValue;
@property(retain, nonatomic) UIImage *modeIcon; // @synthesize modeIcon=_modeIcon;
@property(copy, nonatomic) NSString *localizedModeName; // @synthesize localizedModeName=_localizedModeName;
- (void).cxx_destruct;
- (void)_preferredContentSizeCategoryChanged;
- (void)_handleAccessoryButton:(id)arg1;
- (void)_updateDisplayValueLabel;
- (void)_updateDisplayLabel;
- (void)_updateButton;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

