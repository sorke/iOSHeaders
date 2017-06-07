//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppSupportUI/NUIContainerView.h>

#import <AppSupportUI/_NUIGridArrangementContainer-Protocol.h>

@class NSMutableArray, NSString;
@protocol NUIContainerStackViewDelegate;

@interface NUIContainerStackView : NUIContainerView <_NUIGridArrangementContainer>
{
    NSMutableArray *_spacingViews;
    struct vector<double, std::__1::allocator<double>> _spacingAfter;
    struct _NUIGridArrangement _visibleArrangement;
    struct CGSize _visibleCount;
    struct {
        unsigned int delegateMinSpacing:1;
        unsigned int delegateAlignment:1;
    } _stackViewFlags;
    long long _axis;
    long long _distribution;
    long long _alignment;
    double _spacing;
    Class _spacingViewClass;
}

@property(retain, nonatomic) Class spacingViewClass; // @synthesize spacingViewClass=_spacingViewClass;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) long long distribution; // @synthesize distribution=_distribution;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)arrangedDescription;
- (_Bool)layoutArrangedSubviewsInBounds:(struct CGRect)arg1;
- (struct CGSize)calculateArrangedSizeFittingSize:(struct CGSize)arg1;
- (void)populateGridArrangementDimension:(vector_29d414c0 *)arg1 withCells:(const vector_f7a18e83 *)arg2 axis:(long long)arg3;
- (void)populateGridArrangementCells:(vector_f7a18e83 *)arg1;
- (long long)_effectiveAlignmentForArrangedSubview:(id)arg1;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)invalidateIntrinsicContentSizeRequiringArrangedSubviewRemeasurement:(_Bool)arg1;
- (void)setBaselineRelativeArrangement:(_Bool)arg1;
@property(nonatomic) __weak id <NUIContainerStackViewDelegate> delegate; // @dynamic delegate;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)_baselineViewVendForFirstBaseline:(_Bool)arg1;
- (void)dealloc;
- (id)initWithArrangedSubviews:(id)arg1;
- (double)spacingAfterArrangedSubviewAtIndex:(long long)arg1;
- (void)setSpacing:(double)arg1 afterArrangedSubviewAtIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
