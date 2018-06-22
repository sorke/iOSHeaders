//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _CDSpotlightItemUtils : NSObject
{
}

+ (_Bool)shouldFilterEmailAddress:(id)arg1;
+ (id)querySpotlightItemsWithStartDate:(id)arg1 endDate:(id)arg2 getMail:(_Bool)arg3 getMessages:(_Bool)arg4;
+ (id)collectionEventForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)contextDictionaryForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)knowledgeEventsForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (_Bool)isLocationBasedItem:(id)arg1;
+ (id)_locationMetadataForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)_metadataForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)interactionForSearchableItem:(id)arg1;
+ (id)policies;
+ (id)_contactsForEmailAddresses:(id)arg1 names:(id)arg2;
+ (id)_contactsForPersons:(id)arg1;
+ (id)interactionUUIDForSearchableItemWithUID:(id)arg1 bundleID:(id)arg2;
+ (long long)getInteractionMechanismForContentUTI:(id)arg1 typeTree:(id)arg2;
+ (_Bool)utType:(id)arg1 conformsTo:(id)arg2;
+ (id)utiConformCache;
+ (id)mechanismUtiMap;
+ (_Bool)contentTypeTree:(id)arg1 conformsToUTITypes:(id)arg2;
+ (_Bool)contentTypeTree:(id)arg1 conformsToUTIType:(id)arg2;
+ (_Bool)uncachedUtType:(id)arg1 conformsTo:(id)arg2;
+ (id)safariUTIs;
+ (id)expectedUTIsForMechanism:(long long)arg1;
+ (id)expectedSupportedUTIs;

@end

