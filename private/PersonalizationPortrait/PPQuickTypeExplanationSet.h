//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableSet;

@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding>
{
    NSMutableSet *_set;
}

+ (_Bool)supportsSecureCoding;
+ (id)uniqueKeycodeFromExplanation:(unsigned char)arg1;
+ (id)stringFromExplanation:(unsigned char)arg1;
- (void).cxx_destruct;
- (_Bool)isEqualToQuickTypeExplanationSet:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)count;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (void)push:(unsigned char)arg1;
- (id)init;

@end

