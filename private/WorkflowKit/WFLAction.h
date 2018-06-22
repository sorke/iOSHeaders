//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface WFLAction : NSObject <NSCopying>
{
    NSString *_identifier;
    NSDictionary *_parameters;
}

@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) Class implementationClass;
@property(readonly, copy, nonatomic) NSString *appBundleIdentifier;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2;

@end

