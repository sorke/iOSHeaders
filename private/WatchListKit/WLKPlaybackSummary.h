//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSNumber, NSString;

@interface WLKPlaybackSummary : NSObject <NSSecureCoding>
{
    _Bool _isAlwaysLive;
    _Bool _isTimerDerived;
    NSString *_bundleID;
    NSDate *_timestamp;
    NSDate *_currentPlaybackDate;
    NSNumber *_duration;
    NSNumber *_elapsedTime;
    NSString *_accountID;
    NSString *_externalProfileID;
    NSString *_contentID;
    NSString *_serviceID;
    long long _playbackState;
    NSNumber *_playbackRate;
    long long _completionState;
    long long _playbackType;
}

+ (_Bool)supportsSecureCoding;
+ (id)debugStringForCompletionState:(long long)arg1;
+ (long long)completionStateForDuration:(double)arg1 elapsedTime:(double)arg2;
+ (double)playedThresholdTimeForDuration:(double)arg1;
@property(readonly, nonatomic) _Bool isTimerDerived; // @synthesize isTimerDerived=_isTimerDerived;
@property(readonly, nonatomic) long long playbackType; // @synthesize playbackType=_playbackType;
@property(readonly, nonatomic) _Bool isAlwaysLive; // @synthesize isAlwaysLive=_isAlwaysLive;
@property(readonly, nonatomic) long long completionState; // @synthesize completionState=_completionState;
@property(readonly, nonatomic) NSNumber *playbackRate; // @synthesize playbackRate=_playbackRate;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(readonly, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property(readonly, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(readonly, nonatomic) NSString *externalProfileID; // @synthesize externalProfileID=_externalProfileID;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSNumber *elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *currentPlaybackDate; // @synthesize currentPlaybackDate=_currentPlaybackDate;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (_Bool)_isValid;
- (_Bool)_validate:(id)arg1 identifier:(id)arg2 expectedClass:(Class)arg3;
- (_Bool)_compareOptional:(id)arg1 with:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)JSONRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (_Bool)isLiveType;
- (unsigned long long)hash;
- (_Bool)isSameContent:(id)arg1;
- (_Bool)isEqualToSummaryExcludingTimestamp:(id)arg1;
- (_Bool)isEqualToSummaryExcludingCursor:(id)arg1;
- (_Bool)isEqualToSummary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBundleId:(id)arg1 timestamp:(id)arg2 duration:(id)arg3 elapsedTime:(id)arg4 externalProfileID:(id)arg5 contentID:(id)arg6 accountID:(id)arg7 playbackState:(long long)arg8 playbackRate:(id)arg9 completionState:(long long)arg10 isAlwaysLive:(_Bool)arg11 serviceID:(id)arg12 currentPlaybackDate:(id)arg13 playbackType:(long long)arg14 isTimerDerived:(_Bool)arg15;
- (id)initWithMediaRemoteDictionary:(id)arg1 bundleID:(id)arg2 accountID:(id)arg3;
- (id)elapsedTimeSummaryWithPlaybackState:(long long)arg1 timerDerived:(_Bool)arg2;

@end

