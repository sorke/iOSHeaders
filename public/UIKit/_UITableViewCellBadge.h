//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITableViewCellBadge : UIView
{
    _Bool _isSelected;
    NSString *_text;
    struct CGSize _textSize;
}

@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_isSelected;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setIsSelected:(_Bool)arg1;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)_sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
