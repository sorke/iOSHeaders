//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXImageView.h>

@class SXContext, SXGalleryItem;

@interface SXGalleryItemImageView : SXImageView
{
    SXGalleryItem *_galleryItem;
    unsigned long long _index;
    SXContext *_context;
}

@property(readonly, nonatomic) SXContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) SXGalleryItem *galleryItem; // @synthesize galleryItem=_galleryItem;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)initWithGalleryItem:(id)arg1 forIndex:(unsigned long long)arg2 context:(id)arg3;

@end
