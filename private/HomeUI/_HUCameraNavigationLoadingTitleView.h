//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface _HUCameraNavigationLoadingTitleView : UIView
{
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_loadingLabel;
}

@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end

