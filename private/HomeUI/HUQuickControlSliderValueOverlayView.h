//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface HUQuickControlSliderValueOverlayView : UIView
{
    _Bool _off;
    _Bool _showsSecondGrabber;
    unsigned long long _primaryGrabberLocation;
}

+ (Class)layerClass;
@property(nonatomic) unsigned long long primaryGrabberLocation; // @synthesize primaryGrabberLocation=_primaryGrabberLocation;
@property(nonatomic) _Bool showsSecondGrabber; // @synthesize showsSecondGrabber=_showsSecondGrabber;
@property(nonatomic, getter=isOff) _Bool off; // @synthesize off=_off;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)layoutSubviews;
- (void)_updateBlendMode;
- (void)_updateShape;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) CAShapeLayer *layer; // @dynamic layer;

@end
