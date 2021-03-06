//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AceObject.h"

#import "SAAceSerializable.h"

@class NSDate, NSNumber, NSString, SAPerson;

@interface CFSGSuggestedContact : AceObject <SAAceSerializable>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)suggestedContactWithDictionary:(id)arg1 context:(id)arg2;
+ (id)suggestedContact;
@property(copy, nonatomic) NSString *suggestedOriginType;
@property(copy, nonatomic) NSDate *originDate;
@property(copy, nonatomic) NSNumber *isSignificant;
@property(copy, nonatomic) NSString *bundleId;
@property(retain, nonatomic) SAPerson *acePerson;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

