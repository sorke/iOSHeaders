//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INCodableAttribute.h>

#import "NSSecureCoding.h"

@class NSString;

@interface INCodableObjectAttribute : INCodableAttribute <NSSecureCoding>
{
    NSString *_className;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_dictionaryRepresentation;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)valueTransformer;

@end

