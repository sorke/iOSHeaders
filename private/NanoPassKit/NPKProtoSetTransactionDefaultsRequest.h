//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSData;

@interface NPKProtoSetTransactionDefaultsRequest : PBRequest <NSCopying>
{
    NSData *_defaultBillingAddresses;
    NSData *_defaultContactEmail;
    NSData *_defaultContactName;
    NSData *_defaultContactPhone;
    NSData *_defaultShippingAddress;
}

@property(retain, nonatomic) NSData *defaultContactName; // @synthesize defaultContactName=_defaultContactName;
@property(retain, nonatomic) NSData *defaultContactPhone; // @synthesize defaultContactPhone=_defaultContactPhone;
@property(retain, nonatomic) NSData *defaultContactEmail; // @synthesize defaultContactEmail=_defaultContactEmail;
@property(retain, nonatomic) NSData *defaultBillingAddresses; // @synthesize defaultBillingAddresses=_defaultBillingAddresses;
@property(retain, nonatomic) NSData *defaultShippingAddress; // @synthesize defaultShippingAddress=_defaultShippingAddress;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDefaultContactName;
@property(readonly, nonatomic) _Bool hasDefaultContactPhone;
@property(readonly, nonatomic) _Bool hasDefaultContactEmail;
@property(readonly, nonatomic) _Bool hasDefaultBillingAddresses;
@property(readonly, nonatomic) _Bool hasDefaultShippingAddress;

@end

