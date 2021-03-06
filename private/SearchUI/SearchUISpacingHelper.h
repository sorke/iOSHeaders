//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUIArrangementItem.h"

@class NSString;

@interface SearchUISpacingHelper : NSObject <NUIArrangementItem>
{
    double _compressionResistance;
    struct CGRect _frame;
}

+ (double)idealHorizontalSpacingBetweenIcons;
@property double compressionResistance; // @synthesize compressionResistance=_compressionResistance;
@property struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy) NSString *description;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

