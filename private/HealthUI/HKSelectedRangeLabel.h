//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface HKSelectedRangeLabel : UILabel
{
    struct UIEdgeInsets _padding;
}

+ (id)_stringForSelectedRangeData:(id)arg1;
+ (id)attributedStringForSelectedRangeData:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3 prefersImageAffixes:(_Bool)arg4;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void)setSelectedRangeData:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)init;

@end

