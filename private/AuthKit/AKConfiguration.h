//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AKConfiguration : NSObject
{
    NSMutableDictionary *_cachedSettings;
    int _notificationToken;
    NSObject<OS_dispatch_queue> *_settingsQueue;
}

+ (id)sharedConfiguration;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *lastCheckInSuccessDate;
@property(copy, nonatomic) NSDate *lastCheckInAttemptDate;
@property(nonatomic) long long shouldAddHSA2CreateHeader;
@property(nonatomic) long long shouldSuppressHSA2Suggestions;
@property(nonatomic) long long shouldDisablePiggybacking;
@property(nonatomic) long long shouldFakeAuthSuccess;
@property(nonatomic) long long shouldDisablePETs;
- (void)setConfigurationValue:(id)arg1 forKey:(id)arg2;
- (id)configurationValueForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end
