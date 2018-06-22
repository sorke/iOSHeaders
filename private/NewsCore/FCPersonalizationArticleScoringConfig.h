//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface FCPersonalizationArticleScoringConfig : NSObject
{
    double _baselineRatePrior;
    double _decayFactor;
    double _democratizationFactor;
    double _halfLifeCoefficient;
    double _subscribedChannelScoreCoefficient;
    double _mutedVoteCoefficient;
    double _personalizationCoefficient;
    double _publisherAggregateWeight;
    double _globalScoreCoefficient;
    double _globalScoreCoefficientHalfLife;
    double _globalScoreCoefficientInitialMultiplier;
    double _globalScoreToCtrIntercept;
    double _globalScoreToCtrSlope;
    double _realTimeUserFeedbackCoefficient;
    double _realTimeUserFeedbackPublishDateHalfLifeCoefficient;
    NSDictionary *_realTimeUserFeedbackTagCoefficients;
    double _cohortMembershipCtrCeiling;
    double _cohortMembershipCurvature;
    double _cohortMembershipFavoritedBoost;
    double _cohortMembershipMinWeightedImpressions;
    double _subscribedTopicsScoreCoefficient;
    double _ctrWithSubscribedChannel;
    double _ctrWithZeroSubscribed;
    double _ctrWithOneSubscribed;
    double _ctrWithTwoSubscribed;
    double _ctrWithThreeSubscribed;
    double _autofavoritedVoteCoefficient;
    double _ctrWithZeroAutofavorited;
    double _ctrWithOneAutofavorited;
    double _ctrWithTwoAutofavorited;
    double _ctrWithThreeAutofavorited;
    double _diversificationInitialPenalty;
    double _diversificationPenalty;
    double _diversificationPenaltyHalfLife;
    double _channelTopicDiversificationInitialPenalty;
    double _channelTopicDiversificationPenalty;
    double _channelTopicDiversificationPenaltyHalfLife;
    double _firstPassHalfLifeCoefficient;
    double _firstPassRealTimeUserFeedbackPublishDateHalfLifeCoefficient;
    double _firstPassArticleFilter;
}

@property(readonly, nonatomic) double firstPassArticleFilter; // @synthesize firstPassArticleFilter=_firstPassArticleFilter;
@property(readonly, nonatomic) double firstPassRealTimeUserFeedbackPublishDateHalfLifeCoefficient; // @synthesize firstPassRealTimeUserFeedbackPublishDateHalfLifeCoefficient=_firstPassRealTimeUserFeedbackPublishDateHalfLifeCoefficient;
@property(readonly, nonatomic) double firstPassHalfLifeCoefficient; // @synthesize firstPassHalfLifeCoefficient=_firstPassHalfLifeCoefficient;
@property(readonly, nonatomic) double channelTopicDiversificationPenaltyHalfLife; // @synthesize channelTopicDiversificationPenaltyHalfLife=_channelTopicDiversificationPenaltyHalfLife;
@property(readonly, nonatomic) double channelTopicDiversificationPenalty; // @synthesize channelTopicDiversificationPenalty=_channelTopicDiversificationPenalty;
@property(readonly, nonatomic) double channelTopicDiversificationInitialPenalty; // @synthesize channelTopicDiversificationInitialPenalty=_channelTopicDiversificationInitialPenalty;
@property(readonly, nonatomic) double diversificationPenaltyHalfLife; // @synthesize diversificationPenaltyHalfLife=_diversificationPenaltyHalfLife;
@property(readonly, nonatomic) double diversificationPenalty; // @synthesize diversificationPenalty=_diversificationPenalty;
@property(readonly, nonatomic) double diversificationInitialPenalty; // @synthesize diversificationInitialPenalty=_diversificationInitialPenalty;
@property(readonly, nonatomic) double ctrWithThreeAutofavorited; // @synthesize ctrWithThreeAutofavorited=_ctrWithThreeAutofavorited;
@property(readonly, nonatomic) double ctrWithTwoAutofavorited; // @synthesize ctrWithTwoAutofavorited=_ctrWithTwoAutofavorited;
@property(readonly, nonatomic) double ctrWithOneAutofavorited; // @synthesize ctrWithOneAutofavorited=_ctrWithOneAutofavorited;
@property(readonly, nonatomic) double ctrWithZeroAutofavorited; // @synthesize ctrWithZeroAutofavorited=_ctrWithZeroAutofavorited;
@property(readonly, nonatomic) double autofavoritedVoteCoefficient; // @synthesize autofavoritedVoteCoefficient=_autofavoritedVoteCoefficient;
@property(readonly, nonatomic) double ctrWithThreeSubscribed; // @synthesize ctrWithThreeSubscribed=_ctrWithThreeSubscribed;
@property(readonly, nonatomic) double ctrWithTwoSubscribed; // @synthesize ctrWithTwoSubscribed=_ctrWithTwoSubscribed;
@property(readonly, nonatomic) double ctrWithOneSubscribed; // @synthesize ctrWithOneSubscribed=_ctrWithOneSubscribed;
@property(readonly, nonatomic) double ctrWithZeroSubscribed; // @synthesize ctrWithZeroSubscribed=_ctrWithZeroSubscribed;
@property(readonly, nonatomic) double ctrWithSubscribedChannel; // @synthesize ctrWithSubscribedChannel=_ctrWithSubscribedChannel;
@property(readonly, nonatomic) double subscribedTopicsScoreCoefficient; // @synthesize subscribedTopicsScoreCoefficient=_subscribedTopicsScoreCoefficient;
@property(readonly, nonatomic) double cohortMembershipMinWeightedImpressions; // @synthesize cohortMembershipMinWeightedImpressions=_cohortMembershipMinWeightedImpressions;
@property(readonly, nonatomic) double cohortMembershipFavoritedBoost; // @synthesize cohortMembershipFavoritedBoost=_cohortMembershipFavoritedBoost;
@property(readonly, nonatomic) double cohortMembershipCurvature; // @synthesize cohortMembershipCurvature=_cohortMembershipCurvature;
@property(readonly, nonatomic) double cohortMembershipCtrCeiling; // @synthesize cohortMembershipCtrCeiling=_cohortMembershipCtrCeiling;
@property(readonly, nonatomic) NSDictionary *realTimeUserFeedbackTagCoefficients; // @synthesize realTimeUserFeedbackTagCoefficients=_realTimeUserFeedbackTagCoefficients;
@property(readonly, nonatomic) double realTimeUserFeedbackPublishDateHalfLifeCoefficient; // @synthesize realTimeUserFeedbackPublishDateHalfLifeCoefficient=_realTimeUserFeedbackPublishDateHalfLifeCoefficient;
@property(readonly, nonatomic) double realTimeUserFeedbackCoefficient; // @synthesize realTimeUserFeedbackCoefficient=_realTimeUserFeedbackCoefficient;
@property(readonly, nonatomic) double globalScoreToCtrSlope; // @synthesize globalScoreToCtrSlope=_globalScoreToCtrSlope;
@property(readonly, nonatomic) double globalScoreToCtrIntercept; // @synthesize globalScoreToCtrIntercept=_globalScoreToCtrIntercept;
@property(readonly, nonatomic) double globalScoreCoefficientInitialMultiplier; // @synthesize globalScoreCoefficientInitialMultiplier=_globalScoreCoefficientInitialMultiplier;
@property(readonly, nonatomic) double globalScoreCoefficientHalfLife; // @synthesize globalScoreCoefficientHalfLife=_globalScoreCoefficientHalfLife;
@property(readonly, nonatomic) double globalScoreCoefficient; // @synthesize globalScoreCoefficient=_globalScoreCoefficient;
@property(readonly, nonatomic) double publisherAggregateWeight; // @synthesize publisherAggregateWeight=_publisherAggregateWeight;
@property(readonly, nonatomic) double personalizationCoefficient; // @synthesize personalizationCoefficient=_personalizationCoefficient;
@property(readonly, nonatomic) double mutedVoteCoefficient; // @synthesize mutedVoteCoefficient=_mutedVoteCoefficient;
@property(readonly, nonatomic) double subscribedChannelScoreCoefficient; // @synthesize subscribedChannelScoreCoefficient=_subscribedChannelScoreCoefficient;
@property(readonly, nonatomic) double halfLifeCoefficient; // @synthesize halfLifeCoefficient=_halfLifeCoefficient;
@property(readonly, nonatomic) double democratizationFactor; // @synthesize democratizationFactor=_democratizationFactor;
@property(readonly, nonatomic) double decayFactor; // @synthesize decayFactor=_decayFactor;
@property(readonly, nonatomic) double baselineRatePrior; // @synthesize baselineRatePrior=_baselineRatePrior;
- (void).cxx_destruct;
- (id)initWithBaselineRatePrior:(double)arg1 decayFactor:(double)arg2 democratizationFactor:(double)arg3 halfLifeCoefficient:(double)arg4 subscribedChannelScoreCoefficient:(double)arg5 ctrWithSubscribedChannel:(double)arg6 mutedVoteCoefficient:(double)arg7 personalizationCoefficient:(double)arg8 publisherAggregateWeight:(double)arg9 globalScoreCoefficient:(double)arg10 globalScoreCoefficientHalfLife:(double)arg11 globalScoreCoefficientInitialMultiplier:(double)arg12 globalScoreToCtrIntercept:(double)arg13 globalScoreToCtrSlope:(double)arg14 realTimeUserFeedbackCoefficient:(double)arg15 realTimeUserFeedbackPublishDateHalfLifeCoefficient:(double)arg16 realTimeUserFeedbackTagCoefficients:(id)arg17 cohortMembershipCtrCeiling:(double)arg18 cohortMembershipCurvature:(double)arg19 cohortMembershipFavoritedBoost:(double)arg20 cohortMembershipMinWeightedImpressions:(double)arg21 subscribedTopicsScoreCoefficient:(double)arg22 ctrWithZeroSubscribed:(double)arg23 ctrWithOneSubscribed:(double)arg24 ctrWithTwoSubscribed:(double)arg25 ctrWithThreeSubscribed:(double)arg26 autofavoritedVoteCoefficient:(double)arg27 ctrWithZeroAutofavorited:(double)arg28 ctrWithOneAutofavorited:(double)arg29 ctrWithTwoAutofavorited:(double)arg30 ctrWithThreeAutofavorited:(double)arg31 diversificationInitialPenalty:(double)arg32 diversificationPenalty:(double)arg33 diversificationPenaltyHalfLife:(double)arg34 channelTopicDiversificationInitialPenalty:(double)arg35 channelTopicDiversificationPenalty:(double)arg36 channelTopicDiversificationPenaltyHalfLife:(double)arg37 firstPassHalfLifeCoefficient:(double)arg38 firstPassRealTimeUserFeedbackPublishDateHalfLifeCoefficient:(double)arg39 firstPassArticleFilter:(double)arg40;

@end

