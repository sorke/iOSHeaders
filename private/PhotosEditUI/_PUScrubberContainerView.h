//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface _PUScrubberContainerView : UIView
{
    double __edgeInset;
    UIView *__movieScrubber;
    UIView *__slomoRegionEditor;
}

@property(retain, nonatomic, setter=_setSlomoRegionEditor:) UIView *_slomoRegionEditor; // @synthesize _slomoRegionEditor=__slomoRegionEditor;
@property(retain, nonatomic, setter=_setMovieScrubber:) UIView *_movieScrubber; // @synthesize _movieScrubber=__movieScrubber;
@property(nonatomic, setter=_setEdgeInset:) double _edgeInset; // @synthesize _edgeInset=__edgeInset;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;

@end

