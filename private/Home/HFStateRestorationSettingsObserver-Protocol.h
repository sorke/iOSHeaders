//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HFStateRestorationSettings, NSUUID;

@protocol HFStateRestorationSettingsObserver <NSObject>

@optional
- (void)stateRestorationSettings:(HFStateRestorationSettings *)arg1 selectedHomeIdentifierDidUpdateExternally:(NSUUID *)arg2;
@end

