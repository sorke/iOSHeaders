//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICDelegateToken, ICURLBag, NSNumber, NSString;

@interface ICStoreURLRequestBuilderProperties : NSObject
{
    NSString *_iCloudPersonID;
    ICURLBag *_URLBag;
    NSNumber *_DSID;
    NSString *_storefrontIdentifier;
    NSNumber *_delegatedDSID;
    NSString *_delegatedStorefrontIdentifier;
    ICDelegateToken *_delegateToken;
    ICURLBag *_delegatedURLBag;
}

@property(retain, nonatomic) ICURLBag *delegatedURLBag; // @synthesize delegatedURLBag=_delegatedURLBag;
@property(copy, nonatomic) ICDelegateToken *delegateToken; // @synthesize delegateToken=_delegateToken;
@property(copy, nonatomic) NSString *delegatedStorefrontIdentifier; // @synthesize delegatedStorefrontIdentifier=_delegatedStorefrontIdentifier;
@property(copy, nonatomic) NSNumber *delegatedDSID; // @synthesize delegatedDSID=_delegatedDSID;
@property(copy, nonatomic) NSString *storefrontIdentifier; // @synthesize storefrontIdentifier=_storefrontIdentifier;
@property(copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
@property(retain, nonatomic) ICURLBag *URLBag; // @synthesize URLBag=_URLBag;
@property(copy, nonatomic) NSString *iCloudPersonID; // @synthesize iCloudPersonID=_iCloudPersonID;
- (void).cxx_destruct;

@end

