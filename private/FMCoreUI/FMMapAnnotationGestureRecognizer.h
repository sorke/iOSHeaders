//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface FMMapAnnotationGestureRecognizer : UIGestureRecognizer
{
    id <FMMapAnnotationGestureRecognizerDelegate> _touchDelegate;
}

@property(nonatomic) id <FMMapAnnotationGestureRecognizerDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)init;

@end

