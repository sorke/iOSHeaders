//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NTKCGalleryCell, NTKFace, UIView;

@protocol NTKCGalleryCellDelegate <NSObject>
- (void)galleryCell:(NTKCGalleryCell *)arg1 didSelectFace:(NTKFace *)arg2 finishedSelectionHandler:(void (^)(void))arg3;
- (UIView *)galleryCell:(NTKCGalleryCell *)arg1 viewForFace:(NTKFace *)arg2 atIndex:(long long)arg3;

@optional
- (void)galleryCellDidSelectSeeAll:(NTKCGalleryCell *)arg1;
@end
