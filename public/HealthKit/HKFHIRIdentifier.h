//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface HKFHIRIdentifier : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_resourceType;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)FHIRIdentifierWithString:(id)arg1 error:(out id *)arg2;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *resourceType; // @synthesize resourceType=_resourceType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)SQLWildcardIdentifierForContainedResourcesIdentifierOnly;
- (id)SQLWildcardIdentifierForContainedResources;
- (id)parentResourceIdentifierWithError:(id *)arg1;
- (id)identifierForContainedResourceWithIdentifier:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *stringValue;
- (id)init;
- (id)initWithResourceType:(id)arg1 identifier:(id)arg2;

@end

