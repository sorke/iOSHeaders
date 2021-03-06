//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UITapGestureRecognizer, UIView;

@interface HKOutsideViewTapDetector : NSObject <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_recognizer;
    UIView *_view;
    CDUnknownBlockType _outsideTapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType outsideTapBlock; // @synthesize outsideTapBlock=_outsideTapBlock;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) UITapGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTap:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 outsideTapBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

