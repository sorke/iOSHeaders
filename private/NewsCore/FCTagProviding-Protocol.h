//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NFCopying.h"
#import "NSObject.h"

@class FCAssetHandle, FCColor, FCPurchaseOfferableConfiguration, NSArray, NSData, NSDate, NSString, NSURL, NTPBPublisherPaidDescriptionStrings;

@protocol FCTagProviding <NSObject, NFCopying>
@property(readonly, nonatomic) NSDate *publisherSpecifiedArticleIDsModifiedDate;
@property(readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs;
@property(readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property(readonly, nonatomic) _Bool isRealTimeTrackingEnabed;
@property(readonly, nonatomic) _Bool isHidden;
@property(readonly, nonatomic) unsigned long long groupingEligibility;
@property(readonly, nonatomic) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings;
@property(readonly, nonatomic) _Bool isBlockedExplicitContent;
@property(readonly, nonatomic) FCAssetHandle *nameImageCompactAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetHQAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetLQAssetHandle;
@property(readonly, nonatomic) _Bool publisherPaidWebAccessOptIn;
@property(readonly, nonatomic) _Bool publisherPaidLeakyPaywallOptOut;
@property(readonly, nonatomic) NSArray *publisherPaidOfferableConfigurations;
@property(readonly, nonatomic) NSArray *publisherPaidFeldsparablePurchaseIDs;
@property(readonly, copy, nonatomic) NSString *publisherPaidWebAccessURL;
@property(readonly, copy, nonatomic) NSString *publisherPaidVerificationURL;
@property(readonly, copy, nonatomic) NSString *publisherPaidAuthorizationURL;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) _Bool isNotificationEnabled;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, nonatomic) long long score;
@property(readonly, nonatomic) NSArray *pinnedArticleIDs;
@property(readonly, nonatomic) NSArray *allowedStorefrontIDs;
@property(readonly, nonatomic) NSArray *blockedStorefrontIDs;
@property(readonly, nonatomic) NSArray *iAdKeywords;
@property(readonly, nonatomic) NSArray *iAdCategories;
@property(readonly, copy, nonatomic) FCColor *groupTitleColor;
@property(readonly, copy, nonatomic) id <FCFeedTheming> theme;
@property(readonly, copy, nonatomic) NSString *coverArticleListID;
@property(readonly, nonatomic) FCAssetHandle *feedNavImageAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *coverImageAssetHandle;
@property(readonly, nonatomic) _Bool isSubscribable;
@property(readonly, nonatomic) NSArray *relatedChannelIDsForOnboarding;
@property(readonly, nonatomic) NSArray *relatedTopicIDsForOnboarding;
@property(readonly, nonatomic) NSArray *relatedChannelIDs;
@property(readonly, nonatomic) NSArray *relatedTopicIDs;
@property(readonly, copy, nonatomic) NSString *primaryAudience;
@property(readonly, copy, nonatomic) NSString *replacementID;
@property(readonly, nonatomic) _Bool isExplicitContent;
@property(readonly, nonatomic) _Bool isDeprecated;
@property(readonly, nonatomic) _Bool isPublic;
@property(readonly, nonatomic) long long contentProvider;
@property(readonly, copy, nonatomic) NSString *versionKey;
@property(readonly, copy, nonatomic) NSString *nameCompact;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSDate *loadDate;
@property(readonly, nonatomic) id <FCTopicProviding> asTopic;
@property(readonly, nonatomic) id <FCSectionProviding> asSection;
@property(readonly, nonatomic) id <FCChannelProviding> asChannel;
@property(readonly, nonatomic) _Bool hideAccessoryText;
@property(readonly, nonatomic) unsigned long long tagType;
- (void)ppt_overrideFeedID:(NSString *)arg1;
- (NSURL *)authorizationURL;
- (NSString *)feedIDForBin:(long long)arg1;
- (NSString *)paidFeedIDForBin:(long long)arg1;
- (NSString *)freeFeedIDForBin:(long long)arg1;
- (FCPurchaseOfferableConfiguration *)prefetchPurchaseOffer;
- (_Bool)isAuthenticationSetup;
- (_Bool)isPurchaseSetup;
- (_Bool)isEqualToTag:(id <FCTagProviding>)arg1;
- (_Bool)isNoLongerAvailable;

@optional
@property(readonly, nonatomic) NSData *backingTagRecordData;
@end

