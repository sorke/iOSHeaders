//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUTextBannerView : UIView
{
    UIImageView *_backgroundView;
    UILabel *_textLabel;
    _Bool _destructiveText;
    NSString *_text;
    long long _textAlignment;
}

@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic, getter=isDestructiveText) _Bool destructiveText; // @synthesize destructiveText=_destructiveText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

