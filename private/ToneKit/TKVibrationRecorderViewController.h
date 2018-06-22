//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "PSStateRestoration.h"

@class NSString, TKVibrationRecorderContentViewController;

@interface TKVibrationRecorderViewController : UINavigationController <PSStateRestoration>
{
    TKVibrationRecorderContentViewController *_vibrationRecorderContentViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TKVibrationRecorderViewControllerDelegate> vibrationRecorderViewControllerDelegate;
- (void)dealloc;
- (id)initWithVibratorController:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

