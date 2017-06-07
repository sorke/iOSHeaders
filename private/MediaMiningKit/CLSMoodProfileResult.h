//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLSMoodProfileResult : NSObject
{
    NSString *_mood;
    unsigned long long _moodID;
    double _moodConfidence;
}

+ (id)defaultResult;
+ (id)resultForInvestigation:(id)arg1;
@property(readonly, nonatomic) double moodConfidence; // @synthesize moodConfidence=_moodConfidence;
@property(readonly, nonatomic) unsigned long long moodID; // @synthesize moodID=_moodID;
@property(retain, nonatomic) NSString *mood; // @synthesize mood=_mood;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
