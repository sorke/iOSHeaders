//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary;

@interface _NTKPolygonCylinderTransformView : UIView
{
    unsigned long long _numberOfFaces;
    double _interiorAngle;
    double _exteriorAngle;
    NSMutableDictionary *_faceViews;
    double _faceDistanceToCenter;
}

+ (Class)layerClass;
@property(readonly, nonatomic) double faceDistanceToCenter; // @synthesize faceDistanceToCenter=_faceDistanceToCenter;
@property(readonly, nonatomic) unsigned long long numberOfFaces; // @synthesize numberOfFaces=_numberOfFaces;
- (void).cxx_destruct;
- (struct CATransform3D)_transformForFaceIndex:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) double rotationAnglePerFace;
- (void)enumerateFaceViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)viewForFaceAtIndex:(unsigned long long)arg1;
- (void)setView:(id)arg1 forFaceAtIndex:(unsigned long long)arg2;
- (id)initWithNumberOfFaces:(unsigned long long)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
