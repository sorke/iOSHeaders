//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreML/MLProbabilityDictionary.h>

@interface MLStringProbabilityDictionary : MLProbabilityDictionary
{
    map_f36cdd6d _mapStrLabelToIndex;
}

+ (id)probabilityDictionaryForStringLabels:(id)arg1;
@property(nonatomic) map_f36cdd6d mapStrLabelToIndex; // @synthesize mapStrLabelToIndex=_mapStrLabelToIndex;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copy;
- (id)keyEnumerator;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (id)initWithStrLabels:(id)arg1;

@end

