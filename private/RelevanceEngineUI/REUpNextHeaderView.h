//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSAttributedString, UIColor, UILabel;

@interface REUpNextHeaderView : UICollectionReusableView
{
    UILabel *_label;
    NSAttributedString *_attributedText;
}

+ (void)initialize;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *textColor;
@property(nonatomic) long long textAlignment;
- (id)initWithFrame:(struct CGRect)arg1;

@end

