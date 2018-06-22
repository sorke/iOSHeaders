//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DOCItemQueryObserver.h"

@class DOCSpotlightCollection, NSFileProviderEnumerationProperties, NSString;

@interface DOCQueryObservation : NSObject <DOCItemQueryObserver>
{
    NSFileProviderEnumerationProperties *_properties;
    DOCSpotlightCollection *_collection;
    unsigned long long _maximumNumberOfItems;
}

@property(nonatomic) unsigned long long maximumNumberOfItems; // @synthesize maximumNumberOfItems=_maximumNumberOfItems;
@property __weak DOCSpotlightCollection *collection; // @synthesize collection=_collection;
@property(retain) NSFileProviderEnumerationProperties *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (unsigned long long)maximumNumberOfItemsForCollector:(id)arg1;
- (_Bool)collector:(id)arg1 itemIsSufficient:(id)arg2;
- (void)collector:(id)arg1 didEncounterError:(id)arg2;
- (void)collector:(id)arg1 didUpdateItemOrigin:(unsigned long long)arg2;
- (_Bool)collector:(id)arg1 canRemoveItemIDs:(id)arg2;
- (void)collector:(id)arg1 didRemoveItemIDs:(id)arg2;
- (void)collector:(id)arg1 didUpdateItems:(id)arg2;
- (void)collector:(id)arg1 didGatherItems:(id)arg2;
- (id)itemPredicateForCollector:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithProperties:(id)arg1 collection:(id)arg2 maximumNumberOfItems:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

