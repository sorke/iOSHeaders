//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKMessageEntryViewLayoutMetrics, CKUITheme, NSArray, NSAttributedString, NSDateFormatter, NSDictionary, NSParagraphStyle, NSString, UIActivityIndicatorView, UIFont, UIImage;

@interface CKUIBehavior : NSObject
{
    long long _HUDStyle;
    UIImage *_emojiReplyImage;
    UIImage *_dictationReplyImage;
    UIImage *_messageReplyImage;
    UIImage *_digitalTouchReplyImage;
    UIImage *_arouetReplyImage;
    UIImage *_surfReplyImage;
    double _waveformMaxWidth;
}

+ (id)fontWithStyle:(id)arg1 adjustedForMaxSizeCategory:(id)arg2;
+ (id)orderedContentSizeCategories;
+ (id)sharedBehaviors;
@property(readonly, nonatomic) double waveformMaxWidth; // @synthesize waveformMaxWidth=_waveformMaxWidth;
@property(readonly, nonatomic) UIImage *surfReplyImage; // @synthesize surfReplyImage=_surfReplyImage;
@property(readonly, nonatomic) UIImage *arouetReplyImage; // @synthesize arouetReplyImage=_arouetReplyImage;
@property(readonly, nonatomic) UIImage *digitalTouchReplyImage; // @synthesize digitalTouchReplyImage=_digitalTouchReplyImage;
@property(readonly, nonatomic) UIImage *messageReplyImage; // @synthesize messageReplyImage=_messageReplyImage;
@property(readonly, nonatomic) UIImage *dictationReplyImage; // @synthesize dictationReplyImage=_dictationReplyImage;
@property(readonly, nonatomic) UIImage *emojiReplyImage; // @synthesize emojiReplyImage=_emojiReplyImage;
@property(nonatomic) long long HUDStyle; // @synthesize HUDStyle=_HUDStyle;
- (void).cxx_destruct;
@property(readonly, nonatomic) double callButtonLongPressDuration;
@property(readonly, nonatomic) struct UIEdgeInsets callButtonImageInsets;
@property(readonly, nonatomic) double callButtonSize;
@property(readonly, nonatomic) UIFont *syncProgressLabelFont;
@property(readonly, nonatomic) UIFont *businessDescriptionVCTextViewFont;
@property(readonly, nonatomic) UIFont *businessInfoViewTitleLabelFont;
@property(readonly, nonatomic) UIFont *businessInfoViewDescriptionTextFont;
@property(readonly, nonatomic) _Bool shouldPopoverSuggestionsBanner;
@property(readonly, nonatomic) UIFont *stickerDetailsTimestampFont;
@property(readonly, nonatomic) UIFont *stickerDetailsStickerPackFont;
@property(readonly, nonatomic) UIFont *stickerDetailsSenderFont;
@property(readonly, nonatomic) UIFont *stickerDetailsTitleFont;
- (struct CGSize)stickerSizeScaledWithInitialSize:(struct CGSize)arg1 imageScale:(double)arg2 userScale:(double)arg3 rectifiedScreenScale:(double)arg4 maxWidth:(double)arg5;
@property(readonly, nonatomic) unsigned long long stickerScreenScale;
@property(readonly, nonatomic) double dragTranscriptScrollDisplayLinkMaxDelta;
@property(readonly, nonatomic) double dragTranscriptScrollThreshold;
@property(readonly, nonatomic) double dragEdgeLayoutIntentPadding;
@property(readonly, nonatomic) double dragBalloonTailCropWidth;
@property(readonly, nonatomic) double dragBalloonCornerRadius;
@property(readonly, nonatomic) double dragBalloonWidthIncreasedAttractorThreshold;
@property(readonly, nonatomic) double dragBalloonHeightReducedAttractorThreshold;
@property(readonly, nonatomic) double dragPinchGestureScaleFactor;
@property(readonly, nonatomic) UIFont *appLabelFont;
- (struct UIEdgeInsets)pluginBalloonInsetsForMessageFromMe:(_Bool)arg1;
@property(readonly, nonatomic) double browserSwitcherScrollerHeight;
@property(readonly, nonatomic) double chatMagnifiedChromeBottomInset;
@property(readonly, nonatomic) double chatChromeBottomInset;
@property(readonly, nonatomic) double browserSwitcherEdgeGestureWidth;
@property(readonly, nonatomic) double browserSwitcherGutterWidth;
@property(readonly, nonatomic) double browserSwitcherExpandThreshold;
@property(readonly, nonatomic) double browserSwitcherExpandedGrabberHeaderHeight;
@property(readonly, nonatomic) double browserSwitcherCompactGrabberVisibleHeight;
@property(readonly, nonatomic) double browserSwitcherCompactGrabberHeaderHeight;
@property(readonly, nonatomic) unsigned long long suggestedMinimumRecentsCount;
@property(readonly, nonatomic) unsigned long long suggestedAppStripLimit;
@property(readonly, nonatomic) unsigned long long appIconPrefetchLimit;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentTopName;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentMiddleName;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentStackName2;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentStackName3;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentBottomTopName;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentBottomMiddleName;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentTopBackgroundName;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentStackBackgroundName2;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentStackBackgroundName3;
@property(readonly, nonatomic) NSString *messageAcknowledgmentPickerBarBubbleTailName;
@property(readonly, nonatomic) NSString *messageAcknowledgmentPickerBarBubbleName;
- (id)largeMessageAcknowledgmentPollingImageNameForAcknowledgmentType:(long long)arg1;
- (id)messageAcknowledgmentPollingImageNameForAcknowledgmentType:(long long)arg1;
- (id)messageAcknowledgmentImageNameForType:(long long)arg1;
@property(readonly, nonatomic) NSArray *messageAcknowledgmentPickerBarAcknowledgmentOrder;
@property(readonly, nonatomic) UIFont *messageAcknowledgmentVoteCountFont;
@property(readonly, nonatomic) struct CGSize aggregateAcknowledgmentTranscriptBalloonSize;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentPickerBarOffsetFromBalloon;
@property(readonly, nonatomic) struct CGPoint messageAcknowledgmentPickerBarBubbleStartingOrigin;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentPickerBarBubbleTailSize;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentPickerBarItemViewSize;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentPickerBarAcknowledgmentItemBalloonSize;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentPickerBarAcknowledgmentImageSize;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentPickerBarSize;
@property(readonly, nonatomic) struct CGPoint messageAcknowledgmentPickerBarRelativePosition;
@property(readonly, nonatomic) struct CGPoint messageAcknowledgmentTranscriptBalloonRelativePosition;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentTranscriptAcknowledgmentImageSize;
@property(readonly, nonatomic) struct UIEdgeInsets messageAcknowledgmentTranscriptGlyphInset;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentTranscriptBalloonSize;
- (id)fullscreenPickerActionLayoutAxisPrioritiesForWidth:(double)arg1;
@property(readonly, nonatomic) Class acknowledgementPickerBarClass;
@property(readonly, nonatomic) unsigned long long messageAcknowledgmentVotingStackSize;
@property(readonly, nonatomic) struct CGSize businessBannerSize;
@property(readonly, nonatomic) UIImage *navBarHeaderAudioImage;
@property(readonly, nonatomic) UIImage *navBarHeaderVideoImage;
@property(readonly, nonatomic) UIImage *navBarHeaderChevronImage;
@property(readonly, nonatomic) UIImage *businessVerifiedImageSmall;
@property(readonly, nonatomic) UIImage *businessVerifiedImageLarge;
@property(readonly, nonatomic) UIImage *whiteA2AckImage;
@property(readonly, nonatomic) UIImage *whiteA1AckImage;
@property(readonly, nonatomic) UIImage *whiteH2AckImage;
@property(readonly, nonatomic) UIImage *whiteH1AckImage;
@property(readonly, nonatomic) UIImage *whiteHaAckImage;
@property(readonly, nonatomic) UIImage *whiteQuestionMarkDotAckImage;
@property(readonly, nonatomic) UIImage *whiteQuestionMarkGlyphAckImage;
@property(readonly, nonatomic) UIImage *whiteExclamationLeftAckImage;
@property(readonly, nonatomic) UIImage *whiteExclamationRightAckImage;
@property(readonly, nonatomic) UIImage *whiteThumbsDownAckImage;
@property(readonly, nonatomic) UIImage *whiteThumbsUpAckImage;
@property(readonly, nonatomic) UIImage *redHeartAckImage;
@property(readonly, nonatomic) UIImage *grayA2AckImage;
@property(readonly, nonatomic) UIImage *grayH2AckImage;
@property(readonly, nonatomic) UIImage *grayA1AckImage;
@property(readonly, nonatomic) UIImage *grayH1AckImage;
@property(readonly, nonatomic) UIImage *grayHaAckImage;
@property(readonly, nonatomic) UIImage *grayQuestionMarkDotAckImage;
@property(readonly, nonatomic) UIImage *grayQuestionMarkGlyphAckImage;
@property(readonly, nonatomic) UIImage *grayExclamationRightAckImage;
@property(readonly, nonatomic) UIImage *grayExclamationLeftAckImage;
@property(readonly, nonatomic) UIImage *grayThumbsDownAckImage;
@property(readonly, nonatomic) UIImage *grayThumbsUpAckImage;
@property(readonly, nonatomic) UIImage *grayHeartAckImage;
- (void)prewarmAcknowledgementsImage;
@property(readonly, nonatomic) double bannerAdditionalOffset;
@property(readonly, nonatomic) struct CGSize bannerCellSize;
@property(readonly, nonatomic) UIFont *navigationHeaderJoinLabelFont;
@property(readonly, nonatomic) UIFont *avatarNameFont;
@property(readonly, nonatomic) UIFont *avatarStackTitleFont;
@property(readonly, nonatomic) double avatarPancakeMaxOffset;
@property(readonly, nonatomic) double avatarPancakeGroupOffset;
@property(readonly, nonatomic) struct CGSize avatarCutoutSize;
@property(readonly, nonatomic) double avatarContactImageNameMargin;
@property(readonly, nonatomic) double avatarNameWidth;
@property(readonly, nonatomic) double avatarSpacingMargin;
@property(readonly, nonatomic) struct CGSize avatarSize;
@property(readonly, nonatomic) UIFont *iCloudTextFont;
@property(readonly, nonatomic) UIFont *downloadButtonFont;
@property(readonly, nonatomic) UIFont *headerFont;
@property(readonly, nonatomic) UIFont *locationSubtitleFont;
@property(readonly, nonatomic) UIFont *recipientNameFont;
@property(readonly, nonatomic) UIFont *nameFieldFont;
@property(readonly, nonatomic) _Bool shouldAlignRecipientGlyphsWithMargins;
@property(readonly, nonatomic) UIImage *whatsNewViewApplePayImage;
@property(readonly, nonatomic) UIFont *whatsNewViewDescriptionLabelFont;
@property(readonly, nonatomic) UIFont *whatsNewViewBulletPointTextLabelFont;
@property(readonly, nonatomic) UIFont *whatsNewViewBulletPointSymbolLabelFont;
@property(readonly, nonatomic) double whatsNewViewBulletPointTextTrailingAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double whatsNewViewBulletPointSymbolLeadingAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) UIFont *welcomeViewTitleLabelFont;
@property(readonly, nonatomic) UIFont *welcomeViewConfirmButtonFont;
@property(readonly, nonatomic) UIFont *welcomeViewCancelButtonFont;
@property(readonly, nonatomic) double welcomeViewContentViewTopAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double welcomeViewContentViewLeadingAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double photoPickerMaxPhotoHeight;
- (double)photoPickerMaxPopoverPhotoHeight;
- (double)photoPickerMaxZoomedPhotoHeightForAlertWidth:(double)arg1;
- (double)photoPickerMaxPhotoWidthForAlertWidth:(double)arg1;
@property(readonly, nonatomic) _Bool photoPickerUsesVitality;
@property(readonly, nonatomic) _Bool photoPickerShouldZoomOnSelection;
@property(readonly, nonatomic) UIImage *photoPickerDisabledBadge;
@property(readonly, nonatomic) UIImage *photoPickerOffBadge;
@property(readonly, nonatomic) UIImage *photoPickerOnBadge;
@property(readonly, nonatomic) struct UIEdgeInsets photoPickerSectionInsets;
@property(readonly, nonatomic) double photoPickerInterItemSpacing;
@property(readonly, nonatomic) unsigned long long numberOfAssetsInPhotoPicker;
@property(readonly, nonatomic) unsigned long long numberOfButtonsInPhotoPicker;
@property(readonly, nonatomic) double photoPickerPopoverWidth;
@property(readonly, nonatomic) double attachmentBrowserHeaderLabelPadding;
@property(readonly, nonatomic) struct UIEdgeInsets attachmentBrowserFeedLayoutSectionInset;
@property(readonly, nonatomic) struct UIEdgeInsets attachmentBrowserGridSectionInset;
@property(readonly, nonatomic) double attachmentBrowserGridMinimumLineSpacing;
@property(readonly, nonatomic) double attachmentBrowserGridInterItemSpacing;
@property(readonly, nonatomic) struct CGSize attachmentBrowserDefaultSizeForSquare;
@property(readonly, nonatomic) double dividerHeight;
@property(readonly, nonatomic) _Bool detailsSeperatorsFollowLayoutMargins;
@property(readonly, nonatomic) _Bool shouldAnimateGifsInPhotoGrid;
@property(readonly, nonatomic) UIFont *audioHintFont;
@property(readonly, nonatomic) UIFont *characterCountFont;
@property(readonly, nonatomic) double entryViewMaxHandWritingPluginShelfHeight;
@property(readonly, nonatomic) double entryViewMinPluginShelfHeight;
@property(readonly, nonatomic) double entryViewMaxExtensionShelfHeight;
@property(readonly, nonatomic) double entryViewMaxPluginShelfHeight;
@property(readonly, nonatomic) CKMessageEntryViewLayoutMetrics *entryViewlayoutMetrics;
@property(readonly, nonatomic) struct UIEdgeInsets entryViewHorizontalCoverInsets;
@property(readonly, nonatomic) struct UIEdgeInsets entryViewVerticalCoverInsets;
@property(readonly, nonatomic) double entryViewCoverMinHeight;
@property(readonly, nonatomic) double entryFieldCoverLineWidth;
@property(readonly, nonatomic) _Bool entryFieldShouldUseNewPhotoUI;
@property(readonly, nonatomic) _Bool isAppStripInKeyboard;
@property(readonly, nonatomic) _Bool entryFieldShouldUseBackdropView;
@property(readonly, nonatomic) double maxAudioRecordingDuration;
@property(readonly, nonatomic) double minAudioRecordingDuration;
- (double)toFieldPreferredHeight;
@property(readonly, nonatomic) _Bool presentsFullscreenInViewService;
@property(readonly, nonatomic) _Bool shouldRefreshAlternateAddressesSheet;
@property(readonly, nonatomic) _Bool shouldAutomaticallyCheckAvailabilityOfAlternateAddresses;
@property(readonly, nonatomic) _Bool shouldShowDisclosureChevronInRecipientAtoms;
@property(readonly, nonatomic) _Bool shouldHomogenizeAtomsForPreferredService;
@property(readonly, nonatomic) UIImage *unmuteButtonImage;
@property(readonly, nonatomic) UIImage *muteButtonImage;
@property(readonly, nonatomic) UIImage *playButtonArrowImage;
@property(readonly, nonatomic) UIImage *playButtonImage;
@property(readonly, nonatomic) UIImage *textDocumentIcon;
@property(readonly, nonatomic) UIImage *errorDocumentIcon;
@property(readonly, nonatomic) UIImage *genericDocumentIcon;
@property(readonly, nonatomic) UIFont *contactAttachmentOrgFont;
@property(readonly, nonatomic) UIFont *contactAttachmentNameFont;
@property(readonly, nonatomic) UIFont *attachmentTextFont;
@property(readonly, nonatomic) UIFont *previewTitleFont;
@property(readonly, nonatomic) double photoSheetVideoIconPadding;
@property(readonly, nonatomic) struct CGSize photoSheetProgressIndicatorSize;
- (double)transcriptWaveformWidthForDuration:(double)arg1;
@property(readonly, nonatomic) unsigned long long waveformPowerLevelWidthIncrement;
@property(readonly, nonatomic) unsigned long long waveformGapWidth;
@property(readonly, nonatomic) unsigned long long waveformPowerLevelWidth;
@property(readonly, nonatomic) double waveformHeight;
- (struct UIEdgeInsets)thumbnailContentAlignmentInsetsForOrientation:(BOOL)arg1;
@property(readonly, nonatomic) double previewTitleBarHeight;
@property(readonly, nonatomic) struct UIEdgeInsets minimumPlayButtonInsets;
- (struct CGSize)mapThumbnailFillSizeForWidth:(double)arg1;
- (struct CGSize)thumbnailFillSizeForWidth:(double)arg1 imageSize:(struct CGSize)arg2;
@property(readonly, nonatomic) double contactBalloonOrgBottomSpacing;
@property(readonly, nonatomic) double contactBalloonNameOrgSpacing;
@property(readonly, nonatomic) double contactBalloonTopNameSpacing;
@property(readonly, nonatomic) double contactBalloonHeight;
@property(readonly, nonatomic) double contactBalloonMinWidth;
@property(readonly, nonatomic) double contactBalloonInnerItemSpacing;
@property(readonly, nonatomic) struct CGSize contactImageSize;
@property(readonly, nonatomic) struct CGSize attachmentBalloonSize;
@property(readonly, nonatomic) struct CGSize documentIconSize;
@property(readonly, nonatomic) long long playButtonBackdropStyle;
@property(readonly, nonatomic) double waveformMinLinearPowerLevel;
@property(readonly, nonatomic) double waveformMinDbPowerLevel;
@property(readonly, nonatomic) unsigned long long waveformMinPowerLevelsCount;
@property(readonly, nonatomic) unsigned long long waveformMaxPowerLevelsCount;
@property(readonly, nonatomic) double waveformMaxWidthDuration;
@property(readonly, nonatomic) _Bool supportsPassbookAttachments;
@property(readonly, nonatomic) _Bool playButtonPunchesOutArrow;
@property(readonly, nonatomic) _Bool useSingleLineForContactVCardNames;
@property(readonly, nonatomic) _Bool showsVCalViewer;
@property(readonly, nonatomic) _Bool showsFileSizeInSubtitle;
@property(readonly, nonatomic) _Bool calculatesWidthForAttachmentBalloons;
@property(readonly, nonatomic) _Bool shouldFillAttachmentBalloon;
@property(readonly, nonatomic) Class contactBalloonViewClass;
@property(readonly, nonatomic) Class audioBalloonCellClass;
@property(readonly, nonatomic) Class audioBalloonViewClass;
@property(readonly, nonatomic) Class attachmentViewClass;
- (struct CGSize)locationShareBalloonSizeForWidth:(double)arg1 offerState:(long long)arg2;
- (double)locationShareBalloonLabelMaxHeightForOfferState:(long long)arg1;
@property(readonly, nonatomic) double locationShareBalloonContactImageDiameter;
- (double)locationShareBalloonAdditionalVertPadding;
@property(readonly, nonatomic) double locationShareBalloonButtonCharge;
@property(readonly, nonatomic) double locationShareBalloonLabelPadding;
@property(readonly, nonatomic) double locationShareBalloonMaxVisibleMapHeight;
@property(readonly, nonatomic) double locationShareBalloonButtonHeight;
- (struct CGSize)locationOfferMapThumbnailFillSizeForWidth:(double)arg1;
- (id)imageNameForBalloonDescriptor:(struct CKBalloonDescriptor_t)arg1;
- (id)imageNameForBalloonDescriptorWithStrokedStyle:(struct CKBalloonDescriptor_t)arg1;
- (id)imageNameForBalloonDescriptorWithFilledStyle:(struct CKBalloonDescriptor_t)arg1;
- (id)multiway_chevronImage;
- (id)business_chevronImage;
- (id)black_chevronImage;
- (id)white_chevronImage;
- (id)red_chevronImage;
- (id)siri_chevronImage;
- (id)blue_chevronImage;
- (id)green_chevronImage;
- (id)gray_chevronImage;
- (id)chevronImageForColorType:(BOOL)arg1;
- (id)multiwayGrayChevronImage;
- (id)systemGrayChevronImage;
- (id)whiteChevronImage;
- (id)roundBalloonName;
- (id)impactSkinnyBalloonName;
- (id)impactBalloonName;
@property(readonly, nonatomic) NSString *strokedTaillessBalloonName;
@property(readonly, nonatomic) NSString *strokedBalloonName;
@property(readonly, nonatomic) NSString *skinnyTaillessBalloonName;
@property(readonly, nonatomic) NSString *skinnyBalloonName;
@property(readonly, nonatomic) NSString *taillessBallonName;
@property(readonly, nonatomic) NSString *balloonName;
@property(readonly, nonatomic) NSParagraphStyle *balloonParagraphStyle;
@property(readonly, nonatomic) UIFont *audioBalloonTimeFont;
@property(readonly, nonatomic) UIFont *bigEmojiFont;
@property(readonly, nonatomic) UIFont *balloonSubjectFont;
@property(readonly, nonatomic) UIFont *balloonTextFont;
@property(readonly, nonatomic) double horizontalBalloonBadgeInset;
@property(readonly, nonatomic) double verticalBalloonBadgeInset;
@property(readonly, nonatomic) double nanoNoteSenderContentSpace;
@property(readonly, nonatomic) struct UIEdgeInsets audioBalloonAlignmentInsets;
@property(readonly, nonatomic) double audioBalloonProgressInset;
@property(readonly, nonatomic) double audioBalloonTimeInset;
@property(readonly, nonatomic) double audioBalloonWaveformTimeSpace;
- (double)audioBalloonTimeWidthForDuration:(double)arg1;
- (struct UIEdgeInsets)balloonMaskFrameInsetsWithBalloonShape:(BOOL)arg1;
- (struct UIEdgeInsets)balloonMaskFrameInsets;
@property(readonly, nonatomic) struct UIEdgeInsets balloonLineFragmentInsets;
@property(readonly, nonatomic) double balloonLineFragmentPadding;
@property(readonly, nonatomic) struct UIEdgeInsets balloonTextContainerInset;
- (struct UIEdgeInsets)attachmentBalloonAlignmentRectInsetsWithTailShape:(BOOL)arg1;
- (struct UIEdgeInsets)balloonMaskAlignmentRectInsetsWithTailShape:(BOOL)arg1;
@property(readonly, nonatomic) double textAlignmentRectInsetsScaleFactor;
@property(readonly, nonatomic) struct UIEdgeInsets bigEmojiAlignmentRectInsets;
- (struct UIEdgeInsets)taillessAttachmentBalloonAlignmentRectInsets;
- (struct UIEdgeInsets)attachmentBalloonAlignmentRectInsets;
- (struct UIEdgeInsets)bigEmojiBalloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)taillessBalloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)balloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)balloonMaskCapInsetsWithBalloonDescriptor:(struct CKBalloonDescriptor_t)arg1;
- (struct UIEdgeInsets)taillessSkinnyBalloonMaskCapInsets;
- (struct UIEdgeInsets)skinnyBalloonMaskCapInsets;
- (struct UIEdgeInsets)taillessBalloonMaskCapInsets;
- (struct UIEdgeInsets)balloonMaskCapInsets;
- (struct CGSize)balloonMaskSizeWithBalloonDescriptor:(struct CKBalloonDescriptor_t)arg1;
- (struct CGSize)roundBalloonMaskSizeWithTailShape:(BOOL)arg1;
- (struct CGSize)skinnyBalloonMaskSizeWithTailShape:(BOOL)arg1;
- (struct CGSize)balloonMaskSizeWithTailShape:(BOOL)arg1;
- (struct CGSize)balloonMaskTailSizeForTailShape:(BOOL)arg1;
@property(readonly, nonatomic) double extensionBalloonMaximumHeight;
- (struct UIEdgeInsets)extensionBalloonContentInsetsForOrientation:(BOOL)arg1;
- (struct CGRect)extensionIconBadgeRectForOrientation:(BOOL)arg1;
- (struct CGSize)taillessSkinnyBalloonMaskSize;
- (struct CGSize)skinnyBalloonMaskSize;
- (struct CGSize)taillessBalloonMaskSize;
- (struct CGSize)balloonMaskSize;
@property(readonly, nonatomic) double skinnyBalloonWidthDifference;
- (double)balloonMaskTailHeight;
- (double)balloonMaskTailWidth;
@property(readonly, nonatomic) long long maxNumExtensionRemoteViewControllers;
@property(readonly, nonatomic) _Bool showsBalloonBadges;
@property(readonly, nonatomic) _Bool opensLocationsInMapsApp;
@property(readonly, nonatomic) _Bool showsPlaceCardForBalloonViewTitleTap;
@property(readonly, nonatomic) _Bool handlesBalloonViewTitleTapsSeparately;
@property(readonly, nonatomic) _Bool showsBalloonChevron;
@property(readonly, nonatomic) _Bool playsInlineVideo;
@property(readonly, nonatomic) _Bool shouldAdjustWidthForSendFailure;
@property(readonly, nonatomic) _Bool hyphenatesTextContent;
@property(readonly, nonatomic) _Bool shouldUseDynamicGradient;
@property(readonly, nonatomic) UIImage *replayImage;
@property(readonly, nonatomic) UIImage *facetimeAudioIcon;
@property(readonly, nonatomic) UIImage *conversationListFacetimeVideoIcon;
@property(readonly, nonatomic) UIImage *locationShareActionIcon;
@property(readonly, nonatomic) UIFont *transcriptJunkHeaderButtonFont;
@property(readonly, nonatomic) UIFont *transcriptJunkHeaderTitleFont;
@property(readonly, nonatomic) NSDictionary *transcriptButtonTextAttributes;
@property(readonly, nonatomic) NSDictionary *drawerTranscriptTextAttributes;
@property(readonly, nonatomic) NSDictionary *datestampTranscriptBoldTextAttributes;
@property(readonly, nonatomic) NSDictionary *datestampTranscriptTextAttributes;
@property(readonly, nonatomic) NSDictionary *stampTranscriptBoldTextAttributes;
@property(readonly, nonatomic) NSDictionary *stampTranscriptTextAttributes;
@property(readonly, nonatomic) NSDictionary *senderTranscriptTextAttributes;
- (id)breadcrumbTranscriptTextAttributes;
- (id)statusTranscriptBoldTextAttributesForOrientation:(BOOL)arg1;
- (id)statusTranscriptTextAttributesForOrientation:(BOOL)arg1;
- (id)_rightStatusTranscriptBoldTextAttributes;
@property(readonly, nonatomic) NSDictionary *conversationCellSummaryPreviewTextAttributes;
@property(readonly, nonatomic) NSDictionary *conversationCellSummaryBoldIconTextAttributes;
- (id)_leftStatusTranscriptBoldTextAttributes;
- (id)_rightStatusTranscriptTextAttributes;
- (id)_leftStatusTranscriptTextAttributes;
- (id)transcriptDrawerFont;
@property(readonly, nonatomic) UIFont *transcriptBoldTextFont;
@property(readonly, nonatomic) UIFont *transcriptDateTextFont;
@property(readonly, nonatomic) UIFont *transcriptTextFont;
@property(readonly, nonatomic) double transcriptScrollToBottomThreshold;
@property(readonly, nonatomic) double transcriptJunkHeaderButtonHeight;
- (double)composeBalloonMaxWidthForEntryContentViewWidth:(double)arg1;
- (double)previewBalloonMaxWidthForBalloonMaxWidth:(double)arg1;
- (double)balloonMaxWidthForTranscriptWidth:(double)arg1 marginInsets:(struct UIEdgeInsets)arg2 shouldShowPluginButtons:(_Bool)arg3 shouldShowCharacterCount:(_Bool)arg4 shouldCoverSendButton:(_Bool)arg5;
@property(readonly, nonatomic) double balloonMaxWidthPercent;
@property(readonly, nonatomic) double contactPhotoBalloonMargin;
- (double)balloonBalloonTranscriptSpace:(unsigned char)arg1;
@property(readonly, nonatomic) double largeTranscriptSpace;
@property(readonly, nonatomic) double mediumTranscriptSpace;
@property(readonly, nonatomic) double smallTranscriptSpace;
@property(readonly, nonatomic) double bottomTranscriptSpace;
@property(readonly, nonatomic) double topTranscriptSpace;
@property(readonly, nonatomic) double checkmarkHorizontalPadding;
- (void)invalidateTranscriptDrawerWidth;
- (double)transcriptDrawerMaxContentOffsetXForMarginInsets:(struct UIEdgeInsets)arg1;
- (double)transcriptDrawerWidthForMarginInsets:(struct UIEdgeInsets)arg1;
- (double)transcriptDrawerOverlapForMarginInsets:(struct UIEdgeInsets)arg1;
@property(readonly, nonatomic) double transcriptDrawerGestureAcceleration;
- (double)transcriptDrawerSpace;
@property(readonly, nonatomic) struct UIEdgeInsets contactPhotoTranscriptInsets;
@property(readonly, nonatomic) struct UIEdgeInsets stampTranscriptInsets;
@property(readonly, nonatomic) struct UIEdgeInsets senderTranscriptInsets;
@property(readonly, nonatomic) struct UIEdgeInsets balloonTranscriptInsets;
@property(readonly, nonatomic) double emojiPreviewMaxWidth;
@property(readonly, nonatomic) double previewMaxWidth;
@property(readonly, nonatomic) struct UIEdgeInsets minTranscriptMarginInsets;
@property(readonly, nonatomic) double transcriptButtonCharge;
@property(readonly, nonatomic) struct UIEdgeInsets transcriptButtonContentEdgeInsets;
@property(readonly, nonatomic) struct UIEdgeInsets transcriptCustomStatusImageEdgeInsets;
@property(readonly, nonatomic) double transcriptCustomStatusImagePadding;
@property(readonly, nonatomic) struct CGSize transcriptCustomStatusImageDefaultSize;
@property(readonly, nonatomic) struct CGSize statusSaveButtonTranscriptTextSize;
@property(readonly, nonatomic) NSAttributedString *statusSaveButtonTranscriptText;
@property(readonly, nonatomic) double transcriptBoldTextHeight;
@property(readonly, nonatomic) struct UIEdgeInsets transcriptBoldTextAlignmentInsets;
@property(readonly, nonatomic) double transcriptDrawerContactImagePadding;
@property(readonly, nonatomic) double transcriptDrawerContactImageDiameter;
@property(readonly, nonatomic) double transcriptContactImageDiameter;
@property(readonly, nonatomic) UIActivityIndicatorView *transcriptHeaderIndicatorView;
@property(readonly, nonatomic) long long transcriptLoadingIndicatorStyle;
@property(readonly, nonatomic) _Bool supportsContiguousAttachments;
@property(readonly, nonatomic) _Bool scrollToBottomStopsAtTopOfLastBubble;
@property(readonly, nonatomic) _Bool transcriptCanUseOpaqueMask;
@property(readonly, nonatomic) _Bool usesDataDetectorsUI;
@property(readonly, nonatomic) _Bool shouldInsetForStatusBar;
@property(readonly, nonatomic) _Bool timestampsPushBalloons;
@property(readonly, nonatomic) _Bool showsReplyButtonsInTranscript;
@property(readonly, nonatomic) _Bool shouldUseRotisserieScrolling;
@property(readonly, nonatomic) _Bool shouldUseDynamicScrolling;
@property(readonly, nonatomic) _Bool shouldShowContactPhotosInTranscript;
@property(readonly, nonatomic) _Bool supportsTypingIndicatorAnimation;
@property(readonly, nonatomic) _Bool showsLoadMoreItem;
@property(readonly, nonatomic) UIImage *forwardImage;
@property(readonly, nonatomic) UIFont *readerFont;
@property(readonly, nonatomic) double updateTranscriptInsetsAnimationDuration;
@property(readonly, nonatomic) double editingTransitionAnimationDuration;
@property(readonly, nonatomic) double resizeMessageEntryViewAnimationDuration;
@property(readonly, nonatomic) double throwMessageAnimationDuration;
@property(readonly, nonatomic) double scrollInNewMessageAnimationDuration;
@property(readonly, nonatomic) double fadeInBubbleAnimationDuration;
- (double)_transcriptAnimationScaleFactor;
@property(readonly, nonatomic) double progressThresholdForTitleUpdateAnimation;
@property(readonly, nonatomic) _Bool shouldSuppressDynamicsOnKeyboardPresentation;
@property(readonly, nonatomic) _Bool shouldHideStatusBarForFullScreenEffects;
@property(readonly, nonatomic) double sendProgressTitleTransitionProgressThreshold;
@property(readonly, nonatomic) _Bool showsProgressInNavigationBar;
@property(readonly, nonatomic) _Bool shouldUseSendAnimation;
@property(readonly, nonatomic) _Bool shouldBackfillTranscript;
@property(readonly, nonatomic) Class businessChatControllerClass;
@property(readonly, nonatomic) Class chatControllerClass;
@property(readonly, nonatomic) UIImage *liveConversationIndicatorImage;
@property(readonly, nonatomic) UIImage *defaultWaveformImage;
@property(readonly, nonatomic) UIImage *trashImage;
@property(readonly, nonatomic) UIImage *detailsImage;
@property(readonly, nonatomic) UIImage *readPinnedImage;
@property(readonly, nonatomic) UIImage *unreadPinnedImage;
@property(readonly, nonatomic) UIImage *unreadDNDImage;
@property(readonly, nonatomic) UIImage *readDNDImage;
@property(readonly, nonatomic) UIImage *unreadImage;
@property(readonly, nonatomic) UIFont *conversationListGroupCountFont;
@property(readonly, nonatomic) UIFont *conversationListDateFont;
@property(readonly, nonatomic) UIFont *conversationListSummaryFont;
@property(readonly, nonatomic) UIFont *conversationListGroupSenderFont;
@property(readonly, nonatomic) UIFont *conversationListSenderFont;
@property(readonly, nonatomic) double conversationListMultipleContactsImageDiameter;
@property(readonly, nonatomic) double conversationListContactImageDiameter;
@property(readonly, nonatomic) double conversationListMinimumWidthForHiddenContactImage;
@property(readonly, nonatomic) _Bool showsSegmentedControlForFilteredConversationList;
@property(readonly, nonatomic) _Bool showsConversationListCellChevronImage;
@property(readonly, nonatomic) _Bool hidesUnreadIndicatorWhenEditing;
@property(readonly, nonatomic) _Bool showsNoMessagesDialog;
@property(readonly, nonatomic) _Bool shouldShowSearchBarInConversationList;
@property(readonly, nonatomic) _Bool canShowContactPhotosInConversationList;
@property(readonly, nonatomic) _Bool usesPersistentConversationSelection;
@property(readonly, nonatomic) _Bool selectNewConversationOnDeletion;
@property(readonly, nonatomic) _Bool selectNewConversationOnStateRestore;
@property(readonly, nonatomic) _Bool showPendingInConversationList;
@property(readonly, nonatomic) Class navigationBarClass;
@property(readonly, nonatomic) Class conversationListNavigationControllerClass;
@property(readonly, nonatomic) Class conversationListTableViewClass;
@property(readonly, nonatomic) NSArray *acceptableUTIs;
@property(readonly, nonatomic) UIImage *chevronImage;
@property(readonly, nonatomic) unsigned long long conversationListCellMaxSummaryLength;
@property(readonly, nonatomic) unsigned long long conversationListCellSummaryNumberOfLines;
@property(readonly, nonatomic) double conversationListCellRightMargin;
@property(readonly, nonatomic) double conversationListCellLargeTextLeftMargin;
@property(readonly, nonatomic) double conversationListCellLeftMargin;
@property(readonly, nonatomic) struct UIEdgeInsets conversationListFilterSegmentInset;
@property(readonly, nonatomic) double conversationListEditingTableMarginWidth;
@property(readonly, nonatomic) double conversationListTableMarginWidth;
@property(readonly, nonatomic) _Bool conversationListCellUsesLargeTextLayout;
@property(readonly, nonatomic) double conversationListCellBackgroundPadding;
@property(readonly, nonatomic) double summaryDateConversationListSpace;
@property(readonly, nonatomic) double senderSummaryConversationListSpace;
@property(readonly, nonatomic) double accessibilityBottomConversationListSpace;
@property(readonly, nonatomic) double bottomConversationListSpace;
@property(readonly, nonatomic) double largeTextTopConversationListSpace;
@property(readonly, nonatomic) double topConversationListSpace;
- (double)conversationListSummaryBodyLeading;
- (double)conversationListSenderBodyLeading;
@property(readonly, nonatomic) struct UIEdgeInsets landscapeKeyboardInsets;
@property(readonly, nonatomic) double maxTranscriptPortraitHeight;
@property(readonly, nonatomic) double maxTranscriptPortraitWidth;
- (double)maxPrimaryColumnWidthForInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) double maxPrimaryColumnWidth;
@property(readonly, nonatomic) _Bool showMMSSetup;
@property(readonly, nonatomic) struct CGSize appIconSize;
@property(readonly, nonatomic) unsigned long long maxNumberOfItemsPerAppDrawerPage;
@property(readonly, nonatomic) unsigned long long maxNumLiveBrowserViewsToKeepInViewHierarchy;
@property(readonly, nonatomic) _Bool isRunningInStoreDemoMode;
@property(readonly, nonatomic) _Bool photosIsWhitelisted;
@property(readonly, nonatomic) _Bool cameraIsWhitelisted;
@property(readonly, nonatomic) _Bool mailIsWhitelisted;
@property(readonly, nonatomic) _Bool faceTimeAudioIsWhitelisted;
@property(readonly, nonatomic) _Bool faceTimeVideoIsWhitelisted;
@property(readonly, nonatomic) _Bool phoneIsWhitelisted;
@property(readonly, nonatomic) _Bool isN56Device;
@property(readonly, nonatomic) double actionMenuWindowLevel;
@property(readonly, nonatomic) double videoControllerWindowLevel;
@property(readonly, nonatomic) double presentationControllerWindowLevel;
@property(readonly, nonatomic) _Bool canAccessPhotos;
@property(readonly, nonatomic) _Bool canAccessContacts;
@property(readonly, nonatomic) NSDateFormatter *timestampDateFormatter;
@property(readonly, nonatomic) unsigned long long commonRepliesLoadLimit;
@property(readonly, nonatomic) unsigned long long conversationCacheSize;
@property(readonly, nonatomic) unsigned long long initialConversationSizingMessageCount;
@property(readonly, nonatomic) unsigned long long defaultConversationSummaryMessageCount;
- (unsigned long long)minBalloonsForTranscriptHeight;
@property(readonly, nonatomic) unsigned long long defaultConversationLoadMoreCount;
@property(readonly, nonatomic) unsigned long long initialConversationViewingMessageCount;
@property(readonly, nonatomic) _Bool shouldSizeInitialViewingMessageCount;
@property(readonly, nonatomic) _Bool shouldLoadInitialViewingMessageCount;
@property(readonly, nonatomic) unsigned long long defaultConversationViewingMessageCount;
@property(readonly, nonatomic) unsigned long long supportedInterfaceOrientations;
@property(readonly, nonatomic) double transcriptHeaderViewMaxRows;
@property(readonly, nonatomic) _Bool isAccessibilityPreferredContentSizeCategory;
- (double)navigationBarExpandedHeightValue;
- (double)navigationBarCollapsedHeightValue;
@property(readonly, nonatomic) double navigationBarMaxHeight;
@property(readonly, nonatomic) double maxNavigationBarExpandedHeightValue;
@property(readonly, nonatomic) double maxNavigationBarCollapsedHeightValue;
@property(readonly, nonatomic) double maxNavigationBarNoContactPhotoExpandedHeightValue;
@property(readonly, nonatomic) double maxNavigationBarNoContactPhotoCollapsedHeightValue;
@property(readonly, nonatomic) double minNavigationBarHeightValue;
@property(readonly, nonatomic) double maxNavigationBarHeightValue;
@property(readonly, nonatomic) double navigationBarMinHeight;
@property(readonly, nonatomic) double resumeToConversationListTimeInterval;
@property(readonly, nonatomic) _Bool shouldOnlyResumeToConversationListAfterTimeout;
@property(readonly, nonatomic) _Bool usesNavigationBarControls;
@property(readonly, nonatomic) _Bool usesEntryView;
@property(readonly, nonatomic) _Bool isProximityMonitoringSupported;
@property(readonly, nonatomic) _Bool joystickUsesWindow;
@property(readonly, nonatomic) _Bool usesActionMenu;
@property(readonly, nonatomic) _Bool presentForwardingUIModally;
@property(readonly, nonatomic) _Bool recordsRecentContact;
@property(readonly, nonatomic) _Bool showsCompositionPanel;
@property(readonly, nonatomic) _Bool showsSendAnimation;
@property(readonly, nonatomic) _Bool automaticallyShowsKeyboard;
@property(readonly, nonatomic) _Bool darkUIEnabled;
@property(readonly, nonatomic) _Bool isSizeConstrained;
@property(readonly, nonatomic) _Bool promptsForReadReceiptsSetting;
@property(readonly, nonatomic) _Bool resetsIdleTimer;
@property(readonly, nonatomic) _Bool shouldUseTranslucentBars;
@property(readonly, nonatomic) _Bool shouldGrabBackgroundAssertion;
@property(readonly, nonatomic) _Bool canPresentOverKeyboard;
@property(readonly, nonatomic) _Bool usesPopovers;
@property(readonly, nonatomic) _Bool presentsQuickLookController;
@property(readonly, nonatomic) _Bool lowClearanceInLandscape;
@property(readonly, nonatomic) _Bool shouldSuppressRotationInNewCompose;
@property(readonly, nonatomic) _Bool usesUncollapsedSplitview;
@property(readonly, nonatomic) double raiseToTalkErrorMaxDuration;
@property(readonly, nonatomic) double raiseToTalkAutoSendMaxDuration;
@property(readonly, nonatomic) double locationValidInterval;
@property(readonly, nonatomic) long long locationShareEODHour;
@property(readonly, nonatomic) double locationShareOneHourTimeInterval;
@property(readonly, nonatomic) double muteEightHourTimeInterval;
@property(readonly, nonatomic) double muteOneHourTimeInterval;
@property(readonly, nonatomic) CKUITheme *theme;

@end

