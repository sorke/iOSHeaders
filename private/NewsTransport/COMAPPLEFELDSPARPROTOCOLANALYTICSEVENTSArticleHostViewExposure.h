//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSWidgetEngagement, NSData, NSMutableArray, NSString;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSArticleHostViewExposure : PBCodable <NSCopying>
{
    double _agedPersonalizationScore;
    double _agedUserFeedbackScore;
    double _autoSubscribeCtr;
    long long _backendArticleVersionInt64;
    double _computedGlobalScoreCoefficient;
    double _diversifiedPersonalizationScore;
    double _featureCtr;
    double _globalScore;
    double _paidNonpaidSubscriptionCtr;
    double _personalizationScore;
    long long _personalizationTreatmentId;
    long long _previousArticlePublisherArticleVersion;
    long long _publisherArticleVersionInt64;
    double _subscribedChannelCtr;
    double _userFeedbackScore;
    int _activeTimeSpent;
    NSString *_anfComponentId;
    int _articleDisplayRankInGroup;
    int _articleHostViewType;
    NSString *_articleId;
    NSData *_articleSessionId;
    int _articleSuggestionOrigin;
    int _articleType;
    int _articleViewPresentationReason;
    NSData *_articleViewingSessionId;
    int _backendArticleVersion;
    int _breakingNewsArticleCount;
    int _breakingNewsArticlePosition;
    NSString *_campaignId;
    NSString *_campaignType;
    int _characterCount;
    int _coverArticleDisplayRank;
    int _coverArticleFeatureType;
    NSString *_creativeId;
    int _curatedContentType;
    int _displayRank;
    NSString *_exposedGroupSourceChannelId;
    NSString *_exposedInLocationId;
    int _feedAutoSubscribeType;
    int _feedCellHostType;
    int _feedPresentationReason;
    NSString *_feedPresentationReasonSearchString;
    int _feedSubscriptionOrigin;
    NSData *_feedViewExposureId;
    NSMutableArray *_fractionalCohortMemberships;
    int _groupArticleCountInForYou;
    int _groupDisplayRankInForYou;
    NSString *_groupFeedId;
    int _groupFormationReason;
    int _groupLocation;
    int _groupPresentationReason;
    int _groupType;
    NSData *_groupViewExposureId;
    NSString *_iadNativeAd;
    NSString *_iadNativeCampaign;
    NSString *_iadNativeCampaignAd;
    NSString *_iadNativeLine;
    NSString *_language;
    int _loadFailureReason;
    int _maxActiveTimeSpent;
    float _maxVerticalScrollPositionEnding;
    int _moduleEventType;
    NSData *_moduleExposureId;
    int _moduleItemCount;
    int _moduleItemPosition;
    int _moduleLocation;
    NSMutableArray *_namedEntities;
    NSString *_nativeCampaignData;
    int _nextArticleAffordanceType;
    NSString *_nextArticleAffordanceTypeFeedId;
    NSString *_notificationId;
    int _paidSubscriberToFeedType;
    NSString *_parentFeedId;
    int _parentFeedType;
    int _previousArticleHostViewTypeIfSwipe;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    NSString *_previousWebEmbedId;
    int _previousWebEmbedLocation;
    int _publisherArticleVersion;
    NSString *_referencedArticleId;
    NSString *_referringSourceApplication;
    NSString *_referringUrl;
    NSString *_sectionHeadlineId;
    NSString *_sourceBinId;
    NSString *_sourceChannelId;
    NSString *_storyType;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSMutableArray *_surfacedByTagIds;
    NSString *_surfacedByTopicId;
    int _topStoryMandatoryArticleCount;
    int _topStoryOptionalArticleCount;
    int _topStoryType;
    NSString *_userActivityType;
    NSString *_viewFrameInScreen;
    int _widgetArticleRank;
    COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSWidgetEngagement *_widgetEngagement;
    int _widgetSection;
    int _widgetSectionArticleRank;
    _Bool _adSupportedChannel;
    _Bool _articleLoaded;
    _Bool _badgeExposure;
    _Bool _didBounce;
    _Bool _didExpandDuringView;
    _Bool _didOpenInSafari;
    _Bool _isBreakingNewsArticle;
    _Bool _isCoverArticle;
    _Bool _isDigitalReplicaAd;
    _Bool _isExplorationArticle;
    _Bool _isFreeArticle;
    _Bool _isGroupedArticle;
    _Bool _isNativeAd;
    _Bool _isNewUserToArticle;
    _Bool _isPaidSubscriberToFeed;
    _Bool _isPaidSubscriberToSourceChannel;
    _Bool _isSharedSubscriptionOnlyArticle;
    _Bool _isSubscribedToGroupFeed;
    _Bool _isSubscribedToSourceChannel;
    _Bool _isTopStoryArticle;
    _Bool _isUserSubscribedToParentFeed;
    _Bool _isVideoInFeed;
    _Bool _subscriptionOnlyArticle;
    _Bool _viewFromNotificationDirectOpen;
    CDStruct_19501b32 _has;
}

+ (Class)surfacedByTagIdsType;
+ (Class)fractionalCohortMembershipType;
+ (Class)namedEntitiesType;
@property(nonatomic) double subscribedChannelCtr; // @synthesize subscribedChannelCtr=_subscribedChannelCtr;
@property(nonatomic) _Bool didExpandDuringView; // @synthesize didExpandDuringView=_didExpandDuringView;
@property(retain, nonatomic) NSString *exposedGroupSourceChannelId; // @synthesize exposedGroupSourceChannelId=_exposedGroupSourceChannelId;
@property(retain, nonatomic) NSData *groupViewExposureId; // @synthesize groupViewExposureId=_groupViewExposureId;
@property(retain, nonatomic) NSString *exposedInLocationId; // @synthesize exposedInLocationId=_exposedInLocationId;
@property(retain, nonatomic) NSString *iadNativeCampaignAd; // @synthesize iadNativeCampaignAd=_iadNativeCampaignAd;
@property(retain, nonatomic) NSMutableArray *surfacedByTagIds; // @synthesize surfacedByTagIds=_surfacedByTagIds;
@property(retain, nonatomic) NSString *previousWebEmbedId; // @synthesize previousWebEmbedId=_previousWebEmbedId;
@property(retain, nonatomic) NSData *moduleExposureId; // @synthesize moduleExposureId=_moduleExposureId;
@property(nonatomic) int moduleItemPosition; // @synthesize moduleItemPosition=_moduleItemPosition;
@property(nonatomic) int moduleItemCount; // @synthesize moduleItemCount=_moduleItemCount;
@property(nonatomic) double diversifiedPersonalizationScore; // @synthesize diversifiedPersonalizationScore=_diversifiedPersonalizationScore;
@property(nonatomic) double agedPersonalizationScore; // @synthesize agedPersonalizationScore=_agedPersonalizationScore;
@property(nonatomic) double agedUserFeedbackScore; // @synthesize agedUserFeedbackScore=_agedUserFeedbackScore;
@property(nonatomic) double userFeedbackScore; // @synthesize userFeedbackScore=_userFeedbackScore;
@property(nonatomic) double globalScore; // @synthesize globalScore=_globalScore;
@property(nonatomic) double computedGlobalScoreCoefficient; // @synthesize computedGlobalScoreCoefficient=_computedGlobalScoreCoefficient;
@property(nonatomic) double autoSubscribeCtr; // @synthesize autoSubscribeCtr=_autoSubscribeCtr;
@property(nonatomic) double paidNonpaidSubscriptionCtr; // @synthesize paidNonpaidSubscriptionCtr=_paidNonpaidSubscriptionCtr;
@property(nonatomic) double featureCtr; // @synthesize featureCtr=_featureCtr;
@property(nonatomic) long long previousArticlePublisherArticleVersion; // @synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion;
@property(retain, nonatomic) NSString *iadNativeAd; // @synthesize iadNativeAd=_iadNativeAd;
@property(retain, nonatomic) NSString *iadNativeLine; // @synthesize iadNativeLine=_iadNativeLine;
@property(retain, nonatomic) NSString *iadNativeCampaign; // @synthesize iadNativeCampaign=_iadNativeCampaign;
@property(nonatomic) long long backendArticleVersionInt64; // @synthesize backendArticleVersionInt64=_backendArticleVersionInt64;
@property(nonatomic) long long publisherArticleVersionInt64; // @synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64;
@property(retain, nonatomic) COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;
@property(nonatomic) _Bool badgeExposure; // @synthesize badgeExposure=_badgeExposure;
@property(retain, nonatomic) NSString *anfComponentId; // @synthesize anfComponentId=_anfComponentId;
@property(retain, nonatomic) NSString *previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property(retain, nonatomic) NSString *nativeCampaignData; // @synthesize nativeCampaignData=_nativeCampaignData;
@property(nonatomic) _Bool isNativeAd; // @synthesize isNativeAd=_isNativeAd;
@property(nonatomic) _Bool isSubscribedToSourceChannel; // @synthesize isSubscribedToSourceChannel=_isSubscribedToSourceChannel;
@property(nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property(nonatomic) int topStoryOptionalArticleCount; // @synthesize topStoryOptionalArticleCount=_topStoryOptionalArticleCount;
@property(nonatomic) int topStoryMandatoryArticleCount; // @synthesize topStoryMandatoryArticleCount=_topStoryMandatoryArticleCount;
@property(nonatomic) int breakingNewsArticleCount; // @synthesize breakingNewsArticleCount=_breakingNewsArticleCount;
@property(nonatomic) int breakingNewsArticlePosition; // @synthesize breakingNewsArticlePosition=_breakingNewsArticlePosition;
@property(nonatomic) _Bool isBreakingNewsArticle; // @synthesize isBreakingNewsArticle=_isBreakingNewsArticle;
@property(retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property(nonatomic) int widgetArticleRank; // @synthesize widgetArticleRank=_widgetArticleRank;
@property(nonatomic) int widgetSectionArticleRank; // @synthesize widgetSectionArticleRank=_widgetSectionArticleRank;
@property(retain, nonatomic) NSString *previousArticleId; // @synthesize previousArticleId=_previousArticleId;
@property(nonatomic) _Bool articleLoaded; // @synthesize articleLoaded=_articleLoaded;
@property(nonatomic) int groupDisplayRankInForYou; // @synthesize groupDisplayRankInForYou=_groupDisplayRankInForYou;
@property(nonatomic) int groupArticleCountInForYou; // @synthesize groupArticleCountInForYou=_groupArticleCountInForYou;
@property(retain, nonatomic) NSString *nextArticleAffordanceTypeFeedId; // @synthesize nextArticleAffordanceTypeFeedId=_nextArticleAffordanceTypeFeedId;
@property(retain, nonatomic) NSString *notificationId; // @synthesize notificationId=_notificationId;
@property(nonatomic) _Bool viewFromNotificationDirectOpen; // @synthesize viewFromNotificationDirectOpen=_viewFromNotificationDirectOpen;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(nonatomic) float maxVerticalScrollPositionEnding; // @synthesize maxVerticalScrollPositionEnding=_maxVerticalScrollPositionEnding;
@property(nonatomic) _Bool isPaidSubscriberToSourceChannel; // @synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel;
@property(nonatomic) int coverArticleDisplayRank; // @synthesize coverArticleDisplayRank=_coverArticleDisplayRank;
@property(nonatomic) _Bool isCoverArticle; // @synthesize isCoverArticle=_isCoverArticle;
@property(nonatomic) _Bool isPaidSubscriberToFeed; // @synthesize isPaidSubscriberToFeed=_isPaidSubscriberToFeed;
@property(nonatomic) _Bool isFreeArticle; // @synthesize isFreeArticle=_isFreeArticle;
@property(nonatomic) _Bool isSharedSubscriptionOnlyArticle; // @synthesize isSharedSubscriptionOnlyArticle=_isSharedSubscriptionOnlyArticle;
@property(nonatomic) _Bool subscriptionOnlyArticle; // @synthesize subscriptionOnlyArticle=_subscriptionOnlyArticle;
@property(nonatomic) int articleDisplayRankInGroup; // @synthesize articleDisplayRankInGroup=_articleDisplayRankInGroup;
@property(nonatomic) _Bool isSubscribedToGroupFeed; // @synthesize isSubscribedToGroupFeed=_isSubscribedToGroupFeed;
@property(retain, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
@property(nonatomic) _Bool isGroupedArticle; // @synthesize isGroupedArticle=_isGroupedArticle;
@property(retain, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;
@property(nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property(retain, nonatomic) NSString *storyType; // @synthesize storyType=_storyType;
@property(nonatomic) _Bool isTopStoryArticle; // @synthesize isTopStoryArticle=_isTopStoryArticle;
@property(nonatomic) _Bool isVideoInFeed; // @synthesize isVideoInFeed=_isVideoInFeed;
@property(nonatomic) _Bool isDigitalReplicaAd; // @synthesize isDigitalReplicaAd=_isDigitalReplicaAd;
@property(retain, nonatomic) NSString *referringUrl; // @synthesize referringUrl=_referringUrl;
@property(retain, nonatomic) NSString *referringSourceApplication; // @synthesize referringSourceApplication=_referringSourceApplication;
@property(retain, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property(retain, nonatomic) NSString *surfacedByTopicId; // @synthesize surfacedByTopicId=_surfacedByTopicId;
@property(retain, nonatomic) NSString *surfacedBySectionId; // @synthesize surfacedBySectionId=_surfacedBySectionId;
@property(retain, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property(retain, nonatomic) NSMutableArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) int characterCount; // @synthesize characterCount=_characterCount;
@property(retain, nonatomic) NSString *viewFrameInScreen; // @synthesize viewFrameInScreen=_viewFrameInScreen;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(nonatomic) _Bool adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property(retain, nonatomic) NSString *sourceBinId; // @synthesize sourceBinId=_sourceBinId;
@property(nonatomic) _Bool isExplorationArticle; // @synthesize isExplorationArticle=_isExplorationArticle;
@property(nonatomic) _Bool didOpenInSafari; // @synthesize didOpenInSafari=_didOpenInSafari;
@property(nonatomic) _Bool isNewUserToArticle; // @synthesize isNewUserToArticle=_isNewUserToArticle;
@property(nonatomic) _Bool didBounce; // @synthesize didBounce=_didBounce;
@property(nonatomic) int maxActiveTimeSpent; // @synthesize maxActiveTimeSpent=_maxActiveTimeSpent;
@property(nonatomic) int activeTimeSpent; // @synthesize activeTimeSpent=_activeTimeSpent;
@property(nonatomic) _Bool isUserSubscribedToParentFeed; // @synthesize isUserSubscribedToParentFeed=_isUserSubscribedToParentFeed;
@property(retain, nonatomic) NSString *parentFeedId; // @synthesize parentFeedId=_parentFeedId;
@property(retain, nonatomic) NSString *feedPresentationReasonSearchString; // @synthesize feedPresentationReasonSearchString=_feedPresentationReasonSearchString;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(nonatomic) int displayRank; // @synthesize displayRank=_displayRank;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property(nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(nonatomic) int publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSubscribedChannelCtr;
@property(nonatomic) _Bool hasDidExpandDuringView;
- (int)StringAsArticleSuggestionOrigin:(id)arg1;
- (id)articleSuggestionOriginAsString:(int)arg1;
@property(nonatomic) _Bool hasArticleSuggestionOrigin;
@property(nonatomic) int articleSuggestionOrigin; // @synthesize articleSuggestionOrigin=_articleSuggestionOrigin;
@property(readonly, nonatomic) _Bool hasExposedGroupSourceChannelId;
@property(readonly, nonatomic) _Bool hasGroupViewExposureId;
@property(readonly, nonatomic) _Bool hasExposedInLocationId;
- (int)StringAsGroupLocation:(id)arg1;
- (id)groupLocationAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupLocation;
@property(nonatomic) int groupLocation; // @synthesize groupLocation=_groupLocation;
- (int)StringAsCuratedContentType:(id)arg1;
- (id)curatedContentTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasCuratedContentType;
@property(nonatomic) int curatedContentType; // @synthesize curatedContentType=_curatedContentType;
@property(readonly, nonatomic) _Bool hasIadNativeCampaignAd;
- (id)surfacedByTagIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)surfacedByTagIdsCount;
- (void)addSurfacedByTagIds:(id)arg1;
- (void)clearSurfacedByTagIds;
- (int)StringAsPreviousWebEmbedLocation:(id)arg1;
- (id)previousWebEmbedLocationAsString:(int)arg1;
@property(nonatomic) _Bool hasPreviousWebEmbedLocation;
@property(nonatomic) int previousWebEmbedLocation; // @synthesize previousWebEmbedLocation=_previousWebEmbedLocation;
@property(readonly, nonatomic) _Bool hasPreviousWebEmbedId;
@property(readonly, nonatomic) _Bool hasModuleExposureId;
@property(nonatomic) _Bool hasModuleItemPosition;
@property(nonatomic) _Bool hasModuleItemCount;
- (int)StringAsModuleLocation:(id)arg1;
- (id)moduleLocationAsString:(int)arg1;
@property(nonatomic) _Bool hasModuleLocation;
@property(nonatomic) int moduleLocation; // @synthesize moduleLocation=_moduleLocation;
- (int)StringAsModuleEventType:(id)arg1;
- (id)moduleEventTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasModuleEventType;
@property(nonatomic) int moduleEventType; // @synthesize moduleEventType=_moduleEventType;
@property(nonatomic) _Bool hasDiversifiedPersonalizationScore;
@property(nonatomic) _Bool hasAgedPersonalizationScore;
@property(nonatomic) _Bool hasAgedUserFeedbackScore;
@property(nonatomic) _Bool hasUserFeedbackScore;
@property(nonatomic) _Bool hasGlobalScore;
@property(nonatomic) _Bool hasComputedGlobalScoreCoefficient;
@property(nonatomic) _Bool hasAutoSubscribeCtr;
@property(nonatomic) _Bool hasPaidNonpaidSubscriptionCtr;
@property(nonatomic) _Bool hasFeatureCtr;
- (int)StringAsFeedAutoSubscribeType:(id)arg1;
- (id)feedAutoSubscribeTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedAutoSubscribeType;
@property(nonatomic) int feedAutoSubscribeType; // @synthesize feedAutoSubscribeType=_feedAutoSubscribeType;
- (int)StringAsGroupFormationReason:(id)arg1;
- (id)groupFormationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupFormationReason;
@property(nonatomic) int groupFormationReason; // @synthesize groupFormationReason=_groupFormationReason;
@property(nonatomic) _Bool hasPreviousArticlePublisherArticleVersion;
@property(readonly, nonatomic) _Bool hasIadNativeAd;
@property(readonly, nonatomic) _Bool hasIadNativeLine;
@property(readonly, nonatomic) _Bool hasIadNativeCampaign;
- (int)StringAsFeedSubscriptionOrigin:(id)arg1;
- (id)feedSubscriptionOriginAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedSubscriptionOrigin;
@property(nonatomic) int feedSubscriptionOrigin; // @synthesize feedSubscriptionOrigin=_feedSubscriptionOrigin;
@property(nonatomic) _Bool hasBackendArticleVersionInt64;
@property(nonatomic) _Bool hasPublisherArticleVersionInt64;
@property(readonly, nonatomic) _Bool hasWidgetEngagement;
@property(nonatomic) _Bool hasBadgeExposure;
@property(readonly, nonatomic) _Bool hasAnfComponentId;
@property(readonly, nonatomic) _Bool hasPreviousArticleVersion;
@property(readonly, nonatomic) _Bool hasNativeCampaignData;
@property(nonatomic) _Bool hasIsNativeAd;
@property(nonatomic) _Bool hasIsSubscribedToSourceChannel;
@property(nonatomic) _Bool hasPersonalizationScore;
- (int)StringAsGroupPresentationReason:(id)arg1;
- (id)groupPresentationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupPresentationReason;
@property(nonatomic) int groupPresentationReason; // @synthesize groupPresentationReason=_groupPresentationReason;
@property(nonatomic) _Bool hasTopStoryOptionalArticleCount;
@property(nonatomic) _Bool hasTopStoryMandatoryArticleCount;
- (int)StringAsTopStoryType:(id)arg1;
- (id)topStoryTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTopStoryType;
@property(nonatomic) int topStoryType; // @synthesize topStoryType=_topStoryType;
@property(nonatomic) _Bool hasBreakingNewsArticleCount;
@property(nonatomic) _Bool hasBreakingNewsArticlePosition;
@property(nonatomic) _Bool hasIsBreakingNewsArticle;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (unsigned long long)fractionalCohortMembershipsCount;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)clearFractionalCohortMemberships;
@property(nonatomic) _Bool hasWidgetArticleRank;
@property(nonatomic) _Bool hasWidgetSectionArticleRank;
- (int)StringAsWidgetSection:(id)arg1;
- (id)widgetSectionAsString:(int)arg1;
@property(nonatomic) _Bool hasWidgetSection;
@property(nonatomic) int widgetSection; // @synthesize widgetSection=_widgetSection;
@property(readonly, nonatomic) _Bool hasPreviousArticleId;
- (int)StringAsLoadFailureReason:(id)arg1;
- (id)loadFailureReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasLoadFailureReason;
@property(nonatomic) int loadFailureReason; // @synthesize loadFailureReason=_loadFailureReason;
@property(nonatomic) _Bool hasArticleLoaded;
@property(nonatomic) _Bool hasGroupDisplayRankInForYou;
@property(nonatomic) _Bool hasGroupArticleCountInForYou;
@property(readonly, nonatomic) _Bool hasNextArticleAffordanceTypeFeedId;
- (int)StringAsNextArticleAffordanceType:(id)arg1;
- (id)nextArticleAffordanceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasNextArticleAffordanceType;
@property(nonatomic) int nextArticleAffordanceType; // @synthesize nextArticleAffordanceType=_nextArticleAffordanceType;
@property(readonly, nonatomic) _Bool hasNotificationId;
@property(nonatomic) _Bool hasViewFromNotificationDirectOpen;
@property(readonly, nonatomic) _Bool hasCreativeId;
@property(readonly, nonatomic) _Bool hasCampaignType;
@property(readonly, nonatomic) _Bool hasCampaignId;
@property(nonatomic) _Bool hasMaxVerticalScrollPositionEnding;
@property(nonatomic) _Bool hasIsPaidSubscriberToSourceChannel;
- (int)StringAsPaidSubscriberToFeedType:(id)arg1;
- (id)paidSubscriberToFeedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPaidSubscriberToFeedType;
@property(nonatomic) int paidSubscriberToFeedType; // @synthesize paidSubscriberToFeedType=_paidSubscriberToFeedType;
- (int)StringAsCoverArticleFeatureType:(id)arg1;
- (id)coverArticleFeatureTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasCoverArticleFeatureType;
@property(nonatomic) int coverArticleFeatureType; // @synthesize coverArticleFeatureType=_coverArticleFeatureType;
@property(nonatomic) _Bool hasCoverArticleDisplayRank;
@property(nonatomic) _Bool hasIsCoverArticle;
@property(nonatomic) _Bool hasIsPaidSubscriberToFeed;
@property(nonatomic) _Bool hasIsFreeArticle;
@property(nonatomic) _Bool hasIsSharedSubscriptionOnlyArticle;
@property(nonatomic) _Bool hasSubscriptionOnlyArticle;
@property(nonatomic) _Bool hasArticleDisplayRankInGroup;
@property(nonatomic) _Bool hasIsSubscribedToGroupFeed;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) _Bool hasGroupFeedId;
@property(nonatomic) _Bool hasIsGroupedArticle;
@property(readonly, nonatomic) _Bool hasUserActivityType;
@property(nonatomic) _Bool hasPersonalizationTreatmentId;
@property(readonly, nonatomic) _Bool hasStoryType;
@property(nonatomic) _Bool hasIsTopStoryArticle;
@property(nonatomic) _Bool hasIsVideoInFeed;
- (int)StringAsPreviousArticleHostViewTypeIfSwipe:(id)arg1;
- (id)previousArticleHostViewTypeIfSwipeAsString:(int)arg1;
@property(nonatomic) _Bool hasPreviousArticleHostViewTypeIfSwipe;
@property(nonatomic) int previousArticleHostViewTypeIfSwipe; // @synthesize previousArticleHostViewTypeIfSwipe=_previousArticleHostViewTypeIfSwipe;
@property(nonatomic) _Bool hasIsDigitalReplicaAd;
@property(readonly, nonatomic) _Bool hasReferringUrl;
@property(readonly, nonatomic) _Bool hasReferringSourceApplication;
@property(readonly, nonatomic) _Bool hasSectionHeadlineId;
@property(readonly, nonatomic) _Bool hasSurfacedByTopicId;
@property(readonly, nonatomic) _Bool hasSurfacedBySectionId;
@property(readonly, nonatomic) _Bool hasSurfacedByChannelId;
- (int)StringAsArticleType:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasArticleType;
@property(nonatomic) int articleType; // @synthesize articleType=_articleType;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (void)addNamedEntities:(id)arg1;
- (void)clearNamedEntities;
@property(readonly, nonatomic) _Bool hasLanguage;
@property(nonatomic) _Bool hasCharacterCount;
@property(readonly, nonatomic) _Bool hasViewFrameInScreen;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(nonatomic) _Bool hasAdSupportedChannel;
@property(readonly, nonatomic) _Bool hasSourceBinId;
@property(nonatomic) _Bool hasIsExplorationArticle;
@property(nonatomic) _Bool hasDidOpenInSafari;
@property(nonatomic) _Bool hasIsNewUserToArticle;
@property(nonatomic) _Bool hasDidBounce;
@property(nonatomic) _Bool hasMaxActiveTimeSpent;
@property(nonatomic) _Bool hasActiveTimeSpent;
@property(nonatomic) _Bool hasIsUserSubscribedToParentFeed;
@property(readonly, nonatomic) _Bool hasParentFeedId;
- (int)StringAsParentFeedType:(id)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasParentFeedType;
@property(nonatomic) int parentFeedType; // @synthesize parentFeedType=_parentFeedType;
- (int)StringAsFeedCellHostType:(id)arg1;
- (id)feedCellHostTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedCellHostType;
@property(nonatomic) int feedCellHostType; // @synthesize feedCellHostType=_feedCellHostType;
@property(readonly, nonatomic) _Bool hasFeedPresentationReasonSearchString;
- (int)StringAsFeedPresentationReason:(id)arg1;
- (id)feedPresentationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedPresentationReason;
@property(nonatomic) int feedPresentationReason; // @synthesize feedPresentationReason=_feedPresentationReason;
@property(readonly, nonatomic) _Bool hasFeedViewExposureId;
- (int)StringAsArticleViewPresentationReason:(id)arg1;
- (id)articleViewPresentationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasArticleViewPresentationReason;
@property(nonatomic) int articleViewPresentationReason; // @synthesize articleViewPresentationReason=_articleViewPresentationReason;
@property(nonatomic) _Bool hasDisplayRank;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
@property(readonly, nonatomic) _Bool hasArticleSessionId;
@property(nonatomic) _Bool hasBackendArticleVersion;
@property(nonatomic) _Bool hasPublisherArticleVersion;
@property(readonly, nonatomic) _Bool hasReferencedArticleId;
@property(readonly, nonatomic) _Bool hasArticleId;
- (int)StringAsArticleHostViewType:(id)arg1;
- (id)articleHostViewTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasArticleHostViewType;
@property(nonatomic) int articleHostViewType; // @synthesize articleHostViewType=_articleHostViewType;

@end

