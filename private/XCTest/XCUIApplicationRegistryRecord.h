//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface XCUIApplicationRegistryRecord : NSObject
{
    _Bool _isTestDependency;
    NSURL *_URL;
    NSString *_bundleIdentifier;
}

@property(readonly) _Bool isTestDependency; // @synthesize isTestDependency=_isTestDependency;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy) NSURL *URL; // @synthesize URL=_URL;
- (void)dealloc;
- (id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 isTestDependency:(_Bool)arg3;

@end
