//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObservation.h>

@class NSObject<NSObservable>, NSObject<NSObserver>;

__attribute__((visibility("hidden")))
@interface _NSConcreteObservation : NSObservation
{
    NSObject<NSObservable> *_LHSobservable;
    NSObject<NSObserver> *_RHSobserver;
    id _observers[4];
}

- (void)dealloc;
- (void)_receiveBox:(id)arg1;
- (void)finishObserving;
- (void)remove;
- (void *)_observerStorageOfSize:(unsigned long long)arg1;
- (id)initWithObservable:(id)arg1 observer:(id)arg2;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;

@end

