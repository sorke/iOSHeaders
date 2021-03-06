//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, TIKeyboardSecureCandidateRGBColor;

@interface TIKeyboardSecureCandidateTextTraits : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_fontName;
    double _maxFontSize;
    double _minFontSize;
    TIKeyboardSecureCandidateRGBColor *_textColor;
    double _yCoordinate;
    double _baselineOffset;
}

+ (id)traitsWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4 yCoordinate:(double)arg5 baselineOffset:(double)arg6;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) double baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property(nonatomic) double yCoordinate; // @synthesize yCoordinate=_yCoordinate;
@property(retain, nonatomic) TIKeyboardSecureCandidateRGBColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double minFontSize; // @synthesize minFontSize=_minFontSize;
@property(nonatomic) double maxFontSize; // @synthesize maxFontSize=_maxFontSize;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4 yCoordinate:(double)arg5 baselineOffset:(double)arg6;
- (id)initWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4;
- (id)initWithFontName:(id)arg1 fontSize:(double)arg2 textColor:(id)arg3;
- (id)init;

@end

