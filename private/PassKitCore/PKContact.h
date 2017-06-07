//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class CNPhoneNumber, CNPostalAddress, NSPersonNameComponents, NSString;

@interface PKContact : NSObject <NSSecureCoding>
{
    NSPersonNameComponents *_name;
    CNPostalAddress *_postalAddress;
    NSString *_emailAddress;
    CNPhoneNumber *_phoneNumber;
    NSString *_supplementarySubLocality;
}

+ (_Bool)supportsSecureCoding;
+ (long long)version;
@property(retain, nonatomic) NSString *supplementarySubLocality; // @synthesize supplementarySubLocality=_supplementarySubLocality;
@property(retain, nonatomic) CNPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
@property(retain, nonatomic) NSPersonNameComponents *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)cnMutableContact;
- (unsigned long long)hash;
- (_Bool)isEqualToContact:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCNContact:(id)arg1;

@end
