//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaMiningKit/CLSDBCache.h>

@class NSPredicate;

@interface CLSPublicEventCache : CLSDBCache
{
    NSPredicate *_publicEventUpdateTimestamPredicate;
}

@property(readonly, nonatomic) NSPredicate *publicEventUpdateTimestamPredicate; // @synthesize publicEventUpdateTimestamPredicate=_publicEventUpdateTimestamPredicate;
- (void).cxx_destruct;
- (id)_deserializeLocalizedSubcategoriesData:(id)arg1;
- (id)_serializeLocalizedSubcategories:(id)arg1;
- (unsigned long long)numberOftimeLocationTuplesForTimeLocationTuple:(id)arg1;
- (_Bool)hasTimeLocationTuple:(id)arg1;
- (id)publicEventFromManagedObject:(id)arg1;
- (id)publicEventsForTimeLocationTuple:(id)arg1;
- (id)publicEventsForMuid:(unsigned long long)arg1;
- (void)_updateManagedEvent:(id)arg1 withEvent:(id)arg2 inContext:(id)arg3;
- (void)updatePublicEvents:(id)arg1;
- (_Bool)insertBatchesOfPublicEventsByTimeLocationIdentifier:(id)arg1 forTimeLocationTuples:(id)arg2;
- (id)predicateForTimeLocationTuple:(id)arg1;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1;
- (id)dataModelName;
- (id)init;

@end

