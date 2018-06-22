//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNChangeHistoryAnchor, CNChangeHistoryFetchRequest, CNChangeHistoryResult, CNContact, CNContactFetchRequest, CNContactStore, CNContactsEnvironment, CNContainer, CNManagedConfiguration, CNObservable, CNPolicy, CNSaveRequest, NSArray, NSData, NSDictionary, NSNumber, NSPredicate, NSString, NSURL;

@protocol CNDataMapper <NSObject>
- (NSString *)defaultContainerIdentifier;
- (NSArray *)subgroupsOfGroupWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSArray *)groupsMatchingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (NSArray *)accountsMatchingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (CNPolicy *)policyForContainerWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSArray *)serverSearchContainersMatchingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (NSArray *)containersMatchingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (_Bool)executeSaveRequest:(CNSaveRequest *)arg1 response:(id *)arg2 error:(id *)arg3;
- (_Bool)executeSaveRequest:(CNSaveRequest *)arg1 error:(id *)arg2;
- (NSArray *)meContactIdentifiers:(id *)arg1;
- (CNObservable *)contactObservableForFetchRequest:(CNContactFetchRequest *)arg1;
- (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (id)initWithContactsEnvironment:(CNContactsEnvironment *)arg1 managedConfiguration:(CNManagedConfiguration *)arg2;

@optional
- (NSArray *)_smartGroupsMatchingPredicate:(NSPredicate *)arg1 contactStore:(CNContactStore *)arg2;
- (NSArray *)_smartGroupsForAccountsWithIdentifiers:(NSArray *)arg1 contactStore:(CNContactStore *)arg2;
- (_Bool)_saveCustomPropertyValuesForRemoteRecords:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)_saveAddedCustomProperties:(NSArray *)arg1 deletedCustomProperties:(NSArray *)arg2 error:(id *)arg3;
- (NSURL *)_persistentStoreURLForRecordWithIdentifier:(NSString *)arg1;
- (NSArray *)_infosForAccountsWithIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (NSArray *)_groupsMatchingCoreDataPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (NSArray *)_customPropertyValuesForRecordWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (id)_createInfo;
- (NSArray *)_allCustomProperties;
- (_Bool)writeFavoritesPropertyListData:(NSData *)arg1 toPath:(NSString *)arg2 error:(id *)arg3;
- (NSArray *)favoritesEntryDictionariesAtPath:(NSString *)arg1 error:(id *)arg2;
- (_Bool)clearChangeHistoryForClientIdentifier:(NSString *)arg1 toChangeAnchor:(CNChangeHistoryAnchor *)arg2 error:(id *)arg3;
- (CNChangeHistoryResult *)changeHistoryWithFetchRequest:(CNChangeHistoryFetchRequest *)arg1 error:(id *)arg2;
- (_Bool)unregisterChangeHistoryClientIdentifier:(NSString *)arg1 error:(id *)arg2;
- (_Bool)registerChangeHistoryClientIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSString *)contactIdentifierWithMatchingDictionary:(NSDictionary *)arg1;
- (NSDictionary *)matchingDictionaryForContact:(CNContact *)arg1;
- (id <CNKeyDescriptor>)descriptorForRequiredKeysForMatchingDictionary;
- (NSDictionary *)userActivityUserInfoForContact:(CNContact *)arg1;
- (CNContact *)contactWithUserActivityUserInfo:(NSDictionary *)arg1 keysToFetch:(NSArray *)arg2;
- (NSArray *)usedLabelsForPropertyWithKey:(NSString *)arg1 error:(id *)arg2;
- (id <CNCancelable>)executeFetchRequest:(CNContactFetchRequest *)arg1 progressiveResults:(void (^)(NSArray *, NSDictionary *))arg2 completion:(void (^)(NSError *))arg3;
- (_Bool)setBestMeIfNeededForGivenName:(NSString *)arg1 familyName:(NSString *)arg2 email:(NSString *)arg3 error:(id *)arg4;
- (_Bool)setMeContact:(CNContact *)arg1 forContainer:(CNContainer *)arg2 error:(id *)arg3;
- (_Bool)setMeContact:(CNContact *)arg1 error:(id *)arg2;
- (NSArray *)groupsWithIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (void)setNotificationSource:(id)arg1;
- (NSNumber *)unifiedContactCountWithError:(id *)arg1;
- (NSString *)identifierWithError:(id *)arg1;
@end

