//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "VUIMediaEntityAssetControllerDelegate.h"
#import "VUIMediaEntityDownloadViewDelegate.h"

@class NSObject<VUIMediaEntityAssetController>, NSString, VUIMediaEntityDownloadView;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityDownloadViewController : UIViewController <VUIMediaEntityAssetControllerDelegate, VUIMediaEntityDownloadViewDelegate>
{
    _Bool _leftJustifiedImageEnabled;
    id <VUIMediaEntityDownloadViewControllerDelegate> _delegate;
    NSObject<VUIMediaEntityAssetController> *_assetController;
    VUIMediaEntityDownloadView *_downloadView;
}

@property(retain, nonatomic) VUIMediaEntityDownloadView *downloadView; // @synthesize downloadView=_downloadView;
@property(nonatomic) _Bool leftJustifiedImageEnabled; // @synthesize leftJustifiedImageEnabled=_leftJustifiedImageEnabled;
@property(retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController; // @synthesize assetController=_assetController;
@property(nonatomic) __weak id <VUIMediaEntityDownloadViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_startDownloadIfPossible;
- (void)_updateView;
- (void)downloadViewDidRequestRemoveDownload:(id)arg1;
- (void)downloadViewDidRequestCancelDownload:(id)arg1;
- (void)downloadViewDidRequestStartDownload:(id)arg1;
- (void)mediaEntityAssetController:(id)arg1 stateDidChange:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithMediaEntityAssetController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

