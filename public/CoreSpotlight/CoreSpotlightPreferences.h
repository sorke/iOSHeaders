//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface CoreSpotlightPreferences : NSObject
{
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    CDUnknownBlockType _notifyHandler;
    CDUnknownBlockType _notify_handler;
    NSString *_state_key;
    const char *_notification_key;
}

@property(nonatomic) const char *notification_key; // @synthesize notification_key=_notification_key;
@property(retain, nonatomic) NSString *state_key; // @synthesize state_key=_state_key;
@property(readonly, copy, nonatomic) CDUnknownBlockType notify_handler; // @synthesize notify_handler=_notify_handler;
@property(readonly, nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(copy, nonatomic) CDUnknownBlockType notifyHandler; // @synthesize notifyHandler=_notifyHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
- (void).cxx_destruct;
- (void)saveState:(id)arg1;
- (void)handlePreferencesChanged;
- (void)dealloc;
- (_Bool)notifyStart;

@end

