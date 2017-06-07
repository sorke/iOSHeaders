//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSSearchResultsCell.h>

@class PSSpecifier, PSSpecifierAction, UISwitch;

@interface PSSearchResultsSwitchCell : PSSearchResultsCell
{
    UISwitch *_switch;
    PSSpecifierAction *_action;
    PSSpecifier *_specifier;
}

@property(retain, nonatomic) PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property(copy, nonatomic) PSSpecifierAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)reloadValue:(_Bool)arg1;
- (void)_switchValueChanged:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
