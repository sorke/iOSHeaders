//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface IPAImageSizePolicy : NSObject <NSCoding>
{
}

+ (id)bestFitPolicyWithNominalShortSide:(long long)arg1 minLongSide:(long long)arg2 maxLongSide:(long long)arg3;
+ (id)largestPolicyWithPolicies:(id)arg1;
+ (id)bestFitPolicyWithEvenWidthTotalPixelCount:(long long)arg1;
+ (id)bestFitPolicyWithEvenTotalPixelCount:(long long)arg1;
+ (id)bestFitPolicyWithTotalPixelCount:(long long)arg1;
+ (id)bestFitPolicyThumbnail;
+ (id)bestFitPolicyWithHeight:(double)arg1;
+ (id)bestFitPolicyWithWidth:(double)arg1;
+ (id)bestFitPolicyShortestEdge:(double)arg1;
+ (id)bestFitPolicyInSquare:(double)arg1;
+ (id)bestFitPolicyInSize:(struct CGSize)arg1;
+ (id)scalePolicyWithScale:(double)arg1;
+ (id)originalSizePolicy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isOriginalSizePolicy;
- (_Bool)isBestFitPolicy;
- (double)transformScaleForSize:(struct CGSize)arg1;
- (struct PFIntSize_st)integralTransformSize:(struct CGSize)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;

@end

