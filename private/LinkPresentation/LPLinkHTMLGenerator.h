//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DOMDocument, DOMDocumentFragment, DOMElement, LPCSSResolver, LPCaptionBarPresentationProperties, LPHTMLComponent, LPHTMLVideoComponent, LPImage, LPLinkMetadata, LPMetadataProvider, LPPointUnit, LPTheme, LPVideo, NSString, NSURL, UIColor;

@interface LPLinkHTMLGenerator : NSObject
{
    LPMetadataProvider *_pendingMetadataProvider;
    _Bool _mayReceiveAdditionalMetadata;
    _Bool _usesComputedPresentationProperties;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_quotedText;
    LPImage *_image;
    LPVideo *_video;
    UIColor *_backgroundColor;
    LPPointUnit *_minimumRootHeight;
    DOMElement *_rootElement;
    LPHTMLComponent *_linkComponent;
    LPHTMLVideoComponent *_videoComponent;
    _Bool _everBuiltView;
    _Bool _useVariablesWhenUsingInlineStyles;
    _Bool _includeClassNamesWhenUsingInlineStyles;
    _Bool _includeDarkInterfaceInlineStyles;
    _Bool _allowsTapToLoad;
    _Bool _useInlineStyles;
    _Bool _applyCornerRadiusToLink;
    _Bool _generateEmailCompatibleMarkup;
    _Bool _isPreliminary;
    id <LPLinkHTMLGeneratorDelegate> _delegate;
    LPLinkMetadata *_metadata;
    NSURL *_URL;
    DOMDocument *_parentDocument;
    LPCSSResolver *_cssResolver;
    long long _style;
    LPTheme *_theme;
}

+ (void)initialize;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) _Bool isPreliminary; // @synthesize isPreliminary=_isPreliminary;
@property(readonly, nonatomic) LPTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) LPCSSResolver *cssResolver; // @synthesize cssResolver=_cssResolver;
@property(readonly, nonatomic) DOMDocument *parentDocument; // @synthesize parentDocument=_parentDocument;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool generateEmailCompatibleMarkup; // @synthesize generateEmailCompatibleMarkup=_generateEmailCompatibleMarkup;
@property(nonatomic) _Bool applyCornerRadiusToLink; // @synthesize applyCornerRadiusToLink=_applyCornerRadiusToLink;
@property(nonatomic) _Bool useInlineStyles; // @synthesize useInlineStyles=_useInlineStyles;
@property(nonatomic) __weak id <LPLinkHTMLGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setAllowsTapToLoad:) _Bool _allowsTapToLoad; // @synthesize _allowsTapToLoad;
@property(nonatomic, setter=_setIncludeDarkInterfaceInlineStyles:) _Bool _includeDarkInterfaceInlineStyles; // @synthesize _includeDarkInterfaceInlineStyles;
@property(nonatomic, setter=_setIncludeClassNamesWhenUsingInlineStyles:) _Bool _includeClassNamesWhenUsingInlineStyles; // @synthesize _includeClassNamesWhenUsingInlineStyles;
@property(nonatomic, setter=_setUseVariablesWhenUsingInlineStyles:) _Bool _useVariablesWhenUsingInlineStyles; // @synthesize _useVariablesWhenUsingInlineStyles;
- (void).cxx_destruct;
- (void)_didFollowLink;
@property(readonly, nonatomic) _Bool _canTapToLoad;
- (void)_rebuildView;
- (id)_createQuoteComponent;
- (id)_createMediaComponent;
- (id)_createMediaBottomCaptionBar;
- (id)_createMediaTopCaptionBar;
- (id)_createCaptionBar;
@property(readonly, nonatomic) LPPointUnit *minimumRootHeight;
@property(readonly, nonatomic) LPPointUnit *rootWidth;
@property(readonly, nonatomic) _Bool hasTallMedia;
@property(readonly, nonatomic) _Bool useFlexibleWidth;
- (void)_setPresentationProperties:(id)arg1;
- (void)_computePresentationPropertiesFromMetadata;
- (void)_setMetadata:(id)arg1 isFinal:(_Bool)arg2;
- (void)injectCSSIfNeeded;
- (void)clearCurrentLayout;
- (id)_URLForImage:(id)arg1;
- (id)_URLForResource:(id)arg1 withMIMEType:(id)arg2;
@property(readonly, nonatomic) _Bool delegateRespondsToURLForResource;
@property(readonly, retain, nonatomic) DOMDocumentFragment *documentFragment;
- (void)_fetchMetadata;
@property(readonly, nonatomic) _Bool hasPendingMetadataProvider;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2 document:(id)arg3;
- (id)initWithPresentationProperties:(id)arg1 document:(id)arg2;
- (id)initWithURL:(id)arg1 document:(id)arg2;
- (id)initWithMetadataLoadedFromURL:(id)arg1 document:(id)arg2;
- (id)init;

@end

