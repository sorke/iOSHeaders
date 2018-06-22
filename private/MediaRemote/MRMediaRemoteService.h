//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRXPCConnection, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

__attribute__((visibility("hidden")))
@interface MRMediaRemoteService : NSObject
{
    const struct {
        CDUnknownFunctionPointerType _field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
        CDUnknownFunctionPointerType _field6;
        CDUnknownFunctionPointerType _field7;
        CDUnknownFunctionPointerType _field8;
        CDUnknownFunctionPointerType _field9;
        void *_field10;
    } *clientModule;
    const struct {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
        CDUnknownFunctionPointerType _field6;
        CDUnknownFunctionPointerType _field7;
        CDUnknownFunctionPointerType _field8;
    } *browsableContentEndpoint;
    const struct {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
    } *voiceRecordingEndpoint;
    const struct {
        void *_field1;
        CDUnknownBlockType _field2;
    } *televisionEndpoint;
    const struct {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
    } *agentEndpoint;
    _Bool _isRunning;
    MRXPCConnection *_mrXPCConnection;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_clientCallbackQueue;
    NSObject<OS_dispatch_queue> *_clientCallbackPriorityQueue;
    NSObject<OS_dispatch_queue> *_browsableContentQueue;
    NSObject<OS_dispatch_queue> *_voiceInputQueue;
    NSObject<OS_dispatch_queue> *_televisionQueue;
    NSObject<OS_dispatch_queue> *_agentQueue;
}

@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *agentQueue; // @synthesize agentQueue=_agentQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *televisionQueue; // @synthesize televisionQueue=_televisionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *voiceInputQueue; // @synthesize voiceInputQueue=_voiceInputQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *browsableContentQueue; // @synthesize browsableContentQueue=_browsableContentQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackPriorityQueue; // @synthesize clientCallbackPriorityQueue=_clientCallbackPriorityQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackQueue; // @synthesize clientCallbackQueue=_clientCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) MRXPCConnection *mrXPCConnection; // @synthesize mrXPCConnection=_mrXPCConnection;
- (void).cxx_destruct;

@end

