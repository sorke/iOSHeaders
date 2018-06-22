//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCNotificationRequest, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface NCNotificationSummaryBuilder : NSObject
{
    NCNotificationRequest *_leadingNotificationRequest;
    NSMutableArray *_notificationRequests;
    NSMutableOrderedSet *_formatStrings;
    NSMutableDictionary *_formatStringsCounts;
    NSMutableOrderedSet *_arguments;
    NSMutableDictionary *_argumentsCounts;
    unsigned long long _defaultFormatsCount;
    unsigned long long _emptyArgumentsCount;
    NSString *_summaryText;
}

@property(readonly, copy, nonatomic) NSString *summaryText; // @synthesize summaryText=_summaryText;
- (void).cxx_destruct;
- (void)_insertString:(id)arg1 intoSequence:(id)arg2 withCounters:(id)arg3;
- (id)_filteredArgumentsArrayWithArguments:(id)arg1;
- (id)_formatListWithArguments:(id)arg1;
- (id)_localizedSummaryWithFormat:(id)arg1 notificationsCount:(unsigned long long)arg2 arguments:(id)arg3;
- (id)_localizedSummaryWithFormats:(id)arg1 andCounts:(id)arg2;
- (id)_defaultLocalizedSummaryWithNotificationsCount:(unsigned long long)arg1 arguments:(id)arg2;
- (id)_defaultLocalizedSummaryWithNotificationsCount:(unsigned long long)arg1;
- (unsigned long long)_summaryNotificationsCount;
- (id)_buildSummaryText;
- (void)_updateSummaryText;
- (void)_addNotificationRequest:(id)arg1;
- (id)description;
- (void)updateWithNotificationRequests:(id)arg1;

@end

