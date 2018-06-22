//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCChannelProviding.h"
#import "FCFeedTheming.h"
#import "FCSectionProviding.h"
#import "FCTagProviding.h"
#import "FCTopicProviding.h"

@class FCAssetHandle, FCColor, FCHeadlineTemplate, FCInterestToken, FCTagBanner, FCTextInfo, NSArray, NSData, NSDate, NSString, NTPBFeedConfiguration, NTPBPublisherPaidDescriptionStrings, NTPBTagRecord;

@interface FCTag : NSObject <FCTagProviding, FCChannelProviding, FCSectionProviding, FCTopicProviding, FCFeedTheming>
{
    _Bool _isPublic;
    _Bool _isDeprecated;
    _Bool _isExplicitContent;
    _Bool _isNotificationEnabled;
    _Bool _publisherPaidLeakyPaywallOptOut;
    _Bool _publisherPaidWebAccessOptIn;
    _Bool _hideAccessoryText;
    _Bool _isHidden;
    _Bool _isRealTimeTrackingEnabed;
    NSString *_identifier;
    NSString *_versionKey;
    NSString *_name;
    NSString *_nameCompact;
    unsigned long long _tagType;
    long long _contentProvider;
    NSString *_primaryAudience;
    NSString *_replacementID;
    NSArray *_relatedTopicIDs;
    NSArray *_relatedChannelIDs;
    NSArray *_relatedTopicIDsForOnboarding;
    NSArray *_relatedChannelIDsForOnboarding;
    NSArray *_iAdCategories;
    NSArray *_iAdKeywords;
    NSArray *_blockedStorefrontIDs;
    NSArray *_allowedStorefrontIDs;
    NSArray *_pinnedArticleIDs;
    long long _score;
    long long _minimumNewsVersion;
    NSString *_subtitle;
    FCAssetHandle *_nameImageAssetHandle;
    FCAssetHandle *_nameImageCompactAssetHandle;
    double _bannerImageScale;
    double _bannerImageBaselineOffsetPercentage;
    FCAssetHandle *_nameImageForDarkBackgroundAssetHandle;
    FCAssetHandle *_nameImageMaskAssetHandle;
    FCAssetHandle *_logoImageAssetHandle;
    FCAssetHandle *_coverImageAssetHandle;
    FCAssetHandle *_feedNavImageAssetHandle;
    NSString *_coverArticleListID;
    FCTextInfo *_headlineTitleTextInfo;
    FCTextInfo *_headlineExcerptTextInfo;
    FCTextInfo *_headlineBylineTextInfo;
    NSString *_parentID;
    NSArray *_sectionIDs;
    NSString *_defaultSectionID;
    FCHeadlineTemplate *_defaultHeadlineTemplate;
    FCTagBanner *_bannerImageForWhiteBackground;
    FCTagBanner *_bannerImageForThemeBackground;
    FCTagBanner *_bannerImageForMask;
    FCTagBanner *_compactBannerImage;
    NSString *_publisherPaidAuthorizationURL;
    NSString *_publisherPaidVerificationURL;
    NSString *_publisherPaidWebAccessURL;
    NSArray *_publisherPaidFeldsparablePurchaseIDs;
    NSArray *_publisherPaidOfferableConfigurations;
    NTPBPublisherPaidDescriptionStrings *_publisherPaidDescriptionStrings;
    FCAssetHandle *_nameImageMaskWidgetLQAssetHandle;
    FCAssetHandle *_nameImageMaskWidgetHQAssetHandle;
    unsigned long long _groupingEligibility;
    NSArray *_publisherSpecifiedArticleIDs;
    NSDate *_publisherSpecifiedArticleIDsModifiedDate;
    NSString *_pptFeedIDOverride;
    FCInterestToken *_tagInterestToken;
    NTPBFeedConfiguration *_feedConfiguration;
    NSArray *_sectionFeedConfigurations;
    NSString *_backgroundColorHexString;
    NSString *_foregroundColorHexString;
    NSString *_groupTitleColorHexString;
    NSDate *_loadDate;
    NTPBTagRecord *_tagRecord;
    FCInterestToken *_tagRecordInterestToken;
    struct CGSize _nameImageSize;
    struct CGSize _nameImageForDarkBackgroundSize;
    struct CGSize _nameImageMaskSize;
    struct FCEdgeInsets _nameImageInsets;
    struct FCEdgeInsets _nameImageForDarkBackgroundInsets;
    struct FCEdgeInsets _nameImageMaskInsets;
}

@property(readonly, nonatomic) FCInterestToken *tagRecordInterestToken; // @synthesize tagRecordInterestToken=_tagRecordInterestToken;
@property(readonly, nonatomic) NTPBTagRecord *tagRecord; // @synthesize tagRecord=_tagRecord;
@property(retain, nonatomic) NSDate *loadDate; // @synthesize loadDate=_loadDate;
@property(copy, nonatomic) NSString *groupTitleColorHexString; // @synthesize groupTitleColorHexString=_groupTitleColorHexString;
@property(copy, nonatomic) NSString *foregroundColorHexString; // @synthesize foregroundColorHexString=_foregroundColorHexString;
@property(copy, nonatomic) NSString *backgroundColorHexString; // @synthesize backgroundColorHexString=_backgroundColorHexString;
@property(copy, nonatomic) NSArray *sectionFeedConfigurations; // @synthesize sectionFeedConfigurations=_sectionFeedConfigurations;
@property(copy, nonatomic) NTPBFeedConfiguration *feedConfiguration; // @synthesize feedConfiguration=_feedConfiguration;
@property(retain, nonatomic) FCInterestToken *tagInterestToken; // @synthesize tagInterestToken=_tagInterestToken;
@property(copy, nonatomic) NSString *pptFeedIDOverride; // @synthesize pptFeedIDOverride=_pptFeedIDOverride;
@property(readonly, nonatomic) NSDate *publisherSpecifiedArticleIDsModifiedDate; // @synthesize publisherSpecifiedArticleIDsModifiedDate=_publisherSpecifiedArticleIDsModifiedDate;
@property(readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs; // @synthesize publisherSpecifiedArticleIDs=_publisherSpecifiedArticleIDs;
@property(readonly, nonatomic) _Bool isRealTimeTrackingEnabed; // @synthesize isRealTimeTrackingEnabed=_isRealTimeTrackingEnabed;
@property(readonly, nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(readonly, nonatomic) unsigned long long groupingEligibility; // @synthesize groupingEligibility=_groupingEligibility;
@property(readonly, nonatomic) _Bool hideAccessoryText; // @synthesize hideAccessoryText=_hideAccessoryText;
@property(readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetHQAssetHandle; // @synthesize nameImageMaskWidgetHQAssetHandle=_nameImageMaskWidgetHQAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetLQAssetHandle; // @synthesize nameImageMaskWidgetLQAssetHandle=_nameImageMaskWidgetLQAssetHandle;
@property(readonly, nonatomic) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings; // @synthesize publisherPaidDescriptionStrings=_publisherPaidDescriptionStrings;
@property(readonly, nonatomic) _Bool publisherPaidWebAccessOptIn; // @synthesize publisherPaidWebAccessOptIn=_publisherPaidWebAccessOptIn;
@property(readonly, nonatomic) _Bool publisherPaidLeakyPaywallOptOut; // @synthesize publisherPaidLeakyPaywallOptOut=_publisherPaidLeakyPaywallOptOut;
@property(readonly, nonatomic) NSArray *publisherPaidOfferableConfigurations; // @synthesize publisherPaidOfferableConfigurations=_publisherPaidOfferableConfigurations;
@property(readonly, nonatomic) NSArray *publisherPaidFeldsparablePurchaseIDs; // @synthesize publisherPaidFeldsparablePurchaseIDs=_publisherPaidFeldsparablePurchaseIDs;
@property(readonly, copy, nonatomic) NSString *publisherPaidWebAccessURL; // @synthesize publisherPaidWebAccessURL=_publisherPaidWebAccessURL;
@property(readonly, copy, nonatomic) NSString *publisherPaidVerificationURL; // @synthesize publisherPaidVerificationURL=_publisherPaidVerificationURL;
@property(readonly, copy, nonatomic) NSString *publisherPaidAuthorizationURL; // @synthesize publisherPaidAuthorizationURL=_publisherPaidAuthorizationURL;
@property(readonly, nonatomic) FCHeadlineTemplate *defaultHeadlineTemplate; // @synthesize defaultHeadlineTemplate=_defaultHeadlineTemplate;
@property(readonly, copy, nonatomic) NSString *defaultSectionID; // @synthesize defaultSectionID=_defaultSectionID;
@property(readonly, copy, nonatomic) NSArray *sectionIDs; // @synthesize sectionIDs=_sectionIDs;
@property(readonly, copy, nonatomic) NSString *parentID; // @synthesize parentID=_parentID;
@property(readonly, copy, nonatomic) FCTextInfo *headlineBylineTextInfo; // @synthesize headlineBylineTextInfo=_headlineBylineTextInfo;
@property(readonly, copy, nonatomic) FCTextInfo *headlineExcerptTextInfo; // @synthesize headlineExcerptTextInfo=_headlineExcerptTextInfo;
@property(readonly, copy, nonatomic) FCTextInfo *headlineTitleTextInfo; // @synthesize headlineTitleTextInfo=_headlineTitleTextInfo;
@property(readonly, copy, nonatomic) NSString *coverArticleListID; // @synthesize coverArticleListID=_coverArticleListID;
@property(readonly, nonatomic) FCAssetHandle *feedNavImageAssetHandle; // @synthesize feedNavImageAssetHandle=_feedNavImageAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *coverImageAssetHandle; // @synthesize coverImageAssetHandle=_coverImageAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *logoImageAssetHandle; // @synthesize logoImageAssetHandle=_logoImageAssetHandle;
@property(readonly, nonatomic) struct FCEdgeInsets nameImageMaskInsets; // @synthesize nameImageMaskInsets=_nameImageMaskInsets;
@property(readonly, nonatomic) struct CGSize nameImageMaskSize; // @synthesize nameImageMaskSize=_nameImageMaskSize;
@property(readonly, nonatomic) FCAssetHandle *nameImageMaskAssetHandle; // @synthesize nameImageMaskAssetHandle=_nameImageMaskAssetHandle;
@property(readonly, nonatomic) struct FCEdgeInsets nameImageForDarkBackgroundInsets; // @synthesize nameImageForDarkBackgroundInsets=_nameImageForDarkBackgroundInsets;
@property(readonly, nonatomic) struct CGSize nameImageForDarkBackgroundSize; // @synthesize nameImageForDarkBackgroundSize=_nameImageForDarkBackgroundSize;
@property(readonly, nonatomic) FCAssetHandle *nameImageForDarkBackgroundAssetHandle; // @synthesize nameImageForDarkBackgroundAssetHandle=_nameImageForDarkBackgroundAssetHandle;
@property(nonatomic) double bannerImageBaselineOffsetPercentage; // @synthesize bannerImageBaselineOffsetPercentage=_bannerImageBaselineOffsetPercentage;
@property(nonatomic) double bannerImageScale; // @synthesize bannerImageScale=_bannerImageScale;
@property(readonly, nonatomic) FCAssetHandle *nameImageCompactAssetHandle; // @synthesize nameImageCompactAssetHandle=_nameImageCompactAssetHandle;
@property(readonly, nonatomic) struct FCEdgeInsets nameImageInsets; // @synthesize nameImageInsets=_nameImageInsets;
@property(nonatomic) struct CGSize nameImageSize; // @synthesize nameImageSize=_nameImageSize;
@property(retain, nonatomic) FCAssetHandle *nameImageAssetHandle; // @synthesize nameImageAssetHandle=_nameImageAssetHandle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) _Bool isNotificationEnabled; // @synthesize isNotificationEnabled=_isNotificationEnabled;
@property(readonly, nonatomic) long long minimumNewsVersion; // @synthesize minimumNewsVersion=_minimumNewsVersion;
@property(readonly, nonatomic) long long score; // @synthesize score=_score;
@property(readonly, nonatomic) NSArray *pinnedArticleIDs; // @synthesize pinnedArticleIDs=_pinnedArticleIDs;
@property(readonly, nonatomic) NSArray *allowedStorefrontIDs; // @synthesize allowedStorefrontIDs=_allowedStorefrontIDs;
@property(readonly, nonatomic) NSArray *blockedStorefrontIDs; // @synthesize blockedStorefrontIDs=_blockedStorefrontIDs;
@property(readonly, nonatomic) NSArray *iAdKeywords; // @synthesize iAdKeywords=_iAdKeywords;
@property(readonly, nonatomic) NSArray *iAdCategories; // @synthesize iAdCategories=_iAdCategories;
@property(readonly, nonatomic) NSArray *relatedChannelIDsForOnboarding; // @synthesize relatedChannelIDsForOnboarding=_relatedChannelIDsForOnboarding;
@property(readonly, nonatomic) NSArray *relatedTopicIDsForOnboarding; // @synthesize relatedTopicIDsForOnboarding=_relatedTopicIDsForOnboarding;
@property(readonly, nonatomic) NSArray *relatedChannelIDs; // @synthesize relatedChannelIDs=_relatedChannelIDs;
@property(readonly, nonatomic) NSArray *relatedTopicIDs; // @synthesize relatedTopicIDs=_relatedTopicIDs;
@property(readonly, copy, nonatomic) NSString *replacementID; // @synthesize replacementID=_replacementID;
@property(readonly, copy, nonatomic) NSString *primaryAudience; // @synthesize primaryAudience=_primaryAudience;
@property(readonly, nonatomic) _Bool isExplicitContent; // @synthesize isExplicitContent=_isExplicitContent;
@property(readonly, nonatomic) _Bool isDeprecated; // @synthesize isDeprecated=_isDeprecated;
@property(readonly, nonatomic) _Bool isPublic; // @synthesize isPublic=_isPublic;
@property(readonly, nonatomic) long long contentProvider; // @synthesize contentProvider=_contentProvider;
@property(readonly, nonatomic) unsigned long long tagType; // @synthesize tagType=_tagType;
@property(readonly, copy, nonatomic) NSString *nameCompact; // @synthesize nameCompact=_nameCompact;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *versionKey; // @synthesize versionKey=_versionKey;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isWhitelisted;
@property(readonly, nonatomic) _Bool supportsNotifications;
@property(readonly, nonatomic) NSData *backingTagRecordData;
- (void)ppt_overrideFeedID:(id)arg1;
@property(readonly, copy, nonatomic) FCColor *groupTitleColor;
@property(readonly, nonatomic) FCColor *foregroundColor;
@property(readonly, nonatomic) FCColor *backgroundColor;
@property(readonly, nonatomic) FCTagBanner *compactBannerImage; // @synthesize compactBannerImage=_compactBannerImage;
@property(readonly, nonatomic) FCTagBanner *bannerImageForThemeBackground; // @synthesize bannerImageForThemeBackground=_bannerImageForThemeBackground;
@property(readonly, nonatomic) FCTagBanner *bannerImageForWhiteBackground; // @synthesize bannerImageForWhiteBackground=_bannerImageForWhiteBackground;
@property(readonly, nonatomic) FCTagBanner *defaultBannerImage;
@property(readonly, nonatomic) _Bool isWhite;
@property(readonly, nonatomic) FCTagBanner *bannerImageForMask; // @synthesize bannerImageForMask=_bannerImageForMask;
@property(readonly, nonatomic) long long feedType;
@property(readonly, nonatomic) NSString *articleRecirculationConfigJSON;
- (id)prefetchPurchaseOffer;
- (id)authorizationURL;
- (_Bool)isAuthenticationSetup;
- (_Bool)isPurchaseSetup;
- (_Bool)isNoLongerAvailable;
- (id)paidFeedIDForSection:(id)arg1 bin:(long long)arg2;
- (id)freeFeedIDForSection:(id)arg1 bin:(long long)arg2;
- (id)_feedConfigurationForSection:(id)arg1;
- (id)feedIDForBin:(long long)arg1;
- (id)paidFeedIDForBin:(long long)arg1;
- (id)freeFeedIDForBin:(long long)arg1;
- (_Bool)isEqualToTag:(id)arg1;
@property(readonly, nonatomic) _Bool isSubscribable;
@property(readonly, nonatomic) _Bool allowCustomBottomStyle;
@property(readonly, copy, nonatomic) id <FCFeedTheming> theme;
@property(readonly, nonatomic) id <FCTopicProviding> asTopic;
@property(readonly, nonatomic) id <FCSectionProviding> asSection;
@property(readonly, nonatomic) id <FCChannelProviding> asChannel;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initChannelFromNotificationWithIdentifier:(id)arg1 name:(id)arg2 nameImageAssetHandle:(id)arg3;
- (id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 defaultSection:(id)arg3 publisherAuthorizationURL:(id)arg4 publisherVerificationURL:(id)arg5;
- (id)initForTestingWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3;
- (void)_inflateFromJSONDictionary:(id)arg1 withVersion:(long long)arg2;
- (void)_inflateFromVersionlessJSONDictionary:(id)arg1;
- (void)_inflateFromJSONDictionary:(id)arg1;
@property(readonly, nonatomic) NSData *data;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isBlockedExplicitContent;
@property(readonly, nonatomic) NSArray *loadableFonts;
- (id)purchaseOfferableConfigurationsFromProtobufList:(id)arg1;
- (id)initWithTagRecord:(id)arg1 assetManager:(id)arg2 interestToken:(id)arg3;
- (id)initWithData:(id)arg1 context:(id)arg2;
- (id)initWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

