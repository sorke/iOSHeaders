//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BLTBulletinSendQueueDelegate;

@interface BLTBulletinSendQueuePassthrough : NSObject
{
    id <BLTBulletinSendQueueDelegate> _delegate;
}

@property(nonatomic) __weak id <BLTBulletinSendQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendNow;
- (void)queuePending;
- (void)handleFileURL:(id)arg1;
- (void)_sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 isTrafficRestricted:(_Bool)arg4 attachmentURL:(id)arg5 attachmentKey:(id)arg6 didSend:(CDUnknownBlockType)arg7 didQueue:(CDUnknownBlockType)arg8;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 isTrafficRestricted:(_Bool)arg4 attachmentURL:(id)arg5 attachmentKey:(id)arg6 didSend:(CDUnknownBlockType)arg7;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(CDUnknownBlockType)arg3 didQueue:(CDUnknownBlockType)arg4;

@end
