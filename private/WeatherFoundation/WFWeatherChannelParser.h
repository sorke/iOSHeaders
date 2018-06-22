//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WeatherFoundation/WFForecastDataParser.h>

#import "WFAirQualityDataParser.h"

@class NSCalendar, NSString;

__attribute__((visibility("hidden")))
@interface WFWeatherChannelParser : WFForecastDataParser <WFAirQualityDataParser>
{
    NSCalendar *_calendar;
}

+ (id)parseAirQualityData:(id)arg1 location:(id)arg2 locale:(id)arg3 error:(id *)arg4;
+ (unsigned long long)conditionFromWeatherChannelCode:(id)arg1;
+ (unsigned long long)pressureTrendFromWeatherChannelCode:(id)arg1;
+ (id)componentsForDailyForecasts;
+ (id)componentsForHourlyForecasts;
+ (id)componentsForCurrentForecast;
+ (unsigned long long)expectedDailyForecastCount;
+ (unsigned long long)expectedHourlyForecastCount;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (void).cxx_destruct;
- (id)dateComponentsForEpochDateNumber:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (void)parseCommonComponents:(id)arg1 data:(id)arg2;
- (id)parseCurrentCondition:(id)arg1 high:(id)arg2 low:(id)arg3;
- (id)parseHourlyForecasts:(id)arg1 date:(id)arg2;
- (id)parseDailyForecasts:(id)arg1 date:(id)arg2;
- (id)parseForecastData:(id)arg1 date:(id)arg2 error:(id *)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

