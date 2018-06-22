//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface NNMKAccountIdentity : NSObject <NSSecureCoding>
{
    NSString *_username;
    NSString *_displayName;
    NSString *_token;
    NSString *_refreshToken;
    NSString *_accountIdentifier;
    unsigned long long _identityType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long identityType; // @synthesize identityType=_identityType;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

