//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface AXPTranslator : NSObject
{
    _Bool _accessibilityEnabled;
    id <AXPTranslationDelegateHelper> _bridgeDelegate;
    id <AXPTranslationRuntimeHelper> _runtimeDelegate;
    id <AXPTranslationSystemAppDelegate> _systemAppDelegate;
    NSMutableDictionary *_fakeElementCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *fakeElementCache; // @synthesize fakeElementCache=_fakeElementCache;
@property(nonatomic) __weak id <AXPTranslationSystemAppDelegate> systemAppDelegate; // @synthesize systemAppDelegate=_systemAppDelegate;
@property(nonatomic) __weak id <AXPTranslationRuntimeHelper> runtimeDelegate; // @synthesize runtimeDelegate=_runtimeDelegate;
@property(nonatomic) __weak id <AXPTranslationDelegateHelper> bridgeDelegate; // @synthesize bridgeDelegate=_bridgeDelegate;
@property(nonatomic) _Bool accessibilityEnabled; // @synthesize accessibilityEnabled=_accessibilityEnabled;
- (void).cxx_destruct;
- (id)platformElementFromTranslation:(id)arg1;
- (void)initializeAXRuntimeForSystemAppServer;
- (void)enableAccessibility;
- (void)processPlatformNotification:(unsigned long long)arg1 data:(id)arg2;
- (id)processFrontMostApp:(id)arg1;
- (id)processHitTest:(id)arg1;
- (id)processAttributeRequest:(id)arg1;
- (id)processCanSetAttribute:(id)arg1;
- (id)processSetAttribute:(id)arg1;
- (id)processActionRequest:(id)arg1;
- (id)processMultipleAttributeRequest:(id)arg1;
- (id)iosPlatformElementFromTranslation:(id)arg1;
- (id)objectAtPoint:(struct CGPoint)arg1 displayId:(unsigned int)arg2;
- (id)processTranslatorRequest:(id)arg1;
- (id)platformTranslator;
- (id)sendTranslatorRequest:(id)arg1;
- (void)handleNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3;
- (id)frontmostApplicationWithDisplayId:(unsigned int)arg1;
- (id)translationApplicationObjectForPid:(int)arg1;
- (id)init;

@end

