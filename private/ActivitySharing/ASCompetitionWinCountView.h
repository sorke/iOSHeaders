//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ASCompetitionScoreViewConfiguration, UIColor, UIFont, UIImage, UIImageView, UILabel;

@interface ASCompetitionWinCountView : UIView
{
    UIImageView *_backgroundView;
    UILabel *_winCountLabel;
    ASCompetitionScoreViewConfiguration *_configuration;
    unsigned long long _winCount;
    struct CGSize _preferredSize;
}

@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(nonatomic) unsigned long long winCount; // @synthesize winCount=_winCount;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) UIImage *backgroundImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithConfiguration:(id)arg1;

@end

