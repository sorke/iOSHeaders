//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TVAppStyle : NSObject
{
    NSMutableDictionary *_stylesMap;
    CDStruct_81add385 _width;
    CDStruct_81add385 _minWidth;
    CDStruct_81add385 _maxWidth;
    CDStruct_81add385 _height;
    CDStruct_81add385 _minHeight;
    CDStruct_81add385 _maxHeight;
    CDStruct_81add385 _padding;
    CDStruct_81add385 _margin;
    CDStruct_81add385 _interitemSpacing;
}

@property(nonatomic) CDStruct_81add385 interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) CDStruct_81add385 margin; // @synthesize margin=_margin;
@property(nonatomic) CDStruct_81add385 padding; // @synthesize padding=_padding;
@property(nonatomic) CDStruct_81add385 maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) CDStruct_81add385 minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) CDStruct_81add385 height; // @synthesize height=_height;
@property(nonatomic) CDStruct_81add385 maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) CDStruct_81add385 minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) CDStruct_81add385 width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)_setValue:(id)arg1 forStyleProperty:(id)arg2;
- (id)valueForStyle:(id)arg1;

@end

