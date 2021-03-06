//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoInteractionHandlerFactory.h"

@class NSString;

@interface SVPrivacyStatementInteractionHandlerFactory : NSObject <SVVideoInteractionHandlerFactory>
{
    id <SVVideoProviderProviding> _videoProviderProviding;
    id <SVVideoPlaybackController> _playbackController;
}

@property(readonly, nonatomic) id <SVVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <SVVideoProviderProviding> videoProviderProviding; // @synthesize videoProviderProviding=_videoProviderProviding;
- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithVideoProviderProviding:(id)arg1 playbackController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

