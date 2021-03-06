//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSString, NSURL, _LSOpenConfiguration;

__attribute__((visibility("hidden")))
@interface _LSAppLinkOpenState : NSObject <NSSecureCoding>
{
    _Bool _openStrategyChanged;
    NSURL *_URL;
    NSString *_bundleIdentifier;
    _LSOpenConfiguration *_openConfiguration;
    NSDictionary *_browserState;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSDictionary *browserState; // @synthesize browserState=_browserState;
@property _Bool openStrategyChanged; // @synthesize openStrategyChanged=_openStrategyChanged;
@property(retain) _LSOpenConfiguration *openConfiguration; // @synthesize openConfiguration=_openConfiguration;
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (void)dealloc;

@end

