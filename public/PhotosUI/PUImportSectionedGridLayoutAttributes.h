//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUSectionedGridLayoutAttributes.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface PUImportSectionedGridLayoutAttributes : PUSectionedGridLayoutAttributes
{
    UIColor *_backgroundColor;
    double _strokeWidth;
    UIColor *_bottomStrokeColor;
}

@property(retain, nonatomic) UIColor *bottomStrokeColor; // @synthesize bottomStrokeColor=_bottomStrokeColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

