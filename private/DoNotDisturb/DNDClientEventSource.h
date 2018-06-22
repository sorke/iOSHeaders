//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface DNDClientEventSource : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_value;
    unsigned long long _type;
}

+ (_Bool)supportsSecureCoding;
+ (id)sourceWithPhoneNumber:(id)arg1;
+ (id)sourceWithCNContactIdentifier:(id)arg1;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithValue:(id)arg1 type:(unsigned long long)arg2;

@end

