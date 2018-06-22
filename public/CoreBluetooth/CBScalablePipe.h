//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBCentral, CBPeer, CBScalablePipeManager, NSInputStream, NSOutputStream, NSString;

@interface CBScalablePipe : NSObject
{
    CBScalablePipeManager *_pipeManager;
    int _socket;
    _Bool _reliablePipe;
    CBCentral *_central;
    CBPeer *_peer;
    NSString *_name;
    long long _type;
    long long _priority;
    long long _mtu;
    NSInputStream *_input;
    NSOutputStream *_output;
    void *_channel;
}

@property(readonly, nonatomic) void *channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) NSOutputStream *output; // @synthesize output=_output;
@property(readonly, nonatomic) NSInputStream *input; // @synthesize input=_input;
@property(readonly, nonatomic) _Bool reliablePipe; // @synthesize reliablePipe=_reliablePipe;
@property(readonly, nonatomic) long long mtu; // @synthesize mtu=_mtu;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CBPeer *peer; // @synthesize peer=_peer;
@property(readonly, nonatomic) CBCentral *central; // @synthesize central=_central;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)setOrphan;
- (id)initWithPipeManager:(id)arg1 info:(id)arg2;

@end

