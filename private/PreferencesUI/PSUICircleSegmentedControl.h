//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableArray, PSUICircleSegment, UIImage, UILabel, UIStackView;
@protocol PSUICircleSegmentedControlDelegate;

@interface PSUICircleSegmentedControl : UIControl
{
    NSMutableArray *_segmentPlaceholders;
    NSMutableArray *_segments;
    UIStackView *_stack;
    PSUICircleSegment *_selectedSegment;
    NSMutableArray *_segmentConstraints;
    NSMutableArray *_selectedSegmentConstraints;
    UIImage *_placeholderImage;
    UIImage *_buttonImage;
    UIImage *_highlightedImage;
    UIImage *_activeImage;
    id <PSUICircleSegmentedControlDelegate> _delegate;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak id <PSUICircleSegmentedControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectSegmentAtIndex:(unsigned long long)arg1;
- (void)segmentTapped:(id)arg1;
- (void)setSelectedSegmentIndex:(unsigned long long)arg1;
- (void)addSegmentWithTitle:(id)arg1;
- (void)setPositionConstraintsActive:(_Bool)arg1 forButtonAtIndex:(unsigned long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)menuButtonPressed;
- (id)init;
- (id)_circleImageWithColor:(id)arg1 fillColor:(id)arg2 diameter:(double)arg3;

@end
