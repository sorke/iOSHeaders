//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FPSpotlightCollection.h"

@class DOCQueryObservation, NSArray, NSString;

@interface DOCSpotlightCollection : FPSpotlightCollection
{
    DOCQueryObservation *_observation;
    unsigned long long _itemOrigin;
    NSString *_enumeratedItemIdentifier;
    NSArray *_fileTypes;
}

@property(retain, nonatomic) NSArray *fileTypes; // @synthesize fileTypes=_fileTypes;
@property(retain, nonatomic) NSString *enumeratedItemIdentifier; // @synthesize enumeratedItemIdentifier=_enumeratedItemIdentifier;
@property(nonatomic) unsigned long long itemOrigin; // @synthesize itemOrigin=_itemOrigin;
@property(retain, nonatomic) DOCQueryObservation *observation; // @synthesize observation=_observation;
- (void).cxx_destruct;
- (void)enumerationWasResumed;
- (void)userSearchStringDidChange:(id)arg1;
- (void)stoppingObservation;
- (void)_unregister;
- (void)startingObservationWithEnumerationProperties:(id)arg1;
- (void)startObservingWithEnumerationProperties:(id)arg1;
- (void)startObserving;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 fileTypes:(id)arg2;

@end

