//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface TKPowerMonitor : NSObject
{
    struct IONotificationPort *_portRef;
    unsigned int _handle;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _awaken;
    unsigned int _kernelPort;
}

+ (id)defaultMonitor;
@property _Bool awaken; // @synthesize awaken=_awaken;
@property unsigned int kernelPort; // @synthesize kernelPort=_kernelPort;
- (void).cxx_destruct;
- (id)init;

@end

