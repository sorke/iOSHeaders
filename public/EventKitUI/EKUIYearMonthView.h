//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EKCalendarDate, EKUIOverlayCalendarSignificantDatesProvider, NSCalendar, NSSet, NSString, UIColor, UIFont;

@interface EKUIYearMonthView : UIView
{
    EKCalendarDate *_endCalendarDate;
    NSString *_monthString;
    long long _firstDayIndex;
    long long _daysInWeek;
    long long _todayIndex;
    NSSet *_firstOfOverlayMonthIndices;
    NSSet *_firstOfOverlayYearIndices;
    NSCalendar *_calendar;
    _Bool _computeCircleFrameWithoutAdjustments;
    EKCalendarDate *_calendarDate;
    EKUIOverlayCalendarSignificantDatesProvider *_overlaySignificantDatesProvider;
    double _circleSizeForDoubleDigit;
}

+ (id)_defaultTextColor;
+ (double)heightForInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) _Bool computeCircleFrameWithoutAdjustments; // @synthesize computeCircleFrameWithoutAdjustments=_computeCircleFrameWithoutAdjustments;
@property(readonly, nonatomic) double circleSizeForDoubleDigit; // @synthesize circleSizeForDoubleDigit=_circleSizeForDoubleDigit;
@property(retain, nonatomic) EKUIOverlayCalendarSignificantDatesProvider *overlaySignificantDatesProvider; // @synthesize overlaySignificantDatesProvider=_overlaySignificantDatesProvider;
@property(retain, nonatomic) EKCalendarDate *calendarDate; // @synthesize calendarDate=_calendarDate;
- (void).cxx_destruct;
- (id)_imageForDayNumber:(id)arg1 size:(struct CGSize)arg2 underlineThickness:(double)arg3;
- (id)_weekDayInitialsImage;
- (id)_imageForMonthName:(id)arg1;
- (_Bool)isCurrentMonth;
- (void)_updateToday;
- (void)overlaySignificantDatesChangedInRange:(id)arg1;
- (void)_updateFirstOfMonthAndYearIndices;
- (void)_reloadCachedValues;
- (struct CGPoint)_monthNameOriginPoint;
@property(readonly, nonatomic) UIColor *dayColor;
@property(readonly, nonatomic) NSString *dayColorKey;
@property(readonly, nonatomic) double todayTextYAdjustment;
@property(readonly, nonatomic) double circleFrameYAdjustment;
@property(readonly, nonatomic) double circleFrameXAdjustment;
@property(readonly, nonatomic) _Bool vibrant;
@property(readonly, nonatomic) _Bool showMonthName;
@property(readonly, nonatomic) _Bool opaque;
@property(readonly, nonatomic) UIFont *weekDayInitialsFont;
@property(readonly, nonatomic) double weekDayInitialsAdjustTop;
@property(readonly, nonatomic) double weekDayInitialsAdjustLeft;
@property(readonly, nonatomic) _Bool showWeekDayInitials;
@property(readonly, nonatomic) double ySpacing;
@property(readonly, nonatomic) double xSpacing;
@property(readonly, nonatomic) double daysYAdjustTop;
@property(readonly, nonatomic) double daysXAdjustLeft;
- (struct CGSize)roundedRectSizeForDayNumberString:(id)arg1;
@property(readonly, nonatomic) double roundedRectCornerRadius;
@property(readonly, nonatomic) double circleSize;
@property(readonly, nonatomic) double todayTextSize;
@property(readonly, nonatomic) double dayTextSize;
@property(readonly, nonatomic) double todayNumberKerning;
@property(readonly, nonatomic) UIFont *todayNumberFont;
@property(readonly, nonatomic) double dayNumberKerning;
@property(readonly, nonatomic) UIFont *dayNumberFont;
@property(readonly, nonatomic) double headerFontKerning;
@property(readonly, nonatomic) UIFont *headerFont;
@property(readonly, nonatomic) double headerFontMinSize;
@property(readonly, nonatomic) double headerFontMaxSize;
@property(readonly, nonatomic) double headerXAdjust;
@property(readonly, nonatomic) double yInset;
@property(readonly, nonatomic) double xInset;
- (void)localeChanged;
- (_Bool)_shouldUseRoundedRectInsteadOfCircle;
- (id)monthString;
@property(readonly, nonatomic) long long daysInWeek;
@property(readonly, nonatomic) NSCalendar *calendar;
- (struct CGRect)frameForTodayHighlight;
- (void)pulseTodayCircle;
- (id)_todayAttributes;
- (void)_getTodayNumberTextFrame:(struct CGRect *)arg1 circleFrame:(struct CGRect *)arg2;
- (struct CGPoint)headerOrigin;
- (struct CGRect)frameForGridOfDays:(_Bool)arg1;
- (_Bool)containsCalendarDate:(id)arg1;
- (void)updateToday;
- (_Bool)pointIsAboveMonthNameBaseline:(struct CGPoint)arg1;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect)arg1;
- (id)description;
- (id)initWithCalendarDate:(id)arg1 calendar:(id)arg2;

@end
