//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface SFRevocationPolicy : NSObject <NSCopying, NSSecureCoding>
{
    id _revocationPolicyInternal;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long networkLookup;
@property(nonatomic) unsigned long long revocationMethods;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRevocationMethods:(unsigned long long)arg1 networkLookup:(long long)arg2;
- (id)init;

@end

