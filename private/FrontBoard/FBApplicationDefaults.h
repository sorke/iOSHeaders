//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBApplicationDefaults : NSObject
{
    long long _interfaceOrientation;
    _Bool _canChangeBackgroundStyle;
    long long _backgroundStyle;
    long long _statusBarStyle;
    _Bool _statusBarHidden;
    _Bool _statusBarHiddenWhenVerticallyCompact;
    NSString *_launchImageFile;
}

@property(copy, nonatomic) NSString *launchImageFile; // @synthesize launchImageFile=_launchImageFile;
@property(nonatomic) _Bool statusBarHiddenWhenVerticallyCompact; // @synthesize statusBarHiddenWhenVerticallyCompact=_statusBarHiddenWhenVerticallyCompact;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) _Bool canChangeBackgroundStyle; // @synthesize canChangeBackgroundStyle=_canChangeBackgroundStyle;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (void).cxx_destruct;
- (id)init;

@end

