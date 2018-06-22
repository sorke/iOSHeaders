//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_ICPredictionSourcing.h"

@class NSCondition, NSMutableArray, PPQuickTypeBroker;

@interface _ICPortraitPredictionSource : NSObject <_ICPredictionSourcing>
{
    NSMutableArray *_contacts;
    NSCondition *_ppBrokerLoadedCondition;
    PPQuickTypeBroker *_ppBroker;
}

@property(retain) PPQuickTypeBroker *ppBroker; // @synthesize ppBroker=_ppBroker;
- (void).cxx_destruct;
- (void)hibernate;
- (void)warmUp;
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (id)_quickTypeQueryWithTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 errorWithExplanations:(id *)arg5;
- (id)_quickTypeQueryWithQuery:(id)arg1 limit:(unsigned long long)arg2 timeoutInMilliseconds:(unsigned long long)arg3;
- (_Bool)_populateError:(id *)arg1 withExplanations:(id)arg2;
- (id)getPPBroker;
- (id)init;

@end

