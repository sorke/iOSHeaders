//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _PASDeviceInfo : NSObject
{
    int _batterySaverModeToken;
}

+ (_Bool)shouldIncludePredictionLogs;
+ (_Bool)isDNUEnabled;
+ (_Bool)isAudioAccessory;
+ (_Bool)isBetaBuild;
+ (_Bool)isInternalBuild;
+ (_Bool)isDemoModeEnabled;
+ (_Bool)isBatterySaverEnabled;
+ (_Bool)isLowEndHardware;
+ (id)sharedInstance;
- (void)dealloc;
- (id)init;

@end

