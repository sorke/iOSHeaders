//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNContactVCardSummary : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;
    NSString *_subtitle;
    unsigned long long _contactCount;
    NSArray *_avatarContacts;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isAvatarContacts:(id)arg1 equalTo:(id)arg2;
+ (id)localizedStringWithName:(id)arg1 andThisManyOthers:(unsigned long long)arg2;
+ (id)localizedStringWithName:(id)arg1 andOtherName:(id)arg2;
+ (id)makeFormatter;
+ (id)defaultNameFormatter;
+ (id)nameForContact:(id)arg1;
+ (id)namesForContact:(id)arg1;
+ (id)readingOptionsWithContactLimit:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *avatarContacts; // @synthesize avatarContacts=_avatarContacts;
@property(readonly, nonatomic) unsigned long long contactCount; // @synthesize contactCount=_contactCount;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *descriptiveLabel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 contactCount:(unsigned long long)arg3 avatarContacts:(id)arg4;
- (id)initWithData:(id)arg1 error:(id *)arg2;

@end

