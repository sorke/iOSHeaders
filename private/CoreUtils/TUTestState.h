//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TUTestState : NSObject
{
    NSMutableDictionary *_objects;
    int _signalCount;
}

- (void).cxx_destruct;
- (int)waitWithTimeout:(double)arg1;
- (void)signal;
- (void)incrementIntegerForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)description;

@end

