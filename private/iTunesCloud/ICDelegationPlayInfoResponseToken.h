//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSString;

@interface ICDelegationPlayInfoResponseToken : NSObject
{
    NSData *_tokenData;
    NSDate *_expirationDate;
    NSString *_storefrontIdentifier;
}

@property(copy, nonatomic) NSString *storefrontIdentifier; // @synthesize storefrontIdentifier=_storefrontIdentifier;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
- (void).cxx_destruct;

@end

