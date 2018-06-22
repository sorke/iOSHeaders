//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, UIImage;

@interface BCImage : NSObject
{
    NSData *_imageData;
    NSString *_identifier;
    NSString *_imageDescription;
}

@property(retain, nonatomic) NSString *imageDescription; // @synthesize imageDescription=_imageDescription;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithImageData:(id)arg1 identifier:(id)arg2 description:(id)arg3;

@end

