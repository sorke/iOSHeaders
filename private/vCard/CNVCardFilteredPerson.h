//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNVCardPerson.h"

@class CNVCardFilteredPersonScope, NSArray, NSData, NSDateComponents, NSDictionary, NSString;

@interface CNVCardFilteredPerson : NSObject <CNVCardPerson>
{
    id <CNVCardPerson> _person;
    CNVCardFilteredPersonScope *_scope;
}

+ (id)filteredPersonWithPerson:(id)arg1 scope:(id)arg2;
@property(readonly, nonatomic) CNVCardFilteredPersonScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) id <CNVCardPerson> person; // @synthesize person=_person;
- (void).cxx_destruct;
@property(readonly) NSArray *unknownProperties;
@property(readonly) NSString *preferredChannel;
@property(readonly) NSString *preferredApplePersonaIdentifier;
@property(readonly) NSString *preferredLikenessSource;
@property(readonly) NSString *phonemeData;
@property(readonly) NSString *uid;
@property(readonly) NSString *cardDAVUID;
@property(readonly) NSArray *namesOfParentGroups;
@property(readonly) NSString *note;
@property(readonly) NSArray *relatedNames;
@property(readonly) NSArray *otherDateComponents;
@property(readonly) NSDateComponents *alternateBirthdayComponents;
@property(readonly) NSDateComponents *birthdayComponents;
- (id)largeImageHashOfType:(id)arg1;
@property(readonly) NSData *imageData;
@property(readonly) NSData *largeImageData;
@property(readonly) NSDictionary *largeImageCropRects;
@property(readonly) NSDictionary *imageCropRects;
@property(readonly) NSArray *imageReferences;
- (id)filterItems:(id)arg1 property:(id)arg2;
@property(readonly) NSDictionary *activityAlerts;
@property(readonly) NSArray *calendarURIs;
@property(readonly) NSArray *urls;
@property(readonly) NSArray *instantMessagingAddresses;
@property(readonly) NSArray *socialProfiles;
@property(readonly) NSArray *postalAddresses;
@property(readonly) NSArray *phoneNumbers;
@property(readonly) NSArray *emailAddresses;
@property(readonly) int nameOrder;
@property(readonly) _Bool isCompany;
@property(readonly) _Bool isMe;
@property(readonly) NSString *jobTitle;
@property(readonly) NSString *department;
@property(readonly) NSString *companyName;
@property(readonly) NSString *phoneticOrganization;
@property(readonly) NSString *organization;
@property(readonly) NSString *pronunciationLastName;
@property(readonly) NSString *pronunciationFirstName;
@property(readonly) NSString *phoneticLastName;
@property(readonly) NSString *phoneticMiddleName;
@property(readonly) NSString *phoneticFirstName;
@property(readonly) NSString *maidenName;
@property(readonly) NSString *nickname;
@property(readonly) NSString *suffix;
@property(readonly) NSString *title;
@property(readonly) NSString *middleName;
@property(readonly) NSString *lastName;
@property(readonly) NSString *firstName;
- (id)initWithPerson:(id)arg1 scope:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

