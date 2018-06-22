//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TemplateKit/TLKView.h>

@class TLKMultilineText, TLKVibrantLabel, UILabel;

@interface TLKEnlargedTitleView : TLKView
{
    TLKMultilineText *_title;
    TLKMultilineText *_subtitle;
    UILabel *_titleLabel;
    TLKVibrantLabel *_subtitleLabel;
}

@property(retain) TLKVibrantLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TLKMultilineText *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) TLKMultilineText *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)subtitleLabelText;
- (id)titleLabelText;
- (void)observedPropertiesChanged;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)init;

@end

