//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/NSObject-Protocol.h>

@class NSObject;
@protocol OS_xpc_object;

@protocol BSXPCServerClient <NSObject>
@property(readonly, retain, nonatomic) NSObject<OS_xpc_object> *connection;
- (void)invalidate;
- (void)suspend;
- (void)resume;
@end
