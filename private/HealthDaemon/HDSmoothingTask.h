//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKWorkoutRoute, NSArray;

@interface HDSmoothingTask : NSObject
{
    HKWorkoutRoute *_sample;
    NSArray *_unsmoothedLocations;
    CDUnknownBlockType _completionHandler;
    unsigned long long _smoothingAttempts;
}

@property unsigned long long smoothingAttempts; // @synthesize smoothingAttempts=_smoothingAttempts;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSArray *unsmoothedLocations; // @synthesize unsmoothedLocations=_unsmoothedLocations;
@property(retain, nonatomic) HKWorkoutRoute *sample; // @synthesize sample=_sample;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRoute:(id)arg1;

@end

