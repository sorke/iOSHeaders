//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AnnotationKit/AKAdornmentLayer.h>

@class CAShapeLayer;

@interface AKCropAdornmentLayer : AKAdornmentLayer
{
    CAShapeLayer *_handlesLayer;
}

@property(retain) CAShapeLayer *handlesLayer; // @synthesize handlesLayer=_handlesLayer;
- (void).cxx_destruct;
- (void)_removeHandles;
- (void)_updateHandles;
- (void)_addHandles;
- (_Bool)_shouldShowHandles;
- (void)updateSublayersWithScale:(double)arg1;
- (void)updateAdornmentElements;
- (_Bool)needsUpdateWhenDraggingStartsOrEnds;

@end

