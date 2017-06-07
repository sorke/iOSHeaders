//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/ADPrivacyViewControllerDelegate-Protocol.h>

@class ADPrivacyViewController, NSString, UITableViewCell, UIView;

@interface PSUIAdSupportController : PSListController <ADPrivacyViewControllerDelegate>
{
    _Bool _limitAdTrackingURLIsReachable;
    id _restrictionsChangedObserver;
    id _effectiveSettingsChangedObserver;
    UITableViewCell *_limitAdTrackingCell;
    UIView *_originalAccessoryView;
    long long _optInStatus;
    id _reachabilityAsObject;
    ADPrivacyViewController *_adPrivacyController;
}

@property(retain, nonatomic) ADPrivacyViewController *adPrivacyController; // @synthesize adPrivacyController=_adPrivacyController;
@property(retain, nonatomic) id reachabilityAsObject; // @synthesize reachabilityAsObject=_reachabilityAsObject;
@property(nonatomic) long long optInStatus; // @synthesize optInStatus=_optInStatus;
@property(nonatomic) _Bool limitAdTrackingURLIsReachable; // @synthesize limitAdTrackingURLIsReachable=_limitAdTrackingURLIsReachable;
@property(retain, nonatomic) UIView *originalAccessoryView; // @synthesize originalAccessoryView=_originalAccessoryView;
@property(retain, nonatomic) UITableViewCell *limitAdTrackingCell; // @synthesize limitAdTrackingCell=_limitAdTrackingCell;
@property(retain, nonatomic) id effectiveSettingsChangedObserver; // @synthesize effectiveSettingsChangedObserver=_effectiveSettingsChangedObserver;
@property(retain, nonatomic) id restrictionsChangedObserver; // @synthesize restrictionsChangedObserver=_restrictionsChangedObserver;
- (void).cxx_destruct;
- (void)adPrivacyViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)adPrivacyViewControllerDidDismiss:(id)arg1;
- (void)adPrivacyViewControllerDidLoad:(id)arg1;
- (void)userDidTapAdPreferences:(id)arg1;
- (void)userDidTapLearnMoreLink:(id)arg1;
- (void)userDidTapDoneButton:(id)arg1;
- (void)setLimitAdTrackingEnabled:(id)arg1 specifier:(id)arg2;
- (id)limitAdTrackingEnabled:(id)arg1;
- (_Bool)canChangeLimitAdTracking;
- (void)resetAdID;
@property(readonly, nonatomic) struct __SCNetworkReachability *reachability;
- (void)reloadLimitAdTrackingSpecifier;
- (void)refreshOptInStatus;
- (id)specifiers;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
