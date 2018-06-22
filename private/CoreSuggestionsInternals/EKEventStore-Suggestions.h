//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EKEventStore.h"

@interface EKEventStore (Suggestions)
+ (id)newDefaultStore;
+ (id)defaultStore;
- (double)eventsPerWeekAroundDate:(id)arg1;
- (void)bumpTimeToLiveForZeroKeywordNLEventOnInteraction:(id)arg1;
- (id)fetchEKEventsForPseudoNLEvent:(id)arg1 entity:(id)arg2;
- (id)fetchEKEventsForPseudoEventBySimilarTitleAndStartTime:(id)arg1;
- (id)eventsWithSameAlternativeOpaqueKeyAsPseudoEvent:(id)arg1 harvestStore:(id)arg2;
- (id)eventsWithSameOpaqueKeyAsPseudoEvent:(id)arg1 harvestStore:(id)arg2;
- (id)eventWithExternalID:(id)arg1;
- (id)eventsWithSameAlternativeOpaqueKeyAsDuplicateKey:(id)arg1 harvestStore:(id)arg2;
- (id)eventsWithSameOpaqueKeyAsDuplicateKey:(id)arg1 extraKey:(id)arg2 harvestStore:(id)arg3;
- (id)eventsWithSameAlternativeOpaqueKeyAsStorageEvent:(id)arg1 harvestStore:(id)arg2;
- (id)eventsWithSameOpaqueKeyAsStorageEvent:(id)arg1 harvestStore:(id)arg2;
- (id)confirmedEKEventForSGEvent:(id)arg1;
@end

