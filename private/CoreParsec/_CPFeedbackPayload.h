//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPFeedbackPayload.h"

@class NSData, NSString, PBCodable<_CPProcessableFeedback>, _CPCBAEngagementFeedback, _CPCacheHitFeedback, _CPCardSectionEngagementFeedback, _CPCardSectionFeedback, _CPCardViewAppearFeedback, _CPCardViewDisappearFeedback, _CPClearInputFeedback, _CPClientTimingFeedback, _CPConnectionInvalidatedFeedback, _CPCustomFeedback, _CPDidGoToSearchFeedback, _CPDidGoToSiteFeedback, _CPEndLocalSearchFeedback, _CPEndNetworkSearchFeedback, _CPEndSearchFeedback, _CPErrorFeedback, _CPFeedback, _CPLateSectionsAppendedFeedback, _CPLookupHintRelevancyFeedback, _CPMapsCardSectionEngagementFeedback, _CPRankingFeedback, _CPResultEngagementFeedback, _CPResultFeedback, _CPResultGradingFeedback, _CPResultRankingFeedback, _CPResultsReceivedAfterTimeoutFeedback, _CPSearchViewAppearFeedback, _CPSearchViewDisappearFeedback, _CPSectionEngagementFeedback, _CPSectionRankingFeedback, _CPSessionEndFeedback, _CPSessionMissingResultsFeedback, _CPSessionMissingSuggestionsFeedback, _CPSkipSearchFeedback, _CPStartLocalSearchFeedback, _CPStartNetworkSearchFeedback, _CPStartSearchFeedback, _CPStoreCardSectionEngagementFeedback, _CPSuggestionEngagementFeedback, _CPVisibleResultsFeedback, _CPVisibleSectionHeaderFeedback, _CPVisibleSuggestionsFeedback;

@interface _CPFeedbackPayload : PBCodable <_CPFeedbackPayload, NSSecureCoding>
{
    _CPFeedback *_feedback;
    _CPSearchViewAppearFeedback *_searchViewAppearFeedback;
    _CPSearchViewDisappearFeedback *_searchViewDisappearFeedback;
    _CPRankingFeedback *_rankingFeedback;
    _CPSectionRankingFeedback *_sectionRankingFeedback;
    _CPResultRankingFeedback *_resultRankingFeedback;
    _CPResultFeedback *_resultFeedback;
    _CPResultEngagementFeedback *_resultEngagementFeedback;
    _CPVisibleResultsFeedback *_visibleResultsFeedback;
    _CPCardSectionFeedback *_cardSectionFeedback;
    _CPMapsCardSectionEngagementFeedback *_mapsCardSectionEngagementFeedback;
    _CPStoreCardSectionEngagementFeedback *_storeCardSectionEngagementFeedback;
    _CPStartSearchFeedback *_startSearchFeedback;
    _CPEndSearchFeedback *_endSearchFeedback;
    _CPStartNetworkSearchFeedback *_startNetworkSearchFeedback;
    _CPEndNetworkSearchFeedback *_endNetworkSearchFeedback;
    _CPStartLocalSearchFeedback *_startLocalSearchFeedback;
    _CPEndLocalSearchFeedback *_endLocalSearchFeedback;
    _CPErrorFeedback *_errorFeedback;
    _CPCustomFeedback *_customFeedback;
    _CPSuggestionEngagementFeedback *_suggestionEngagementFeedback;
    _CPCardViewDisappearFeedback *_cardViewDisappearFeedback;
    _CPVisibleSuggestionsFeedback *_visibleSuggestionsFeedback;
    _CPResultsReceivedAfterTimeoutFeedback *_resultsReceivedAfterTimeoutFeedback;
    _CPLateSectionsAppendedFeedback *_lateSectionsAppendedFeedback;
    _CPClearInputFeedback *_clearInputFeedback;
    _CPSectionEngagementFeedback *_sectionEngagementFeedback;
    _CPVisibleSectionHeaderFeedback *_visibleSectionHeaderFeedback;
    _CPDidGoToSiteFeedback *_didGoToSiteFeedback;
    _CPDidGoToSearchFeedback *_didGoToSearchFeedback;
    _CPSessionMissingResultsFeedback *_sessionMissingResultsFeedback;
    _CPSessionMissingSuggestionsFeedback *_sessionMissingSuggestionsFeedback;
    _CPResultGradingFeedback *_resultGradingFeedback;
    _CPLookupHintRelevancyFeedback *_lookupHintRelevancyFeedback;
    _CPConnectionInvalidatedFeedback *_connectionInvalidatedFeedback;
    _CPCardSectionEngagementFeedback *_cardSectionEngagementFeedback;
    _CPSessionEndFeedback *_sessionEndFeedback;
    _CPCardViewAppearFeedback *_cardViewAppearFeedback;
    _CPSkipSearchFeedback *_skipSearchFeedback;
    _CPCacheHitFeedback *_cacheHitFeedback;
    _CPCBAEngagementFeedback *_cbaEngagementFeedback;
    _CPClientTimingFeedback *_clientTimingFeedback;
    unsigned long long _queryId;
    unsigned long long _whichContained_Feedback;
}

@property(readonly, nonatomic) unsigned long long whichContained_Feedback; // @synthesize whichContained_Feedback=_whichContained_Feedback;
@property(nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(retain, nonatomic) _CPClientTimingFeedback *clientTimingFeedback; // @synthesize clientTimingFeedback=_clientTimingFeedback;
@property(retain, nonatomic) _CPCBAEngagementFeedback *cbaEngagementFeedback; // @synthesize cbaEngagementFeedback=_cbaEngagementFeedback;
@property(retain, nonatomic) _CPCacheHitFeedback *cacheHitFeedback; // @synthesize cacheHitFeedback=_cacheHitFeedback;
@property(retain, nonatomic) _CPSkipSearchFeedback *skipSearchFeedback; // @synthesize skipSearchFeedback=_skipSearchFeedback;
@property(retain, nonatomic) _CPCardViewAppearFeedback *cardViewAppearFeedback; // @synthesize cardViewAppearFeedback=_cardViewAppearFeedback;
@property(retain, nonatomic) _CPSessionEndFeedback *sessionEndFeedback; // @synthesize sessionEndFeedback=_sessionEndFeedback;
@property(retain, nonatomic) _CPCardSectionEngagementFeedback *cardSectionEngagementFeedback; // @synthesize cardSectionEngagementFeedback=_cardSectionEngagementFeedback;
@property(retain, nonatomic) _CPConnectionInvalidatedFeedback *connectionInvalidatedFeedback; // @synthesize connectionInvalidatedFeedback=_connectionInvalidatedFeedback;
@property(retain, nonatomic) _CPLookupHintRelevancyFeedback *lookupHintRelevancyFeedback; // @synthesize lookupHintRelevancyFeedback=_lookupHintRelevancyFeedback;
@property(retain, nonatomic) _CPResultGradingFeedback *resultGradingFeedback; // @synthesize resultGradingFeedback=_resultGradingFeedback;
@property(retain, nonatomic) _CPSessionMissingSuggestionsFeedback *sessionMissingSuggestionsFeedback; // @synthesize sessionMissingSuggestionsFeedback=_sessionMissingSuggestionsFeedback;
@property(retain, nonatomic) _CPSessionMissingResultsFeedback *sessionMissingResultsFeedback; // @synthesize sessionMissingResultsFeedback=_sessionMissingResultsFeedback;
@property(retain, nonatomic) _CPDidGoToSearchFeedback *didGoToSearchFeedback; // @synthesize didGoToSearchFeedback=_didGoToSearchFeedback;
@property(retain, nonatomic) _CPDidGoToSiteFeedback *didGoToSiteFeedback; // @synthesize didGoToSiteFeedback=_didGoToSiteFeedback;
@property(retain, nonatomic) _CPVisibleSectionHeaderFeedback *visibleSectionHeaderFeedback; // @synthesize visibleSectionHeaderFeedback=_visibleSectionHeaderFeedback;
@property(retain, nonatomic) _CPSectionEngagementFeedback *sectionEngagementFeedback; // @synthesize sectionEngagementFeedback=_sectionEngagementFeedback;
@property(retain, nonatomic) _CPClearInputFeedback *clearInputFeedback; // @synthesize clearInputFeedback=_clearInputFeedback;
@property(retain, nonatomic) _CPLateSectionsAppendedFeedback *lateSectionsAppendedFeedback; // @synthesize lateSectionsAppendedFeedback=_lateSectionsAppendedFeedback;
@property(retain, nonatomic) _CPResultsReceivedAfterTimeoutFeedback *resultsReceivedAfterTimeoutFeedback; // @synthesize resultsReceivedAfterTimeoutFeedback=_resultsReceivedAfterTimeoutFeedback;
@property(retain, nonatomic) _CPVisibleSuggestionsFeedback *visibleSuggestionsFeedback; // @synthesize visibleSuggestionsFeedback=_visibleSuggestionsFeedback;
@property(retain, nonatomic) _CPCardViewDisappearFeedback *cardViewDisappearFeedback; // @synthesize cardViewDisappearFeedback=_cardViewDisappearFeedback;
@property(retain, nonatomic) _CPSuggestionEngagementFeedback *suggestionEngagementFeedback; // @synthesize suggestionEngagementFeedback=_suggestionEngagementFeedback;
@property(retain, nonatomic) _CPCustomFeedback *customFeedback; // @synthesize customFeedback=_customFeedback;
@property(retain, nonatomic) _CPErrorFeedback *errorFeedback; // @synthesize errorFeedback=_errorFeedback;
@property(retain, nonatomic) _CPEndLocalSearchFeedback *endLocalSearchFeedback; // @synthesize endLocalSearchFeedback=_endLocalSearchFeedback;
@property(retain, nonatomic) _CPStartLocalSearchFeedback *startLocalSearchFeedback; // @synthesize startLocalSearchFeedback=_startLocalSearchFeedback;
@property(retain, nonatomic) _CPEndNetworkSearchFeedback *endNetworkSearchFeedback; // @synthesize endNetworkSearchFeedback=_endNetworkSearchFeedback;
@property(retain, nonatomic) _CPStartNetworkSearchFeedback *startNetworkSearchFeedback; // @synthesize startNetworkSearchFeedback=_startNetworkSearchFeedback;
@property(retain, nonatomic) _CPEndSearchFeedback *endSearchFeedback; // @synthesize endSearchFeedback=_endSearchFeedback;
@property(retain, nonatomic) _CPStartSearchFeedback *startSearchFeedback; // @synthesize startSearchFeedback=_startSearchFeedback;
@property(retain, nonatomic) _CPStoreCardSectionEngagementFeedback *storeCardSectionEngagementFeedback; // @synthesize storeCardSectionEngagementFeedback=_storeCardSectionEngagementFeedback;
@property(retain, nonatomic) _CPMapsCardSectionEngagementFeedback *mapsCardSectionEngagementFeedback; // @synthesize mapsCardSectionEngagementFeedback=_mapsCardSectionEngagementFeedback;
@property(retain, nonatomic) _CPCardSectionFeedback *cardSectionFeedback; // @synthesize cardSectionFeedback=_cardSectionFeedback;
@property(retain, nonatomic) _CPVisibleResultsFeedback *visibleResultsFeedback; // @synthesize visibleResultsFeedback=_visibleResultsFeedback;
@property(retain, nonatomic) _CPResultEngagementFeedback *resultEngagementFeedback; // @synthesize resultEngagementFeedback=_resultEngagementFeedback;
@property(retain, nonatomic) _CPResultFeedback *resultFeedback; // @synthesize resultFeedback=_resultFeedback;
@property(retain, nonatomic) _CPResultRankingFeedback *resultRankingFeedback; // @synthesize resultRankingFeedback=_resultRankingFeedback;
@property(retain, nonatomic) _CPSectionRankingFeedback *sectionRankingFeedback; // @synthesize sectionRankingFeedback=_sectionRankingFeedback;
@property(retain, nonatomic) _CPRankingFeedback *rankingFeedback; // @synthesize rankingFeedback=_rankingFeedback;
@property(retain, nonatomic) _CPSearchViewDisappearFeedback *searchViewDisappearFeedback; // @synthesize searchViewDisappearFeedback=_searchViewDisappearFeedback;
@property(retain, nonatomic) _CPSearchViewAppearFeedback *searchViewAppearFeedback; // @synthesize searchViewAppearFeedback=_searchViewAppearFeedback;
@property(retain, nonatomic) _CPFeedback *feedback; // @synthesize feedback=_feedback;
@property(readonly, nonatomic) PBCodable<_CPProcessableFeedback> *codable;
@property(readonly, nonatomic) int type;
- (id)initWithCodable:(id)arg1;
- (id)initWithFeedback:(id)arg1;
- (_Bool)requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

