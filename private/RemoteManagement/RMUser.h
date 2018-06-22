//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RemoteManagement/RMUniquedManagedObject.h>

@class NSNumber, NSSet, NSString, RMManagementSettings, RMOrganization, RMUsageSettings;

@interface RMUser : RMUniquedManagedObject
{
}

+ (id)shouldRequestMoreTimeForLocalUserWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchRequestForUsersBelongingToOrganizationWithIdentifier:(id)arg1 altID:(id)arg2;
+ (id)fetchRequestForUsersBelongingToOrganizationWithIdentifier:(id)arg1 userDSID:(id)arg2;
+ (id)fetchRequestForMeInOrganizationWithIdentifier:(id)arg1;
+ (id)fetchRequestForManagedUsersBelongingToOrganizationWithIdentifier:(id)arg1;
+ (id)fetchRequestForUsersBelongingToOrganizationWithIdentifier:(id)arg1;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSSet *aggregateAppUsages; // @dynamic aggregateAppUsages;
@property(retain, nonatomic) NSSet *aggregateCategoryUsages; // @dynamic aggregateCategoryUsages;
@property(retain, nonatomic) NSSet *aggregateScreenUsages; // @dynamic aggregateScreenUsages;
@property(retain, nonatomic) NSSet *aggregateWebUsages; // @dynamic aggregateWebUsages;
@property(retain, nonatomic) NSSet *allUsages; // @dynamic allUsages;
@property(copy, nonatomic) NSString *altID; // @dynamic altID;
@property(retain, nonatomic) NSSet *appliedActivations; // @dynamic appliedActivations;
@property(retain, nonatomic) NSSet *askForTimeRequests; // @dynamic askForTimeRequests;
@property(retain, nonatomic) NSSet *askForTimeResponses; // @dynamic askForTimeResponses;
@property(copy, nonatomic) NSNumber *dsid; // @dynamic dsid;
@property(nonatomic) _Bool isMe; // @dynamic isMe;
@property(nonatomic) _Bool isOrganizer; // @dynamic isOrganizer;
@property(retain, nonatomic) RMManagementSettings *managementSettings; // @dynamic managementSettings;
@property(copy, nonatomic) NSString *memberType; // @dynamic memberType;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) RMOrganization *organization; // @dynamic organization;
@property(nonatomic) short role; // @dynamic role;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;
@property(retain, nonatomic) RMUsageSettings *usageSettings; // @dynamic usageSettings;
@property(retain, nonatomic) NSSet *userDevicePairs; // @dynamic userDevicePairs;

@end

