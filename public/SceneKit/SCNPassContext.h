//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCNPassContext : NSObject
{
    struct {
        struct __C3DFXPass *_field1;
        struct __C3DFXTechnique *_field2;
        void *_field3;
        struct __C3DEngineContext *_field4;
        struct __C3DFXProgramObject *_field5;
        double _field6;
        void *_field7;
        struct __C3DRendererElement *_field8;
        long long _field9;
    } *_context;
    id <MTLCommandQueue> _commandQueue;
    id <MTLCommandBuffer> _commandBuffer;
    id <MTLDevice> _device;
}

@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) id <MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer=_commandBuffer;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) double time;

@end

