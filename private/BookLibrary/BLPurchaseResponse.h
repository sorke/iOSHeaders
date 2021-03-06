//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSNumber, NSString;

@interface BLPurchaseResponse : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_downloadID;
    NSString *_purchaseParameters;
    NSString *_permLink;
    NSNumber *_storeID;
    NSDictionary *_responseMetrics;
    NSString *_currency;
    NSString *_price;
    NSDictionary *_errorInfo;
    NSString *_errorDomain;
    NSNumber *_errorCode;
    NSString *_errorDescription;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(copy, nonatomic) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(copy, nonatomic) NSDictionary *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) NSDictionary *responseMetrics; // @synthesize responseMetrics=_responseMetrics;
@property(retain, nonatomic) NSNumber *storeID; // @synthesize storeID=_storeID;
@property(copy, nonatomic) NSString *permLink; // @synthesize permLink=_permLink;
@property(copy, nonatomic) NSString *purchaseParameters; // @synthesize purchaseParameters=_purchaseParameters;
@property(copy, nonatomic) NSString *downloadID; // @synthesize downloadID=_downloadID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

