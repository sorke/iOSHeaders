//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import "INSearchForPhotosIntentExport.h"

@class CLPlacemark, INDateComponentsRange, NSArray, NSString;

@interface INSearchForPhotosIntent : INIntent <INSearchForPhotosIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
@property(copy, nonatomic) NSString *memoryName;
@property(copy, nonatomic) NSArray *geographicalFeatures;
@property(readonly, nonatomic) long long geographicalFeaturesOperator;
@property(copy, nonatomic) NSArray *activities;
@property(readonly, nonatomic) long long activitiesOperator;
@property(copy, nonatomic) NSArray *places;
@property(readonly, nonatomic) long long placesOperator;
@property(copy, nonatomic) NSArray *events;
@property(readonly, nonatomic) long long eventsOperator;
- (void)setPeopleInPhoto:(id)arg1;
@property(readonly, nonatomic) long long peopleInPhotoOperator;
@property(readonly, copy, nonatomic) NSArray *peopleInPhoto;
- (void)setExcludedAttributes:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long excludedAttributes;
- (void)setIncludedAttributes:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long includedAttributes;
- (void)setSearchTerms:(id)arg1;
@property(readonly, nonatomic) long long searchTermsOperator;
@property(readonly, copy, nonatomic) NSArray *searchTerms;
- (void)setAlbumName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *albumName;
- (void)setLocationCreated:(id)arg1;
@property(readonly, copy, nonatomic) CLPlacemark *locationCreated;
- (void)setDateCreated:(id)arg1;
@property(readonly, copy, nonatomic) INDateComponentsRange *dateCreated;
- (id)initWithDateCreated:(id)arg1 locationCreated:(id)arg2 albumName:(id)arg3 searchTerms:(id)arg4 includedAttributes:(unsigned long long)arg5 excludedAttributes:(unsigned long long)arg6 peopleInPhoto:(id)arg7;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

