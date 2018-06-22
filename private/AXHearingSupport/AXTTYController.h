//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXUIClientDelegate.h"
#import "TTYCallDelegate.h"

@class AXUIClient, NSMutableArray, NSString;

@interface AXTTYController : NSObject <AXUIClientDelegate, TTYCallDelegate>
{
    AXUIClient *_actionUIClient;
    _Bool _shouldSuppressIncomingNotification;
    NSMutableArray *_ttyCalls;
    CDUnknownBlockType _actionCompletionBlock;
}

+ (id)sharedController;
@property(nonatomic) _Bool shouldSuppressIncomingNotification; // @synthesize shouldSuppressIncomingNotification=_shouldSuppressIncomingNotification;
@property(copy, nonatomic) CDUnknownBlockType actionCompletionBlock; // @synthesize actionCompletionBlock=_actionCompletionBlock;
@property(retain, nonatomic) NSMutableArray *ttyCalls; // @synthesize ttyCalls=_ttyCalls;
- (void).cxx_destruct;
- (void)ttyCall:(id)arg1 didReceiveCharacter:(unsigned short)arg2 forUtterance:(id)arg3;
- (id)handleIncomingNotificationSuppressionChange:(id)arg1;
- (id)displayCallPrompt:(id)arg1;
- (id)handleSettingsRequest:(id)arg1;
- (id)handleDictionaryRequest:(id)arg1;
- (id)handleDatabaseRequest:(id)arg1;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;
- (id)actionClient;
- (void)dealloc;
- (void)displayRTTFirstUseAlert;
- (void)dismissRTTFirstUseAlert;
- (void)updateRelayNumber;
- (id)callForUUID:(id)arg1;
- (void)handleUpdatedCalls:(id)arg1;
- (void)callDidConnect:(id)arg1;
- (void)telephonySupportDidChange:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

