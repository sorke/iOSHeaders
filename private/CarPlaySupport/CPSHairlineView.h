//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint;

@interface CPSHairlineView : UIView
{
    long long _axis;
    NSLayoutConstraint *_strokeThicknessConstraint;
}

+ (id)grayHairlineViewAlongAxis:(long long)arg1;
@property(retain, nonatomic) NSLayoutConstraint *strokeThicknessConstraint; // @synthesize strokeThicknessConstraint=_strokeThicknessConstraint;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (void)_updateStrokeThickness;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithAxis:(long long)arg1 color:(id)arg2;

@end

