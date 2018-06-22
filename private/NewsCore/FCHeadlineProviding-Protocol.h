//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FCClassifiable.h"
#import "FCFeedElement.h"
#import "FCFeedTransformationItem.h"
#import "NFCopying.h"
#import "NSObject.h"

@class FCArticleContentManifest, FCCoverArt, FCFeedPersonalizedArticleScoreProfile, FCHeadlineThumbnail, FCTopStoriesStyleConfiguration, NSArray, NSData, NSDate, NSSet, NSString, NSURL;

@protocol FCHeadlineProviding <NSObject, NFCopying, FCFeedElement, FCClassifiable, FCFeedTransformationItem>
@property(readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs;
@property(readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property(readonly, nonatomic) id <FCNativeAdProviding> associatedAd;
@property(readonly, nonatomic) _Bool isBlockedExplicitContent;
@property(readonly, nonatomic) _Bool showSubscriptionRequiredText;
@property(readonly, copy, nonatomic) NSDate *displayDate;
@property(readonly, nonatomic) FCTopStoriesStyleConfiguration *storyStyle;
@property(readonly, nonatomic) unsigned long long storyType;
@property(readonly, nonatomic) double globalUserFeedback;
@property(readonly, nonatomic) unsigned long long feedOrder;
@property(readonly, nonatomic) _Bool usesImageOnTopLayout;
@property(readonly, nonatomic) unsigned long long topStoryType;
@property(readonly, nonatomic) _Bool isTopStory;
@property(readonly, nonatomic) FCFeedPersonalizedArticleScoreProfile *scoreProfile;
@property(readonly, nonatomic) double tileProminenceScore;
@property(readonly, copy, nonatomic) NSSet *surfacedByTagIDs;
@property(readonly, copy, nonatomic) NSString *surfacedByBinID;
@property(readonly, copy, nonatomic) NSString *surfacedByTopicID;
@property(readonly, copy, nonatomic) NSString *surfacedByChannelID;
@property(readonly, copy, nonatomic) NSString *surfacedBySectionID;
@property(readonly, nonatomic, getter=isHiddenFromFeeds) _Bool hiddenFromFeeds;
@property(readonly, nonatomic, getter=isBoundToContext) _Bool boundToContext;
@property(readonly, nonatomic, getter=isPressRelease) _Bool pressRelease;
@property(readonly, nonatomic) _Bool showMinimalChrome;
@property(readonly, nonatomic) _Bool needsRapidUpdates;
@property(readonly, copy, nonatomic) NSURL *videoCallToActionURL;
@property(readonly, copy, nonatomic) NSString *videoCallToActionTitle;
@property(readonly, nonatomic) FCCoverArt *coverArt;
@property(readonly, nonatomic, getter=isPaid) _Bool paid;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, copy, nonatomic) NSArray *moreFromPublisherArticleIDs;
@property(readonly, copy, nonatomic) NSArray *relatedArticleIDs;
@property(readonly, copy, nonatomic) NSString *localDraftPath;
@property(readonly, nonatomic) _Bool isDraft;
@property(readonly, nonatomic, getter=isDeleted) _Bool deleted;
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *iAdSectionIDs;
@property(readonly, copy, nonatomic) NSArray *iAdKeywords;
@property(readonly, copy, nonatomic) NSArray *iAdCategories;
@property(readonly, copy, nonatomic) NSString *sponsoredBy;
@property(readonly, nonatomic, getter=isDisplayingAsNativeAd) _Bool displayAsNativeAd;
@property(readonly, nonatomic, getter=isSponsored) _Bool sponsored;
@property(readonly, nonatomic, getter=isFeatureCandidate) _Bool featureCandidate;
@property(readonly, nonatomic) double videoDuration;
@property(readonly, nonatomic) NSURL *videoURL;
@property(readonly, copy, nonatomic) NSArray *endOfArticleTopicIDs;
@property(readonly, copy, nonatomic) NSArray *topicIDs;
@property(readonly, copy, nonatomic) NSArray *topics;
@property(readonly, copy, nonatomic) NSDate *lastFetchedDate;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property(readonly, copy, nonatomic) NSURL *contentURL;
@property(readonly, copy, nonatomic) NSString *accessoryText;
@property(readonly, copy, nonatomic) NSString *shortExcerpt;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidget;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetLQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailUltraHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailMedium;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnail;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailLQ;
@property(readonly, nonatomic) _Bool hasThumbnail;
@property(readonly, nonatomic) struct CGRect thumbnailFocalFrame;
@property(readonly, copy, nonatomic) NSString *sourceName;
@property(readonly, copy, nonatomic) id <FCChannelProviding> sourceChannel;
@property(readonly, nonatomic) long long backendArticleVersion;
@property(readonly, copy, nonatomic) NSDate *publishDate;
@property(readonly, copy, nonatomic) NSString *titleCompact;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *primaryAudience;
@property(readonly, nonatomic) unsigned long long contentType;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, copy, nonatomic) NSString *referencedArticleID;
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *versionIdentifier;

@optional
@property(readonly, nonatomic) NSData *backingArticleRecordData;
@property(readonly, nonatomic) id <FCHeadlineStocksFields> stocksFields;
- (FCArticleContentManifest *)contentManifestWithContext:(id <FCContentContext>)arg1;
@end

