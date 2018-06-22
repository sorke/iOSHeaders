//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, VUILabel, VUIProductMetadataLayout;

__attribute__((visibility("hidden")))
@interface VUIProductSectionView : UIView
{
    VUIProductMetadataLayout *_layout;
    VUILabel *_headerView;
    NSArray *_infoViews;
    UIView *_footerView;
}

+ (id)footerDescriptionWithString:(id)arg1 layout:(id)arg2 maxLine:(unsigned long long)arg3 existingView:(id)arg4;
+ (id)footerLabelWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSArray *infoViews; // @synthesize infoViews=_infoViews;
@property(retain, nonatomic) VUILabel *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) VUIProductMetadataLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (struct CGSize)_calculateInfoHeadersThatFits:(struct CGSize)arg1;
- (struct CGSize)_calculateInfoDataViewsThatFit:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

