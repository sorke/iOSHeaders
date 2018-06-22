//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLKFont;

@interface NTKOneColumnModularSmallLayoutAttributes : NSObject
{
    CLKFont *_subtitleFont;
    double _subtitleBaselineOffset;
    double _marginWidth;
    double _imageOriginY;
    double _imageHeight;
    double _minimumFontSize;
    CLKFont *_titleFont;
    double _titleBaselineOffset;
}

+ (id)attributesForTemplate:(id)arg1 forDevice:(id)arg2;
@property(nonatomic) double titleBaselineOffset; // @synthesize titleBaselineOffset=_titleBaselineOffset;
@property(retain, nonatomic) CLKFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) double imageOriginY; // @synthesize imageOriginY=_imageOriginY;
@property(nonatomic) double marginWidth; // @synthesize marginWidth=_marginWidth;
@property(nonatomic) double subtitleBaselineOffset; // @synthesize subtitleBaselineOffset=_subtitleBaselineOffset;
@property(retain, nonatomic) CLKFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
- (void).cxx_destruct;

@end

