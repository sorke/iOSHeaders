//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface PPLabelStrengthSets : NSObject
{
    NSSet *_weak;
    NSSet *_strong;
}

+ (id)labelStrengthSetsWithWeakSet:(id)arg1 strongSet:(id)arg2;
@property(readonly, nonatomic) NSSet *strong; // @synthesize strong=_strong;
@property(readonly, nonatomic) NSSet *weak; // @synthesize weak=_weak;
- (void).cxx_destruct;
- (id)initWithWeakSet:(id)arg1 strongSet:(id)arg2;

@end

