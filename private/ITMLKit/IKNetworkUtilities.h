//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RadiosPreferencesDelegate.h"

@class NSString, RadiosPreferences;

@interface IKNetworkUtilities : NSObject <RadiosPreferencesDelegate>
{
    id _isNetworkTypeChangedToken;
    id _networkReachabilityChangedToken;
    RadiosPreferences *_radioPrefs;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_notifyObservers;
- (void)airplaneModeChanged;
@property(readonly, nonatomic) double lastNetworkChangedTime;
@property(readonly, nonatomic) NSString *networkType;
@property(readonly, nonatomic, getter=isAirplaneModeEnabled) _Bool airplaneModeEnabled;
@property(readonly, nonatomic, getter=isNetworkReachable) _Bool networkReachable;
- (void)dealloc;
- (id)init;

@end

