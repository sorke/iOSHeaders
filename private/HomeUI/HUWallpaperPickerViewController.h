//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeUI/HUTableViewController.h>

#import "HUNamedWallpaperCollectionViewControllerDelegate.h"
#import "HUWallpaperEditingViewControllerDelegate.h"
#import "HUWallpaperPhotoCollectionViewControllerDelegate.h"
#import "PHPhotoLibraryChangeObserver.h"

@class HUNamedWallpaperCollectionViewController, NSArray, NSMutableDictionary, NSString, PHCachingImageManager;

@interface HUWallpaperPickerViewController : HUTableViewController <HUWallpaperEditingViewControllerDelegate, HUNamedWallpaperCollectionViewControllerDelegate, HUWallpaperPhotoCollectionViewControllerDelegate, PHPhotoLibraryChangeObserver>
{
    id <HUWallpaperPickerViewControllerDelegate> _delegate;
    long long _collectionType;
    HUNamedWallpaperCollectionViewController *_namedWallpaperController;
    NSString *_namedSectionTitle;
    PHCachingImageManager *_imageManager;
    NSMutableDictionary *_assetCollectionsToAssetFetchResults;
    NSArray *_assetCollections;
}

@property(retain, nonatomic) NSArray *assetCollections; // @synthesize assetCollections=_assetCollections;
@property(retain, nonatomic) NSMutableDictionary *assetCollectionsToAssetFetchResults; // @synthesize assetCollectionsToAssetFetchResults=_assetCollectionsToAssetFetchResults;
@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(copy, nonatomic) NSString *namedSectionTitle; // @synthesize namedSectionTitle=_namedSectionTitle;
@property(retain, nonatomic) HUNamedWallpaperCollectionViewController *namedWallpaperController; // @synthesize namedWallpaperController=_namedWallpaperController;
@property(nonatomic) long long collectionType; // @synthesize collectionType=_collectionType;
@property(readonly, nonatomic) __weak id <HUWallpaperPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadAssetCollections;
- (id)identifierForSection:(unsigned long long)arg1;
- (id)currentSectionIdentifiers;
- (void)wallpaperEditingDidCancel:(id)arg1;
- (void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3;
- (void)photoCollectionController:(id)arg1 didChooseWallpaper:(id)arg2 image:(id)arg3;
- (void)namedWallpaperController:(id)arg1 didChooseWallpaper:(id)arg2 image:(id)arg3;
- (void)photoLibraryDidChange:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowPhotoLibrary;
- (void)contentSizeCategoryDidChange;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCollectionType:(long long)arg1 namedSectionTitle:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

