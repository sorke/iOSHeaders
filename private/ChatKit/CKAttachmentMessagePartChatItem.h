//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKMessagePartChatItem.h>

@class CKMediaObject, NSString, UIItemProvider;

@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem
{
    UIItemProvider *_dragItemProvider;
    CKMediaObject *_mediaObject;
}

@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *transferGUID;
- (id)dragItemProvider;
- (id)pasteboardItems;
- (_Bool)shouldCacheSize;
- (unsigned long long)balloonCorners;
- (Class)balloonViewClass;
- (_Bool)stickersSnapToPoint;
- (_Bool)canExport;
- (_Bool)canForward;
- (_Bool)canCopy;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (id)description;
- (id)composition;

@end

