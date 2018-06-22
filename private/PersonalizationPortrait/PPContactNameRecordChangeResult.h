//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray;

@interface PPContactNameRecordChangeResult : NSObject <NSSecureCoding>
{
    _Bool _changesTruncated;
    NSArray *_changes;
}

+ (_Bool)supportsSecureCoding;
+ (id)contactNameRecordChangeResultWithChanges:(id)arg1 changesTruncated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool changesTruncated; // @synthesize changesTruncated=_changesTruncated;
@property(readonly, nonatomic) NSArray *changes; // @synthesize changes=_changes;
- (void).cxx_destruct;
- (_Bool)isEqualToContactNameRecordChangeResult:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithChanges:(id)arg1 changesTruncated:(_Bool)arg2;

@end

