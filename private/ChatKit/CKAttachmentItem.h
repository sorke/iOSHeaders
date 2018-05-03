//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLPreviewItem.h"

@class NSDate, NSString, NSURL;

@interface CKAttachmentItem : NSObject <QLPreviewItem>
{
    struct CGSize _size;
    NSURL *_appendedBundleURL;
    _Bool _isSticker;
    _Bool _showDocumentIcon;
    _Bool _isIrisAsset;
    NSURL *_fileURL;
    NSString *_transferGUID;
    NSString *_guid;
    NSDate *_createdDate;
    NSString *_irisVideoPath;
    NSURL *_previewURL;
}

+ (unsigned long long)pxWidth;
+ (id)UTITypes;
+ (struct CGSize)defaultSize;
+ (id)previewSizingQueue;
+ (id)previewCache;
@property(retain, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(nonatomic) _Bool isIrisAsset; // @synthesize isIrisAsset=_isIrisAsset;
@property(retain, nonatomic) NSString *irisVideoPath; // @synthesize irisVideoPath=_irisVideoPath;
@property(nonatomic) _Bool showDocumentIcon; // @synthesize showDocumentIcon=_showDocumentIcon;
@property(nonatomic) _Bool isSticker; // @synthesize isSticker=_isSticker;
@property(retain, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) NSString *transferGUID; // @synthesize transferGUID=_transferGUID;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSURL *previewItemURL;
- (id)_getIrisBundleURL;
- (id)_getTempIrisBundleLocation;
- (id)_getTempIrisFolder;
- (id)calculateIrisVideoPath;
- (id)getIrisVideoPath;
- (id)dragItem;
- (id)pasteboardItem;
- (id)UTIType;
- (void)startDeferredSetup;
- (id)cachedPreview;
- (id)uncachedPreviewURL;
- (void)_savePreview:(id)arg1;
- (_Bool)canShareItem;
- (void)generatePreviewWithCompletion:(CDUnknownBlockType)arg1;
- (id)_savedPreviewFromURL:(id)arg1;
- (id)fileIcon;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)_removeAppendedBundle;
- (id)imageData;
- (id)initWithFileURL:(id)arg1 size:(struct CGSize)arg2 transferGUID:(id)arg3 guid:(id)arg4 createdDate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *previewItemTitle;
@property(readonly) Class superclass;

@end

