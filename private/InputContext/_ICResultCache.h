//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate;

@interface _ICResultCache : NSObject
{
    NSArray *_cachedResults;
    NSDate *_start;
    double _ttlInSeconds;
}

- (void).cxx_destruct;
- (id)searchWithValue:(id)arg1;
- (_Bool)fuzzyMatchItem:(id)arg1 withValue:(id)arg2;
- (id)searchWithTrigger:(id)arg1;
- (void)clear;
- (void)addResults:(id)arg1;
- (id)initWithTTL:(double)arg1;

@end

