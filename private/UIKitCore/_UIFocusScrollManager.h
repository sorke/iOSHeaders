//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, UIScreen, _UIFocusDisplayLinkScrollAnimator;

__attribute__((visibility("hidden")))
@interface _UIFocusScrollManager : NSObject
{
    UIScreen *_screen;
    _UIFocusDisplayLinkScrollAnimator *_scrollAnimator;
    NSHashTable *_activelyScrollingContainers;
}

@property(readonly, nonatomic) NSHashTable *activelyScrollingContainers; // @synthesize activelyScrollingContainers=_activelyScrollingContainers;
@property(readonly, nonatomic) _UIFocusDisplayLinkScrollAnimator *scrollAnimator; // @synthesize scrollAnimator=_scrollAnimator;
@property(readonly, nonatomic) __weak UIScreen *screen; // @synthesize screen=_screen;
- (void).cxx_destruct;
- (struct CGPoint)_contentOffsetForScrollableContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2 itemFrame:(struct CGRect)arg3 targetOffset:(struct CGPoint)arg4 targetBounds:(struct CGRect)arg5;
- (struct CGPoint)_contentOffsetForScrollableContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2;
- (struct CGPoint)contentOffsetForScrollableContainer:(id)arg1 toShowRect:(struct CGRect)arg2 targetOffset:(struct CGPoint)arg3 targetBounds:(struct CGRect)arg4;
- (struct CGPoint)contentOffsetForScrollableContainer:(id)arg1 toShowFocusItem:(id)arg2 targetOffset:(struct CGPoint)arg3 targetBounds:(struct CGRect)arg4;
- (void)_ensureFocusItemIsOnscreen:(id)arg1 inScrollableContainer:(id)arg2;
- (void)_scrollToFocusItemWithInfo:(id)arg1 offset:(struct CGPoint)arg2 inScrollableContainer:(id)arg3;
- (void)animateOffsetOfScrollableContainer:(id)arg1 toShowFocusItem:(id)arg2;
- (struct CGPoint)currentVelocityForScrollableContainer:(id)arg1;
- (struct CGPoint)targetContentOffsetForScrollableContainer:(id)arg1;
- (void)cancelScrollingForScrollableContainer:(id)arg1;
- (_Bool)isScrollingScrollableContainer:(id)arg1;
- (void)performScrollingIfNeededForFocusUpdateInContext:(id)arg1;
- (id)initWithScreen:(id)arg1;

@end

