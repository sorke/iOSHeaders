//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _UIFocusEngineScrollableContainerOffsets : NSObject
{
    id <UIFocusItemScrollableContainer> _scrollableContainer;
    id <UIScrollViewDelegate> _scrollDelegate;
    double _convergenceRate;
    CDUnknownBlockType _completion;
    struct CGPoint _lastContentOffset;
    struct CGPoint _targetContentOffset;
    struct CGPoint _lastVelocity;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) struct CGPoint lastVelocity; // @synthesize lastVelocity=_lastVelocity;
@property(nonatomic) double convergenceRate; // @synthesize convergenceRate=_convergenceRate;
@property(nonatomic) struct CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) id <UIScrollViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(retain, nonatomic) id <UIFocusItemScrollableContainer> scrollableContainer; // @synthesize scrollableContainer=_scrollableContainer;
- (void).cxx_destruct;

@end

