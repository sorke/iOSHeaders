//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SXMosaicGalleryColumnLayout : NSObject
{
    double _width;
    double _gutter;
}

@property(readonly, nonatomic) double gutter; // @synthesize gutter=_gutter;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
- (double)widthOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2;
- (double)positionOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2;
- (double)widthForColumnRange:(struct _NSRange)arg1 numberOfColumns:(unsigned long long)arg2;
- (double)positionForColumnRange:(struct _NSRange)arg1 numberOfColumns:(unsigned long long)arg2;
- (id)initWithWidth:(double)arg1 gutter:(double)arg2;

@end

