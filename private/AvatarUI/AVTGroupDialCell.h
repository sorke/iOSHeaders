//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, NSTimer, UILabel;

@interface AVTGroupDialCell : UICollectionViewCell
{
    NSString *_string;
    UILabel *_label;
    NSTimer *_shimmerTimer;
}

+ (id)boldLabelFont;
+ (id)labelFont;
+ (id)cellIdentifier;
@property(retain, nonatomic) NSTimer *shimmerTimer; // @synthesize shimmerTimer=_shimmerTimer;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (void)shimmerOnceWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelShimmerTimer;
- (void)startShimmering;
- (void)stopShimmeringAnimated:(_Bool)arg1;
- (void)setActiveItem:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

