//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVShareInteractionHandlerFactory.h"

@class NSString;

@interface NUVideoShareInteractionHandlerFactory : NSObject <SVShareInteractionHandlerFactory>
{
    id <NUVideoActivityViewControllerFactory> _activityViewControllerFactory;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
    id <SVVideoPlaybackController> _playbackController;
    id <NUURLHandling> _URLHandler;
}

@property(readonly, nonatomic) id <NUURLHandling> URLHandler; // @synthesize URLHandler=_URLHandler;
@property(readonly, nonatomic) id <SVVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
@property(readonly, nonatomic) id <NUVideoActivityViewControllerFactory> activityViewControllerFactory; // @synthesize activityViewControllerFactory=_activityViewControllerFactory;
- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithVideoViewControllerProvider:(id)arg1 playbackController:(id)arg2 activityViewControllerFactory:(id)arg3 URLHandler:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

