//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NRXPCProxy, NRXPCServer;

@protocol NRXPCServerDelegate <NSObject>

@optional
- (void)xpcServer:(NRXPCServer *)arg1 proxyDidResume:(NRXPCProxy *)arg2;
- (void)xpcServer:(NRXPCServer *)arg1 proxyDidSuspend:(NRXPCProxy *)arg2;
- (void)xpcServer:(NRXPCServer *)arg1 proxyDidDisconnect:(NRXPCProxy *)arg2;
- (void)xpcServer:(NRXPCServer *)arg1 proxyWillConnect:(NRXPCProxy *)arg2;
@end

