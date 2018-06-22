//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObservationSource.h>

@class NSISEngine, NSISLinearExpression, NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface _NSISLinearExpressionObservable : NSObservationSource
{
    NSNumber *_lastValue;
    NSISLinearExpression *_expression;
    NSISEngine *_associatedEngine;
    NSMutableArray *_variableObservations;
    id _changeTransactionObservation;
    _Bool _valueIsDirtied;
}

+ (id)observableForExpression:(id)arg1 inEngine:(id)arg2;
- (void)emitValueIfNeeded;
- (void)receiveObservedValue:(id)arg1 fromVariable:(id)arg2;
- (id)addObserver:(id)arg1;
- (id)addObserverBlock:(CDUnknownBlockType)arg1;
- (_Bool)_overrideUseFastBlockObservers;
- (void)_lazilyObserveVariablesIfNeeded;
- (void)dealloc;
- (id)initWithExpression:(id)arg1 inEngine:(id)arg2;

@end

