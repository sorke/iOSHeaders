//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ROCKit/ROCKRemoteImpersonator.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface ROCKForwardingProxy : ROCKRemoteImpersonator
{
    id <NSObject> _instance;
    NSSet *_protocols;
}

+ (void)forwardingProxyWithInstance:(id)arg1 eventQueue:(id)arg2 eventHandler:(CDUnknownBlockType)arg3;
+ (id)forwardingProxyWithSessionManager:(id)arg1 instance:(id)arg2;
@property(retain, nonatomic) NSSet *protocols; // @synthesize protocols=_protocols;
@property(retain, nonatomic) id <NSObject> instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)initWithSessionManager:(id)arg1 remoteImpersonatorUUID:(id)arg2 instance:(id)arg3;
- (id)initWithSessionManager:(id)arg1 remoteImpersonatorUUID:(id)arg2 instance:(id)arg3 protocols:(id)arg4;
- (void)_forwardStackInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end

