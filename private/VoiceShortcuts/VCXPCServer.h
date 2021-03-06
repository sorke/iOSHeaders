//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSString, NSXPCListener, NSXPCListenerEndpoint, VCVoiceShortcutManager;

@interface VCXPCServer : NSObject <NSXPCListenerDelegate>
{
    _Bool _skipEntitlementsCheck;
    VCVoiceShortcutManager *_manager;
    NSXPCListener *_xpcListener;
}

+ (void)initialize;
@property(readonly, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(readonly, nonatomic) VCVoiceShortcutManager *manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) _Bool skipEntitlementsCheck; // @synthesize skipEntitlementsCheck=_skipEntitlementsCheck;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
- (id)initWithAnonymousListenerUseEphemeralStore:(_Bool)arg1;
- (id)init;
- (id)initWithListener:(id)arg1 useEphemeralStore:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

