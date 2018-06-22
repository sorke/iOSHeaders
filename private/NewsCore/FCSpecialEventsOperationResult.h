//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCColor, FCColorGradient, NSArray, NSDictionary, NSString;

@interface FCSpecialEventsOperationResult : NSObject
{
    _Bool _micaEnabled;
    long long _type;
    NSString *_titleText;
    FCColor *_titleColor;
    NSString *_fontName;
    double _fontSize;
    double _fontSizeiPad;
    double _fontTracking;
    double _fontTrackingiPad;
    double _titleOffsetHeight;
    double _titleOffsetHeightiPad;
    double _titleOffsetY;
    double _titleOffsetYiPad;
    NSString *_micaAnimationFileUrlString;
    NSString *_micaAnimationFileUrlStringiPad;
    NSString *_actionTitle;
    NSString *_actionUrlString;
    FCColorGradient *_backgroundColorGradient;
    NSArray *_groupFonts;
    NSArray *_specialEventItems;
    NSDictionary *_specialEventHeadlinesByArticleID;
    NSString *_fontUrlString;
}

@property(copy, nonatomic) NSString *fontUrlString; // @synthesize fontUrlString=_fontUrlString;
@property(retain, nonatomic) NSDictionary *specialEventHeadlinesByArticleID; // @synthesize specialEventHeadlinesByArticleID=_specialEventHeadlinesByArticleID;
@property(retain, nonatomic) NSArray *specialEventItems; // @synthesize specialEventItems=_specialEventItems;
@property(retain, nonatomic) NSArray *groupFonts; // @synthesize groupFonts=_groupFonts;
@property(copy, nonatomic) FCColorGradient *backgroundColorGradient; // @synthesize backgroundColorGradient=_backgroundColorGradient;
@property(copy, nonatomic) NSString *actionUrlString; // @synthesize actionUrlString=_actionUrlString;
@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(readonly, nonatomic) _Bool micaEnabled; // @synthesize micaEnabled=_micaEnabled;
@property(readonly, copy, nonatomic) NSString *micaAnimationFileUrlStringiPad; // @synthesize micaAnimationFileUrlStringiPad=_micaAnimationFileUrlStringiPad;
@property(copy, nonatomic) NSString *micaAnimationFileUrlString; // @synthesize micaAnimationFileUrlString=_micaAnimationFileUrlString;
@property(readonly, nonatomic) double titleOffsetYiPad; // @synthesize titleOffsetYiPad=_titleOffsetYiPad;
@property(readonly, nonatomic) double titleOffsetY; // @synthesize titleOffsetY=_titleOffsetY;
@property(readonly, nonatomic) double titleOffsetHeightiPad; // @synthesize titleOffsetHeightiPad=_titleOffsetHeightiPad;
@property(readonly, nonatomic) double titleOffsetHeight; // @synthesize titleOffsetHeight=_titleOffsetHeight;
@property(readonly, nonatomic) double fontTrackingiPad; // @synthesize fontTrackingiPad=_fontTrackingiPad;
@property(nonatomic) double fontTracking; // @synthesize fontTracking=_fontTracking;
@property(readonly, nonatomic) double fontSizeiPad; // @synthesize fontSizeiPad=_fontSizeiPad;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(copy, nonatomic) FCColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)specialEventsConfig;
- (id)initWithType:(long long)arg1 specialEventsGroupConfig:(id)arg2 specialEventItems:(id)arg3 specialEventHeadlinesByArticleID:(id)arg4;

@end

