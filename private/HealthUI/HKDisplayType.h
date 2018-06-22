//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class HKDisplayCategory, HKDisplayTypeChartingRules, HKObjectType, HKSampleType, HKValueRange, NSAttributedString, NSDictionary, NSPredicate, NSSet, NSString, UIImage;

@interface HKDisplayType : NSObject <NSCopying>
{
    NSPredicate *_defaultChartingPredicate;
    NSDictionary *_chartingPredicatesByTimeScope;
    unsigned long long _portraitPresentationOptions;
    NSDictionary *_portraitPresentationOptionOverrides;
    NSString *_displayNameKey;
    NSString *_labelDisplayNameKey;
    NSString *_shortenedDisplayNameKey;
    NSString *_embeddedDisplayNameKey;
    NSString *_titleEmbeddedDisplayNameKey;
    NSString *_keywordsNameKey;
    NSString *_summaryNameKey;
    NSString *_summaryPairedWatchNameKey;
    NSString *_cautionaryTextKey;
    NSString *_unitChangeCautionaryTextKey;
    NSString *_healthKitLocalizationTableNameOverride;
    NSString *_listIconImageNameOverride;
    UIImage *_listIconOverride;
    _Bool _summaryAttributionHasLink;
    _Bool _showAllDataHierarchically;
    _Bool _shouldDisplayUnitStringOnYAxis;
    _Bool _disallowsSourceReordering;
    _Bool _excludeFromDataTypeSearch;
    _Bool _shouldUseSingleSecondaryValue;
    _Bool __wheelchairUser;
    long long _displayTypeIdentifier;
    long long _categoryIdentifier;
    double _scalarValue;
    NSDictionary *_unitNameKeyOverrides;
    UIImage *_detailImage;
    NSAttributedString *_attributedSummaryAttribution;
    HKDisplayTypeChartingRules *_chartingRules;
    unsigned long long _statisticsMergeStrategy;
    HKValueRange *_defaultAxisRangeOverride;
    HKObjectType *_objectType;
}

@property(getter=_isWheelchairUser, setter=_setWheelchairUser:) _Bool _wheelchairUser; // @synthesize _wheelchairUser=__wheelchairUser;
@property(readonly, nonatomic) HKObjectType *objectType; // @synthesize objectType=_objectType;
@property(readonly, nonatomic) _Bool shouldUseSingleSecondaryValue; // @synthesize shouldUseSingleSecondaryValue=_shouldUseSingleSecondaryValue;
@property(readonly, nonatomic) _Bool excludeFromDataTypeSearch; // @synthesize excludeFromDataTypeSearch=_excludeFromDataTypeSearch;
@property(retain, nonatomic) HKValueRange *defaultAxisRangeOverride; // @synthesize defaultAxisRangeOverride=_defaultAxisRangeOverride;
@property(readonly, nonatomic) unsigned long long statisticsMergeStrategy; // @synthesize statisticsMergeStrategy=_statisticsMergeStrategy;
@property(readonly, nonatomic) _Bool disallowsSourceReordering; // @synthesize disallowsSourceReordering=_disallowsSourceReordering;
@property(nonatomic) _Bool shouldDisplayUnitStringOnYAxis; // @synthesize shouldDisplayUnitStringOnYAxis=_shouldDisplayUnitStringOnYAxis;
@property(readonly, nonatomic) HKDisplayTypeChartingRules *chartingRules; // @synthesize chartingRules=_chartingRules;
@property(readonly, nonatomic) _Bool showAllDataHierarchically; // @synthesize showAllDataHierarchically=_showAllDataHierarchically;
@property(readonly, nonatomic) _Bool summaryAttributionHasLink; // @synthesize summaryAttributionHasLink=_summaryAttributionHasLink;
@property(readonly, nonatomic) NSAttributedString *attributedSummaryAttribution; // @synthesize attributedSummaryAttribution=_attributedSummaryAttribution;
@property(readonly, nonatomic) UIImage *detailImage; // @synthesize detailImage=_detailImage;
@property(readonly, nonatomic) NSDictionary *unitNameKeyOverrides; // @synthesize unitNameKeyOverrides=_unitNameKeyOverrides;
@property(readonly, nonatomic) double scalarValue; // @synthesize scalarValue=_scalarValue;
@property(readonly, nonatomic) long long categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(readonly, nonatomic) long long displayTypeIdentifier; // @synthesize displayTypeIdentifier=_displayTypeIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long roundingMode;
@property(readonly, nonatomic) NSString *localizationTableNameOverride;
@property(readonly, nonatomic) NSString *unitChangeCautionaryText;
@property(readonly, nonatomic) NSString *cautionaryText;
@property(readonly, nonatomic) NSString *summaryForPairedWatch;
@property(readonly, nonatomic) NSString *summary;
@property(readonly, nonatomic) NSString *titleEmbeddedDisplayName;
@property(readonly, nonatomic) NSString *embeddedDisplayName;
@property(readonly, nonatomic) NSString *shortenedDisplayName;
@property(readonly, nonatomic) NSSet *keywords;
@property(readonly, nonatomic) NSString *labelDisplayName;
@property(readonly, nonatomic) NSString *displayName;
- (id)_rawLocalizedStringForKey:(id)arg1;
- (id)_localizedStringWithKey:(id)arg1;
@property(readonly, nonatomic) _Bool canBecomeFavorite;
@property(readonly, nonatomic) HKDisplayCategory *displayCategory;
@property(readonly, nonatomic) _Bool anyPortraitChartDefinition;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) _Bool supportsAssociatedSamples;
@property(readonly, nonatomic) _Bool unitPreferencesRequireChangeConfirmation;
@property(readonly, nonatomic) NSString *listIconImageName;
@property(readonly, nonatomic) UIImage *listIcon;
@property(readonly, nonatomic) UIImage *shareIcon;
@property(readonly, nonatomic) UIImage *displayTypeIcon;
@property(readonly, nonatomic) UIImage *unitIcon;
- (_Bool)_isActivitySummary;
- (_Bool)_isNikeFuel;
@property(readonly, nonatomic) _Bool allowsManualEntry;
@property(readonly, nonatomic) _Bool isDocument;
@property(readonly, nonatomic) _Bool isActivitySummary;
@property(readonly, nonatomic) _Bool isCharacteristic;
@property(readonly, nonatomic) HKSampleType *recordSampleType;
@property(readonly, nonatomic) HKSampleType *sampleType;
- (unsigned long long)presentationOptionsForTimeScope:(long long)arg1;
- (id)chartingPredicateForTimeScope:(long long)arg1;
- (id)defaultValuePredicate;
- (id)defaultDataRange;
- (id)colorWithDisplayCategoryController:(id)arg1;
- (id)unitNameForValue:(id)arg1 unitPreferenceController:(id)arg2;
- (id)adjustedValueForClientValue:(id)arg1;
- (id)adjustedValueForDaemonValue:(id)arg1;
- (id)unitDisplayNameKeyOverrideForUnit:(id)arg1;
- (void)_applyChartingProperties:(id)arg1;
- (void)_applySummaryAndAttributionPropertiesWithDictionary:(id)arg1;
- (void)_applyTextualPropertiesWithDictionary:(id)arg1 displayNameKey:(id)arg2;
- (void)_applyScalarValue:(id)arg1;
- (id)init;
- (id)initFromDictionary:(id)arg1;
- (id)hk_numberFormatterForUnit:(id)arg1 formattingContext:(long long)arg2;
- (id)hk_numberFormatterForUnit:(id)arg1;
- (id)hk_enumeratedValueLabels;
- (id)hk_interactiveChartsDataSourceForTimeScope:(long long)arg1 healthStore:(id)arg2 unitController:(id)arg3;
- (id)_dataSourceForQuantityType:(id)arg1 timeScope:(long long)arg2 unitController:(id)arg3 healthStore:(id)arg4;
- (id)_heartRateHistogramDataSourceWithHealthStore:(id)arg1;
- (id)_insulinDataSourceWithHealthStore:(id)arg1;
- (id)_bloodPressureDataSourceWithHealthStore:(id)arg1;
- (id)_countDataSourceWithHealthStore:(id)arg1;
- (id)_dataSourceForWorkoutsWithTimeScope:(long long)arg1 healthStore:(id)arg2;
- (id)_singleCenteredLineDataSourceForCategoryType:(id)arg1 timeScope:(long long)arg2 healthStore:(id)arg3 displayTypeIdentifier:(long long)arg4;
- (id)_levelCategoryValuesDataSourceForCategoryType:(id)arg1 timeScope:(long long)arg2 healthStore:(id)arg3 displayIdentifier:(long long)arg4;
- (id)_stackedDataSourceForCategoryType:(id)arg1 timeScope:(long long)arg2 healthStore:(id)arg3;
- (id)_timePeriodDisplayPrefix;
- (id)_dailySleepSeriesDataSourceForSampleType:(id)arg1 timeScope:(long long)arg2 healthStore:(id)arg3;
- (id)_timePeriodDataSourceForSampleType:(id)arg1 timeScope:(long long)arg2 healthStore:(id)arg3;
- (CDUnknownBlockType)_singleValueUserInfoBlockWithUnitController:(id)arg1 displayType:(id)arg2 statisticsOption:(unsigned long long)arg3;
- (CDUnknownBlockType)_minMaxUserInfoBlockWithUnitController:(id)arg1 displayType:(id)arg2;
- (CDUnknownBlockType)_bloodPressureUserInfoBlock;
- (id)hk_standardSeriesForTimeScope:(long long)arg1 displayCategory:(id)arg2 unitController:(id)arg3 dataCacheController:(id)arg4 displayCategoryController:(id)arg5;
- (id)_generateGraphSeriesForTimeScope:(long long)arg1 displayCategory:(id)arg2;
- (id)_generateDistributionSeriesWithColor:(id)arg1;
- (id)_generateLevelCategorySeriesWithColor:(id)arg1;
- (id)_generateSingleLineSeriesWithColor:(id)arg1 timeScope:(long long)arg2;
- (id)_generateStackedSeriesWithColor:(id)arg1;
- (id)_generateScatterPlotSeriesWithColor:(id)arg1;
- (id)_generateLineSeriesWithColor:(id)arg1 timeScope:(long long)arg2;
- (id)_generateInsulinBarSeriesWithDisplayCategory:(id)arg1;
- (id)_generateDailySleepSeriesWithColor:(id)arg1;
- (id)_generateBarSeriesWithFillStyle:(id)arg1;
- (id)_generateMinMaxSeriesWithColor:(id)arg1;
- (id)_generateBloodPressureSeriesWithColor:(id)arg1;
- (id)_dataSourceForTimeScope:(long long)arg1 dataCacheController:(id)arg2;
- (id)_hk_numberFormatterForCharting;
- (id)_hk_defaultChartAxisBoundStringFromValue:(id)arg1 defaultNumberFormatter:(id)arg2 unitController:(id)arg3;
- (id)hk_interactiveChartAxisStringFromValue:(id)arg1 defaultNumberFormatter:(id)arg2 unitController:(id)arg3;
- (id)hk_dashboardChartBoundStringFromValue:(id)arg1 defaultNumberFormatter:(id)arg2 unitController:(id)arg3;
- (CDUnknownBlockType)hk_startOfDayTransform;
- (unsigned long long)hk_chartCalendarUnitForTimeScope:(long long)arg1;
- (id)hk_customSeriesPointIntervalComponentsForTimeScope:(long long)arg1;
- (_Bool)hk_interactiveChartsDataSourceDependsOnTimeScope;
- (id)hk_valueOrderForStackedCharts;
- (id)_dimensionForChartAxisWithUnitController:(id)arg1;
- (id)_statFormatterItemOptionsForQuantityType:(id)arg1 timeScope:(long long)arg2;
- (id)hk_interactiveChartsFormatterForTimeScope:(long long)arg1;
- (id)hk_valueFormatterForUnit:(id)arg1 formattingContext:(long long)arg2;
- (id)hk_valueFormatterForUnit:(id)arg1;

@end

