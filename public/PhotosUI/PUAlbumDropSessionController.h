//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUPhotoStreamComposeServiceDelegate.h"
#import "PUVideoTrimQueueControllerDelegate.h"

@class NSString, PUPhotoStreamComposeServiceViewController, PUVideoTrimQueueController;

@interface PUAlbumDropSessionController : NSObject <PUPhotoStreamComposeServiceDelegate, PUVideoTrimQueueControllerDelegate>
{
    PUVideoTrimQueueController *_trimController;
    PUPhotoStreamComposeServiceViewController *_composeServiceController;
}

- (void).cxx_destruct;
- (void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2;
- (void)photoStreamComposeServiceDidCancel:(id)arg1;
- (void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2;
- (void)performDrop:(id)arg1 context:(id)arg2;
- (void)handleAddToCloudSharedAlbum:(id)arg1 pickedAssets:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

