//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSearchForAccountsIntentResponse.h"

@class INCodableAttribute, NSArray, NSString;

@interface _INPBSearchForAccountsIntentResponse : PBCodable <_INPBSearchForAccountsIntentResponse, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct _has;
    NSArray *_accounts;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)accountsType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)accountsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long accountsCount;
- (void)addAccounts:(id)arg1;
- (void)clearAccounts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

