//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthUI/HKMinMaxCoordinate.h>

@class NSArray;

@interface HKStackedBarCoordinate : HKMinMaxCoordinate
{
    NSArray *_stackPoints;
}

@property(copy, nonatomic) NSArray *stackPoints; // @synthesize stackPoints=_stackPoints;
- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithStackPoints:(id)arg1 userInfo:(id)arg2;

@end

