//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFObject.h"

@class NSArray, NSString;

@interface HMDAppleAccountContext : HMFObject <HMFObject>
{
    NSString *_identifier;
    NSString *_username;
    NSString *_alternateDSID;
}

@property(readonly, copy) NSString *alternateDSID; // @synthesize alternateDSID=_alternateDSID;
@property(readonly, copy) NSString *username; // @synthesize username=_username;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

