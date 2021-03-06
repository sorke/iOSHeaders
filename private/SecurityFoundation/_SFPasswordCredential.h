//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SecurityFoundation/_SFCredential.h>

@class NSString;

@interface _SFPasswordCredential : _SFCredential
{
    NSString *_username;
    NSString *_password;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic, getter=_cachedPassword) NSString *password;
- (void)usePasswordWithHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *username;
- (id)debugDescription;
- (id)description;
- (id)descriptionShowingPassword:(_Bool)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithUsername:(id)arg1 primaryServiceIdentifier:(id)arg2 supplementaryServiceIdentifiers:(id)arg3;
- (id)initWithUsername:(id)arg1 password:(id)arg2 primaryServiceIdentifier:(id)arg3 supplementaryServiceIdentifiers:(id)arg4;
- (id)initWithUsername:(id)arg1 password:(id)arg2 primaryServiceIdentifier:(id)arg3;

@end

