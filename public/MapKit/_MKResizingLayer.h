//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _MKResizingLayer : CALayer
{
    NSMutableArray *_sizedLayers;
    _Bool _needsLayoutOnBoundsChange;
}

@property(nonatomic) _Bool needsLayoutOnBoundsChange; // @synthesize needsLayoutOnBoundsChange=_needsLayoutOnBoundsChange;
- (void).cxx_destruct;
- (void)setContentsScale:(double)arg1;
- (void)setMask:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)sizeSublayerToBounds:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *sizeToBoundsLayers;

@end

