//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@protocol PGGraphIngestPerson <NSObject>
@property(readonly, nonatomic) NSDictionary *locationsByAddressTypes;
@property(readonly, nonatomic) unsigned long long relationship;
@property(readonly, nonatomic) NSDate *anniversaryDate;
@property(readonly, nonatomic) NSDate *birthdayDate;
@property(readonly, nonatomic) _Bool isMe;
@property(readonly, nonatomic) _Bool isUserCreated;
@property(readonly, nonatomic) _Bool isFavorite;
@property(readonly, nonatomic) NSString *contactID;
@property(readonly, nonatomic) NSString *UUID;
@property(readonly, nonatomic) NSString *fullName;
@end

