//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UILabel;

@interface SVMoreFromButton : UIControl
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

