//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BCDictionaryImageSerializable.h"

@class NSDictionary, NSString, UIImage;

@interface BCMessageInfo : NSObject <BCDictionaryImageSerializable>
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_alternateTitle;
    NSString *_imageIdentifier;
    NSString *_imageDescription;
    UIImage *_image;
    NSString *__style;
}

@property(nonatomic) NSString *_style; // @synthesize _style=__style;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageDescription; // @synthesize imageDescription=_imageDescription;
@property(retain, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
@property(retain, nonatomic) NSString *alternateTitle; // @synthesize alternateTitle=_alternateTitle;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *style;
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 style:(id)arg3 alternateTitle:(id)arg4 imageIdentifier:(id)arg5 imageDescription:(id)arg6;

@end

