//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, PXCMMComposeRecipient;

@interface PXCMMComposeRecipientValidationQuery : NSObject <NSCopying>
{
    PXCMMComposeRecipient *_composeRecipient;
    NSString *_address;
    long long _addressKind;
    long long _validationType;
}

+ (id)new;
@property(nonatomic) long long validationType; // @synthesize validationType=_validationType;
@property(readonly, nonatomic) long long addressKind; // @synthesize addressKind=_addressKind;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, nonatomic) PXCMMComposeRecipient *composeRecipient; // @synthesize composeRecipient=_composeRecipient;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithComposeRecipient:(id)arg1 address:(id)arg2 addressKind:(long long)arg3;
- (id)init;

@end

