//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "AVTAvatarTransitionModel.h"
#import "AVTEngagementRatioSupport.h"

@class AVTImageTransitioningContainerView, AVTView, NSString, UIImage, UIView;

@interface AVTAvatarListCell : UICollectionViewCell <AVTAvatarTransitionModel, AVTEngagementRatioSupport>
{
    double _engagementRatio;
    AVTView *_avtView;
    id <AVTAvatarRecord> _avatar;
    AVTImageTransitioningContainerView *_containerView;
}

+ (struct CGRect)actualContentRectForContentViewRect:(struct CGRect)arg1 engagementRatio:(double)arg2;
+ (double)actualContentAlphaForEngagementRatio:(double)arg1;
+ (id)reuseIdentifier;
@property(readonly, nonatomic) AVTImageTransitioningContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) id <AVTAvatarRecord> avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) AVTView *avtView; // @synthesize avtView=_avtView;
@property(nonatomic) double engagementRatio; // @synthesize engagementRatio=_engagementRatio;
- (void).cxx_destruct;
- (id)liveView;
- (void)applyFullAlpha;
- (void)applyBaseAlpha;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;
- (void)setImageViewVisible:(_Bool)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)endUsingAVTView;
- (void)beginUsingAVTViewFromSession:(id)arg1;
@property(readonly, nonatomic) UIView *avtViewContainer;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)downcastWithCellHandler:(CDUnknownBlockType)arg1 listCellHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

