//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PrototypeTools/PTSRow.h>

@interface PTSliderRow : PTSRow
{
    double _minValue;
    double _maxValue;
}

@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
- (id)init;
- (id)minValue:(double)arg1 maxValue:(double)arg2;

@end

