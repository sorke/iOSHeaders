//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaItem;

@interface SUScriptMediaItem : SUScriptObject
{
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)scriptMediaTypeForNativeMediaType:(unsigned long long)arg1;
+ (unsigned long long)nativeMediaTypesForScriptMediaTypes:(id)arg1;
+ (id)copyScriptMediaTypesForNativeMediaTypes:(unsigned long long)arg1;
- (id)_className;
- (id)valueForProperty:(id)arg1;
- (id)imageURLWithWidth:(id)arg1 height:(id)arg2;
@property(readonly, nonatomic) MPMediaItem *nativeItem;

@end
