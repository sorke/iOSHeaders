//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AvatarUI/AVTAttributeValueView.h>

@class NSArray, UIView;

@interface AVTColorWheelView : AVTAttributeValueView
{
    UIView *_containerView;
    NSArray *_circleViews;
}

+ (id)colorItemsFrom:(id)arg1 excluding:(id)arg2;
+ (_Bool)colorItems:(id)arg1 containColorItem:(id)arg2;
+ (id)buildCircleViewWithDiameter:(double)arg1;
@property(retain, nonatomic) NSArray *circleViews; // @synthesize circleViews=_circleViews;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)updateWithPrimaryItems:(id)arg1 extendedItems:(id)arg2;
- (struct CGPoint)rotatePoint:(struct CGPoint)arg1 aroundCenter:(struct CGPoint)arg2 withAngle:(double)arg3;
- (id)buildAllCircleViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

