//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSXPCConnection, TIKeyboardInputManagerBase, TIKeyboardInputManagerLoaderSyncHelper;

@interface TIKeyboardInputManagerLoader : NSObject
{
    TIKeyboardInputManagerLoaderSyncHelper *_helper;
    NSMutableDictionary *_availableInputManagers;
    NSMutableDictionary *_lastUsedDate;
    NSMutableDictionary *_activeInputManagers;
    NSXPCConnection *_interactingConnection;
    TIKeyboardInputManagerBase *_mostRecentlyRequested;
}

+ (id)sharedLoader;
@property(retain, nonatomic) TIKeyboardInputManagerBase *mostRecentlyRequested; // @synthesize mostRecentlyRequested=_mostRecentlyRequested;
@property(nonatomic) NSXPCConnection *interactingConnection; // @synthesize interactingConnection=_interactingConnection;
- (void).cxx_destruct;
- (id)activeInputModeIdentifiers;
- (_Bool)hasActiveInputManagers;
- (id)resourceInputModes;
- (void)reduceCacheToSize:(unsigned long long)arg1;
- (void)cacheInputManager:(id)arg1;
- (id)inputManagerForInputMode:(id)arg1 withClass:(Class)arg2;
- (void)startSyncHelper;
- (void)dealloc;
- (id)init;

@end

