//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDImager.h>

#import "TSDConnectedInfoReplacing.h"

@class KNAbstractSlide, KNBodyPlaceholderInfo, KNTitlePlaceholderInfo, NSString, TSUImage;

__attribute__((visibility("hidden")))
@interface KNImager : TSDImager <TSDConnectedInfoReplacing>
{
    _Bool _shouldShowInstructionalText;
    KNBodyPlaceholderInfo *_replacementBodyPlaceholder;
    KNTitlePlaceholderInfo *_replacementTitlePlaceholder;
    _Bool _shouldTintWhiteImages;
    unsigned long long _slideNumber;
    KNAbstractSlide *_slide;
    double _elementListThumbnailContentInset;
    struct CGSize _elementListThumbnailSize;
}

@property(nonatomic) _Bool shouldTintWhiteImages; // @synthesize shouldTintWhiteImages=_shouldTintWhiteImages;
@property(nonatomic) double elementListThumbnailContentInset; // @synthesize elementListThumbnailContentInset=_elementListThumbnailContentInset;
@property(nonatomic) struct CGSize elementListThumbnailSize; // @synthesize elementListThumbnailSize=_elementListThumbnailSize;
@property(nonatomic) _Bool shouldShowInstructionalText; // @synthesize shouldShowInstructionalText=_shouldShowInstructionalText;
@property(retain, nonatomic) KNBodyPlaceholderInfo *replacementBodyPlaceholder; // @synthesize replacementBodyPlaceholder=_replacementBodyPlaceholder;
@property(retain, nonatomic) KNTitlePlaceholderInfo *replacementTitlePlaceholder; // @synthesize replacementTitlePlaceholder=_replacementTitlePlaceholder;
@property(nonatomic) __weak KNAbstractSlide *slide; // @synthesize slide=_slide;
@property(nonatomic) unsigned long long slideNumber; // @synthesize slideNumber=_slideNumber;
- (void).cxx_destruct;
- (double)p_sizeMultiplierForDrawable:(id)arg1;
- (double)p_strokeWidthForScaleFactor:(double)arg1 drawable:(id)arg2;
- (id)p_strokeForShapeInfo:(id)arg1;
- (_Bool)p_requiresModifiedStrokeForDrawable:(id)arg1 atScaleFactor:(double)arg2;
- (void)p_prepareShapeInfoStroke:(id)arg1 atScaleFactor:(double)arg2 finalRect:(struct CGRect *)arg3;
- (void)p_prepareStyledInfoStyle:(id)arg1;
@property(readonly, nonatomic) TSUImage *elementListThumbnailImage;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (_Bool)isInfoAKeynoteMasterObject:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <TSDCanvasProxyDelegate> canvasProxyDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

