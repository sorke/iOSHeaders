//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NSObserverList : NSObject
{
    id _owner;
    id _observers;
    // Error parsing type: AI, name: _observerCount
    struct os_unfair_lock_s _observersLock;
}

+ (void)destroyObserverListForObject:(id)arg1;
+ (id)_copyObserversOfObject:(id)arg1 creatingIfAbsent:(_Bool)arg2;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (void)_receiveBox:(id)arg1;
- (void)removeObservation:(id)arg1;
- (void)removeBlockSink:(CDUnknownBlockType)arg1 observation:(id)arg2;
- (void)removeObserver:(id)arg1 observation:(id)arg2;
- (void)finishObserving;
- (id)addObserver:(id)arg1 toObservableObject:(id)arg2;
- (id)addBlockSink:(CDUnknownBlockType)arg1 toObservableObject:(id)arg2 forTag:(int)arg3;
- (void)_directAddObserver:(id)arg1;
- (id)init;

@end

