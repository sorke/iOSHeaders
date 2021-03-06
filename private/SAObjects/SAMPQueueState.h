//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SABackgroundContextObject.h"

@class NSDictionary, NSNumber, NSString, SAMPMediaItem, SAMPNowPlayingQueuePosition, SANPCommandInfo, SANPVideoAudioAndSubtitleLanguageOptions;

@interface SAMPQueueState : AceObject <SABackgroundContextObject>
{
}

+ (id)queueStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)queueState;
@property(nonatomic) int state;
@property(copy, nonatomic) NSString *source;
@property(copy, nonatomic) NSNumber *shuffleEnabled;
@property(retain, nonatomic) SAMPMediaItem *previousListenedToItem;
@property(copy, nonatomic) NSNumber *playbackRate;
@property(retain, nonatomic) SAMPNowPlayingQueuePosition *playbackQueuePosition;
@property(retain, nonatomic) SANPCommandInfo *nowPlayingCommandInfo;
@property(retain, nonatomic) SAMPMediaItem *nextListeningToItem;
@property(retain, nonatomic) SAMPMediaItem *listeningToItem;
@property(copy, nonatomic) NSDictionary *currentListeningToContainer;
@property(nonatomic) _Bool currentItemSteerable;
@property(retain, nonatomic) SANPVideoAudioAndSubtitleLanguageOptions *audioAndSubtitleLanguageOptions;
@property(copy, nonatomic) NSString *applicationIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

