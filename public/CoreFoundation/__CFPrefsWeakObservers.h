//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMutableCopying.h"

__attribute__((visibility("hidden")))
@interface __CFPrefsWeakObservers : NSObject <NSMutableCopying>
{
    struct __cfobservers_t values;
    unsigned long long count;
}

- (id)debugDescription;
- (unsigned long long)approximateCount;
- (unsigned long long)borrowObjects:(id *)arg1 count:(unsigned long long)arg2;
- (unsigned char)removeObject:(id)arg1;
- (unsigned char)addObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

