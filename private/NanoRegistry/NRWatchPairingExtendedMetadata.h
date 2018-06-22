//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface NRWatchPairingExtendedMetadata : NSObject <NSSecureCoding>
{
    _Bool _postFailsafeObliteration;
    long long _chipID;
    NSString *_productType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool postFailsafeObliteration; // @synthesize postFailsafeObliteration=_postFailsafeObliteration;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(nonatomic) long long chipID; // @synthesize chipID=_chipID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

