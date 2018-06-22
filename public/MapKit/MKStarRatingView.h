//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImage;

@interface MKStarRatingView : UIView
{
    double _rating;
    long long _numLevels;
    double _padding;
    _Bool _highlighted;
    UIImage *_fullStarImage;
    UIImage *_halfStarImage;
    UIImage *_emptyStarImage;
    UIImage *_fullStarHighlightedImage;
    UIImage *_halfStarHighlightedImage;
    UIImage *_emptyStarHighlightedImage;
    NSMutableArray *_ratingViews;
    long long _numReviews;
    long long _starStyle;
}

+ (id)ratingAsAttributedString:(double)arg1 baseFont:(id)arg2 style:(long long)arg3 theme:(id)arg4;
+ (id)ratingAsAttributedString:(double)arg1 baseFont:(id)arg2 style:(long long)arg3;
@property(retain, nonatomic) UIImage *emptyStarHighlightedImage; // @synthesize emptyStarHighlightedImage=_emptyStarHighlightedImage;
@property(retain, nonatomic) UIImage *halfStarHighlightedImage; // @synthesize halfStarHighlightedImage=_halfStarHighlightedImage;
@property(retain, nonatomic) UIImage *fullStarHighlightedImage; // @synthesize fullStarHighlightedImage=_fullStarHighlightedImage;
@property(retain, nonatomic) UIImage *emptyStarImage; // @synthesize emptyStarImage=_emptyStarImage;
@property(retain, nonatomic) UIImage *halfStarImage; // @synthesize halfStarImage=_halfStarImage;
@property(retain, nonatomic) UIImage *fullStarImage; // @synthesize fullStarImage=_fullStarImage;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(nonatomic) long long numberOfRatingLevels; // @synthesize numberOfRatingLevels=_numLevels;
@property(nonatomic) long long starStyle; // @synthesize starStyle=_starStyle;
- (void).cxx_destruct;
- (void)setPadding:(double)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)_layoutStarViewsCreatingIfNeeded:(_Bool)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (double)verticalAlignmentCenterPercentage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)imageWithName:(id)arg1 andColor:(id)arg2;
- (void)_commonInit;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

