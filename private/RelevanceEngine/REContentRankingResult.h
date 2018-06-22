//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface REContentRankingResult : NSObject
{
    _Bool _valid;
    int _unknownCount;
    double _positivePolarity;
    double _negativePolarity;
    double _unbiasedPositivePolarity;
    double _unbiasedNegativePolarity;
}

@property(nonatomic) double unbiasedNegativePolarity; // @synthesize unbiasedNegativePolarity=_unbiasedNegativePolarity;
@property(nonatomic) double unbiasedPositivePolarity; // @synthesize unbiasedPositivePolarity=_unbiasedPositivePolarity;
@property(nonatomic) int unknownCount; // @synthesize unknownCount=_unknownCount;
@property(nonatomic) double negativePolarity; // @synthesize negativePolarity=_negativePolarity;
@property(nonatomic) double positivePolarity; // @synthesize positivePolarity=_positivePolarity;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;

@end

