//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, _SFPBImage, _SFPBText;

@protocol _SFPBFormattedText <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int textColor;
@property(nonatomic) _Bool isBold;
@property(nonatomic) _Bool isEmphasized;
@property(retain, nonatomic) _SFPBImage *glyph;
@property(retain, nonatomic) _SFPBText *text;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

