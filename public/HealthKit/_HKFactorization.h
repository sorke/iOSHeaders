//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _HKFactorization : NSObject <NSCopying, NSSecureCoding>
{
    NSMapTable *_factors;
}

+ (_Bool)supportsSecureCoding;
+ (id)factorizationFromString:(id)arg1 factorGrammar:(id)arg2;
+ (id)factorizationWithFactorsAndExponents:(id)arg1;
+ (id)factorizationWithFactor:(id)arg1 exponent:(long long)arg2;
+ (id)factorization;
- (void).cxx_destruct;
- (void)_raiseToExponent:(long long)arg1;
- (void)_multiplyByFactorization:(id)arg1;
- (void)_multiplyByFactor:(id)arg1 exponent:(long long)arg2;
- (long long)_exponentForFactor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)unitString;
- (long long)exponentForFactor:(id)arg1;
- (id)anyFactor;
- (unsigned long long)factorCount;
- (void)_enumerateFactorsWithHandler:(CDUnknownBlockType)arg1;
- (void)enumerateFactorsWithHandler:(CDUnknownBlockType)arg1;
- (id)factorizationByRaisingToExponent:(long long)arg1;
- (id)reciprocal;
- (id)factorizationByDividing:(id)arg1;
- (id)factorizationByMultiplying:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

