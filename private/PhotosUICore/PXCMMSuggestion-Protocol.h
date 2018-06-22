//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "PXMediaTypeAggregating.h"

@class NSDate, NSString, PXCMMContext;

@protocol PXCMMSuggestion <NSObject, PXMediaTypeAggregating>
@property(readonly, nonatomic) id <PXPeopleFetchResult> peopleFetchResult;
@property(readonly, nonatomic) id <PXUIImageProvider> posterMediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> posterAsset;
@property(readonly, nonatomic) long long count;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *identifier;
- (id)diagnosticsItem;
- (void)decline;
- (void)markAsActiveIfNeeded;
- (PXCMMContext *)contextForActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
@end

