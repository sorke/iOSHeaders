//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NAObserverProxy : NSObject
{
    _Bool _valid;
    id _weakObserver;
}

@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) __weak id weakObserver; // @synthesize weakObserver=_weakObserver;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithWeakObserver:(id)arg1;

@end

