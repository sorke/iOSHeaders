//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MKModuleViewControllerProtocol.h"
#import "MKPlaceAttributionCellDelegate.h"
#import "MKPlacePhotosViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "_MKInfoCardChildViewControllerAnalyticsDelegate.h"

@class MKMapItem, MKPhotoSmallAttributionView, MKPlaceAttributionCell, MKPlacePhotosView, NSArray, NSLayoutConstraint, NSString, UIScrollView, UIView, _MKPlaceViewController;

__attribute__((visibility("hidden")))
@interface MKPlacePhotosViewController : UIViewController <MKPlaceAttributionCellDelegate, MKPlacePhotosViewDelegate, UIScrollViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    MKPlacePhotosView *_currentPhotoViewer;
    UIView *_bottomHairline;
    NSArray *_photoViews;
    UIScrollView *_photosContainerScrollView;
    UIView *_photosContainer;
    MKPhotoSmallAttributionView *_photosSmallAttributionsView;
    double _lastPhotoScrollOffset;
    _Bool _photoScrollViewScrollingLeft;
    _Bool _photoScrollViewScrollingRight;
    _Bool _canUseFullscreenViewer;
    _Bool _canUseGallery;
    _Bool _photoLoaded;
    _Bool _loadAppImageCanceledOrFailed;
    _Bool _isRTL;
    unsigned long long _photosCount;
    MKMapItem *_mapItem;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSArray *_photos;
    unsigned long long _mode;
    unsigned long long _originalMode;
    MKPlaceAttributionCell *_attributionCell;
    UIScrollView *_parentScrollView;
    _Bool _showsBottomHairline;
    _MKPlaceViewController *_owner;
    id <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> _photosControllerDelegate;
}

@property(nonatomic) _Bool showsBottomHairline; // @synthesize showsBottomHairline=_showsBottomHairline;
@property(nonatomic) __weak id <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> photosControllerDelegate; // @synthesize photosControllerDelegate=_photosControllerDelegate;
@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewLayoutMarginsDidChange;
- (id)infoCardChildPossibleActions;
- (void)placePhotoViewerWillClose:(id)arg1 photo:(id)arg2 onIndex:(unsigned long long)arg3;
- (void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id)arg2;
- (id)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1;
- (void)_callPhotoDelegateForPhotoAt:(unsigned long long)arg1;
- (void)_photoTappedAtIndex:(unsigned long long)arg1;
- (void)_photoSelected:(id)arg1;
- (void)_loadPhotos;
- (void)_cancelLoadPhotos;
- (void)_updatePhotoBackgroundColor:(id)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (void)_updateAlphaAttribution;
- (void)_catchScrollNotification:(id)arg1;
- (void)updateAttributionPositionWithOffset:(double)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)sizeForIndex:(unsigned long long)arg1;
- (void)layoutImages;
- (void)_createImageViews;
- (void)openURL;
- (id)attributionString;
- (void)addAttributionCell;
- (void)updateBottomHairlineVisibility;
- (void)dealloc;
- (void)_willResignActive:(id)arg1;
- (void)_didBecomeActive:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMapItem:(id)arg1 mode:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

