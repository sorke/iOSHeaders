//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIActivity.h>

#import "_UICloudSharingControllerDelegate_Internal.h"
#import "_UIDocumentSharingControllerDelegate_Private.h"

@class NSString, UIImage, UIViewController;

__attribute__((visibility("hidden")))
@interface _UICloudSharingActivity : UIActivity <_UICloudSharingControllerDelegate_Internal, _UIDocumentSharingControllerDelegate_Private>
{
    NSString *_activityTitle;
    UIViewController *_activityViewController;
    UIImage *_activityImage;
}

+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
+ (_Bool)_allowDocumentSharing;
@property(retain, nonatomic) UIImage *activityImage; // @synthesize activityImage=_activityImage;
@property(retain, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
- (void).cxx_destruct;
- (_Bool)_activitySupportsPromiseURLs;
- (void)_documentSharingControllerDidDismiss:(id)arg1;
- (void)_cloudShareControllerDidDismiss:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)_setupForSharingInfo;
- (void)_setupForInitialSharing;
- (id)activityType;
@property(retain, nonatomic) UIViewController *activityViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

