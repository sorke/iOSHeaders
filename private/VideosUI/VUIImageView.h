//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface VUIImageView : UIImageView
{
    _Bool _selected;
    UIImage *_flatImage;
    UIImage *_highlightOrSelectedImage;
}

@property(retain, nonatomic) UIImage *highlightOrSelectedImage; // @synthesize highlightOrSelectedImage=_highlightOrSelectedImage;
- (void).cxx_destruct;
- (void)_updateImage;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setImage:(id)arg1;

@end

