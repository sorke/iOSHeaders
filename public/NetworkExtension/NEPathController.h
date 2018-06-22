//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEConfigurationValidating.h"
#import "NEPrettyDescription.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface NEPathController : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    _Bool _enabled;
    long long _cellularFallbackFlags;
    NSArray *_pathRules;
    NSArray *_payloadAppRules;
}

+ (id)copyAggregatePathRules;
+ (_Bool)supportsSecureCoding;
@property(copy) NSArray *payloadAppRules; // @synthesize payloadAppRules=_payloadAppRules;
@property(copy) NSArray *pathRules; // @synthesize pathRules=_pathRules;
@property long long cellularFallbackFlags; // @synthesize cellularFallbackFlags=_cellularFallbackFlags;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasNonDefaultRules;
- (id)copyPathRuleSigningIdentifiers;
- (_Bool)removePathRuleBySigningIdentifier:(id)arg1;
- (id)copyPathRuleBySigningIdentifier:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

