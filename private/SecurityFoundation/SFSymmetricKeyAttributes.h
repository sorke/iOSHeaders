//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFKeychainItemAttributes.h"
#import "_SFKeyAttributes.h"

@class NSString, _SFKeySpecifier;

@interface SFSymmetricKeyAttributes : NSObject <_SFKeyAttributes, SFKeychainItemAttributes>
{
    id _symmetricKeyAttributesInternal;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *keyDomain;
- (void)setKeySpecifier:(id)arg1;
@property(readonly, copy, nonatomic) _SFKeySpecifier *keySpecifier;
@property(copy, nonatomic) NSString *localizedDescription;
@property(copy, nonatomic) NSString *localizedLabel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSpecifier:(id)arg1 domain:(struct NSString *)arg2;
- (id)initWithSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *persistentIdentifier;
@property(readonly) Class superclass;

@end

