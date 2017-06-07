//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSHashTable;
@protocol _MKStackViewDelegate;

__attribute__((visibility("hidden")))
@interface _MKStackView : UIView
{
    NSArray *_stackConstraints;
    NSHashTable *_viewsNeedingWidthConstraints;
    _Bool _bottomConstraintShouldBeGreaterThanOrEqual;
    id <_MKStackViewDelegate> _stackDelegate;
    NSArray *_stackedSubviews;
}

@property(nonatomic) _Bool bottomConstraintShouldBeGreaterThanOrEqual; // @synthesize bottomConstraintShouldBeGreaterThanOrEqual=_bottomConstraintShouldBeGreaterThanOrEqual;
@property(copy, nonatomic) NSArray *stackedSubviews; // @synthesize stackedSubviews=_stackedSubviews;
@property(nonatomic) __weak id <_MKStackViewDelegate> stackDelegate; // @synthesize stackDelegate=_stackDelegate;
- (void).cxx_destruct;
- (void)addSubview:(id)arg1;
- (void)updateConstraints;
- (void)setStackedSubviews:(id)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
