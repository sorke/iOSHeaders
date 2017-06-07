//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKHeroImageView-Protocol.h>

@class NSString, UIImageView;

@interface PKWatchHeroImageView : UIView <PKHeroImageView>
{
    UIImageView *_watchView;
    UIImageView *_bridgeWallpaperImageView;
}

- (void).cxx_destruct;
- (id)_bridgeWallpaperImage;
- (id)_bridgeHeroImage;
- (struct CGSize)imageSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
