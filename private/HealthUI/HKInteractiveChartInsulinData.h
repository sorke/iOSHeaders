//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKGraphSeriesChartData.h"

@class NSString;

@interface HKInteractiveChartInsulinData : NSObject <HKGraphSeriesChartData>
{
    double _basalValue;
    double _totalValue;
}

@property(nonatomic) double totalValue; // @synthesize totalValue=_totalValue;
@property(nonatomic) double basalValue; // @synthesize basalValue=_basalValue;
@property(readonly, nonatomic) double bolusValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

