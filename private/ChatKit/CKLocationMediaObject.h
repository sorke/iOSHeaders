//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKContactMediaObject.h>

#import "MKAnnotation.h"

@class NSString;

@interface CKLocationMediaObject : CKContactMediaObject <MKAnnotation>
{
    struct CLLocationCoordinate2D _coordinate;
}

+ (id)titleBarMaskImageForWidth:(double)arg1;
+ (id)placeholderPreviewCache;
+ (_Bool)isPreviewable;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (id)placeholderPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;
+ (id)vcardDataFromCLLocation:(id)arg1;
+ (Class)__ck_attachmentItemClass;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (id)generatePlaceholderThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)generatePlaceholderThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (_Bool)isDroppedPin;
- (id)vCardURLProperties;
- (id)bbPreviewFillToSize:(struct CGSize)arg1;
- (struct CGSize)bbSize;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (Class)previewBalloonViewClass;
@property(readonly, copy, nonatomic) NSString *title;
- (int)mediaType;
- (id)initWithTransfer:(id)arg1 isFromMe:(_Bool)arg2 suppressPreview:(_Bool)arg3;
- (id)mapItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

