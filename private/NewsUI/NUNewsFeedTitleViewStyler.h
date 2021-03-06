//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUTitleViewStyler.h"

@class NSString, UIColor;

@interface NUNewsFeedTitleViewStyler : NSObject <NUTitleViewStyler>
{
    UIColor *_textColor;
    long long _textAlignment;
}

@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (id)titleParagraphStyleWithWrapping:(_Bool)arg1;
- (id)titleExtraLargeFont;
- (id)messageSmallFont;
- (id)messageLargeFont;
- (id)styleTextAsTitle:(id)arg1 boundingSize:(struct CGSize)arg2;
- (id)styleTextAsMessage:(id)arg1 boundingSize:(struct CGSize)arg2;
- (id)styleTitleText:(id)arg1 styleType:(unsigned long long)arg2 boundingSize:(struct CGSize)arg3;
- (void)updateWithTextColor:(id)arg1;
- (id)initWithTextColor:(id)arg1 textAlignment:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

