//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint;

@interface CPSHairlineBorderedView : UIView
{
    UIView *_contentView;
    NSLayoutConstraint *_bottomConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (id)initWithContentView:(id)arg1 borderEdges:(unsigned long long)arg2;

@end

