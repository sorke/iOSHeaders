//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "DCDocumentCameraRemoteViewController.h"

@class UIViewController<DCDocumentCameraPublicViewController>;

__attribute__((visibility("hidden")))
@interface DCDocumentCameraRemoteViewController : _UIRemoteViewController <DCDocumentCameraRemoteViewController>
{
    UIViewController<DCDocumentCameraPublicViewController> *_publicViewController;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic) __weak UIViewController<DCDocumentCameraPublicViewController> *publicViewController; // @synthesize publicViewController=_publicViewController;
- (void).cxx_destruct;
- (void)didFinishWithDocumentInfoCollection:(id)arg1;
- (void)didCancel;
- (void)viewControllerWasDismissed;
- (void)dismiss;
- (void)viewServicePreferredSizeDidChange:(struct CGSize)arg1;
@property(readonly, nonatomic, getter=viewServiceViewController) id <DCDocumentCameraViewServiceViewController> viewServiceViewController;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

