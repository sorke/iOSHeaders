//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface AVTColorDescription : NSObject
{
    NSMutableDictionary *_colors;
    NSMutableDictionary *_variationMin;
    NSMutableDictionary *_variationMax;
    NSDictionary *_color;
}

@property(readonly) NSDictionary *color; // @synthesize color=_color;
- (void).cxx_destruct;
@property(readonly) NSDictionary *variationsMax;
@property(readonly) NSDictionary *variationsMin;
- (id)colors;
- (id)initWithDescription:(id)arg1;

@end

