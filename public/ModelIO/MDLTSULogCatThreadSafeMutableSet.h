//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>;

@interface MDLTSULogCatThreadSafeMutableSet : NSObject
{
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_logCatQueue;
}

- (void).cxx_destruct;
- (id)description;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)immutableSet;
- (id)allObjects;
- (unsigned long long)count;
- (_Bool)containsObject:(id)arg1;
- (id)init;
- (id)initWithArray:(id)arg1;

@end

