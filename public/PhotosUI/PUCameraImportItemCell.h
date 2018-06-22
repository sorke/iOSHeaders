//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "PXChangeObserver.h"

@class NSString, PUImportItemViewModel, PUPhotoView, UIActivityIndicatorView, UIImageView, UITextField;

__attribute__((visibility("hidden")))
@interface PUCameraImportItemCell : UICollectionViewCell <PXChangeObserver>
{
    struct CGRect _badgeTapZone;
    _Bool _needsThumbnailRefresh;
    _Bool _selectable;
    _Bool _needsBadgeUpdate;
    id <PUImportDisplayDelegate> _displayDelegate;
    PUImportItemViewModel *_representedImportItem;
    long long _badgeType;
    UIImageView *_badgeImageView;
    UIActivityIndicatorView *_spinner;
    PUPhotoView *_photoView;
    UITextField *_debugTextField;
    long long _thumbnailRequestID;
    struct CGRect _scaledDisplayRect;
}

@property(nonatomic) long long thumbnailRequestID; // @synthesize thumbnailRequestID=_thumbnailRequestID;
@property(nonatomic) struct CGRect scaledDisplayRect; // @synthesize scaledDisplayRect=_scaledDisplayRect;
@property(nonatomic) _Bool needsBadgeUpdate; // @synthesize needsBadgeUpdate=_needsBadgeUpdate;
@property(retain, nonatomic) UITextField *debugTextField; // @synthesize debugTextField=_debugTextField;
@property(retain, nonatomic) PUPhotoView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(nonatomic) _Bool selectable; // @synthesize selectable=_selectable;
@property(nonatomic) long long badgeType; // @synthesize badgeType=_badgeType;
@property(readonly, nonatomic) _Bool needsThumbnailRefresh; // @synthesize needsThumbnailRefresh=_needsThumbnailRefresh;
@property(retain, nonatomic) PUImportItemViewModel *representedImportItem; // @synthesize representedImportItem=_representedImportItem;
@property(nonatomic) __weak id <PUImportDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
- (void).cxx_destruct;
- (void)updateDebugLabel:(id)arg1;
- (id)accessibilityCustomActions;
- (void)accessibilityElementDidBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (long long)dragState;
- (void)_selectAction;
- (void)_enterOneUpAction;
- (void)handleTapGesture:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (struct CGRect)_filledPhotosRectForImage:(id)arg1;
- (void)clearImage;
- (void)cancelThumbnailLoadIfActive;
- (void)setPhotoImage:(id)arg1 withSize:(struct CGSize)arg2 fillMode:(long long)arg3 videoDuration:(double)arg4 isPlaceholder:(_Bool)arg5;
- (void)setCachedImage:(id)arg1 isPlaceholder:(_Bool)arg2;
- (void)_fetchThumbnailReady;
- (void)refreshThumbnail;
- (void)updateBadgeUIIfNeeded;
- (void)prepareForReuse;
- (void)showActivityBadge:(_Bool)arg1;
- (_Bool)shouldBeginGestureForPoint:(struct CGPoint)arg1;
- (id)badgeView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

