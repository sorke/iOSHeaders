//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface BCSNotificationServiceConnection : NSObject
{
    NSXPCConnection *_serviceConnection;
}

@property(retain, nonatomic) NSXPCConnection *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelNotifications;
- (void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 withReply:(CDUnknownBlockType)arg3;

@end

