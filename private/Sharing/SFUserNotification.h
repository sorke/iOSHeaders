//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>
#import <Sharing/SFXPCInterface-Protocol.h>

@class NSDictionary, NSString, NSURL, NSXPCConnection, SDXPCServer;
@protocol OS_dispatch_queue;

@interface SFUserNotification : NSObject <NSSecureCoding, SFXPCInterface>
{
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSXPCConnection *_xpcCnx;
    _Bool _asBanner;
    _Bool _textInput;
    _Bool _hasDefaultButton;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _responseHandler;
    CDUnknownBlockType _textResponseHandler;
    NSDictionary *_additionalInfo;
    NSURL *_iconURL;
    NSString *_message;
    NSURL *_soundURL;
    NSString *_textInputTitle;
    double _timeout;
    NSString *_title;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    NSString *_otherButtonTitle;
    SDXPCServer *_server;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SDXPCServer *server; // @synthesize server=_server;
@property(retain, nonatomic) NSString *otherButtonTitle; // @synthesize otherButtonTitle=_otherButtonTitle;
@property(retain, nonatomic) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(retain, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(nonatomic) _Bool hasDefaultButton; // @synthesize hasDefaultButton=_hasDefaultButton;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *textInputTitle; // @synthesize textInputTitle=_textInputTitle;
@property(nonatomic) _Bool textInput; // @synthesize textInput=_textInput;
@property(retain, nonatomic) NSURL *soundURL; // @synthesize soundURL=_soundURL;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(nonatomic) _Bool asBanner; // @synthesize asBanner=_asBanner;
@property(retain, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(copy, nonatomic) CDUnknownBlockType textResponseHandler; // @synthesize textResponseHandler=_textResponseHandler;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)userNotificationTextResponse:(id)arg1;
- (void)userNotificationResponse:(int)arg1;
- (void)userNotificationError:(id)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (struct __CFUserNotification *)createNotification;
- (void)_presentBanner;
- (void)_postNotification:(struct __CFUserNotification *)arg1;
- (void)_present;
- (void)present;
- (void)invalidate;
- (id)init;

@end
