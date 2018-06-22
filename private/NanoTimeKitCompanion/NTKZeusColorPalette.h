//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface NTKZeusColorPalette : NSObject
{
    unsigned long long _color;
    UIColor *_dialColor;
    UIColor *_complicationColor;
    UIColor *_secondHandColor;
    UIColor *_minuteHandColor;
    UIColor *_hourHandColor;
    UIColor *_handInlayColor;
    UIColor *_backgroundColor;
    double _secondHandAlpha;
    unsigned long long _bleed;
}

+ (id)swatchImageForColor:(unsigned long long)arg1;
+ (id)swatchColorForColor:(unsigned long long)arg1;
+ (id)paletteForColor:(unsigned long long)arg1;
+ (id)zeusSilverColor;
+ (id)zeusOrangeColor;
@property(readonly, nonatomic) unsigned long long bleed; // @synthesize bleed=_bleed;
@property(readonly, nonatomic) double secondHandAlpha; // @synthesize secondHandAlpha=_secondHandAlpha;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIColor *handInlayColor; // @synthesize handInlayColor=_handInlayColor;
@property(readonly, nonatomic) UIColor *hourHandColor; // @synthesize hourHandColor=_hourHandColor;
@property(readonly, nonatomic) UIColor *minuteHandColor; // @synthesize minuteHandColor=_minuteHandColor;
@property(readonly, nonatomic) UIColor *secondHandColor; // @synthesize secondHandColor=_secondHandColor;
@property(readonly, nonatomic) UIColor *complicationColor; // @synthesize complicationColor=_complicationColor;
@property(readonly, nonatomic) UIColor *dialColor; // @synthesize dialColor=_dialColor;
- (void).cxx_destruct;
- (id)initWithColor:(unsigned long long)arg1;

@end

