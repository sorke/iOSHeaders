//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVWeakReference, NSString;

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying>
{
    AVWeakReference *_weakReferenceToListener;
    CDUnknownFunctionPointerType _callback;
    NSString *_name;
    const void *_object;
}

+ (id)listenerKeyWithWeakReferenceToListener:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 name:(id)arg3 object:(const void *)arg4;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithWeakReferenceToListener:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 name:(id)arg3 object:(const void *)arg4;
- (id)init;

@end
