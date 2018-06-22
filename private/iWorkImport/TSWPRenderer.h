//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSWPRenderer : NSObject
{
    _Bool _flipShadows;
    struct CGContext *_context;
    double _viewScale;
    TSUBezierPath *_interiorClippingPath;
}

+ (struct __CTFont *)invisiblesFont;
@property(retain, nonatomic) TSUBezierPath *interiorClippingPath; // @synthesize interiorClippingPath=_interiorClippingPath;
@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
@property(nonatomic) _Bool flipShadows; // @synthesize flipShadows=_flipShadows;
@property(readonly, nonatomic) struct CGContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)p_setCTMAndTextPositionForFragment:(const struct TSWPLineFragment *)arg1;
- (void)p_drawListLabelForFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2 lineDrawFlags:(unsigned int)arg3;
- (void)p_drawInvisiblesBreakLine:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawAdornmentGlyphs:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawAttachmentAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (_Bool)p_canvasSelectionIncludesDrawableOfAttachmentAtCharIndex:(unsigned long long)arg1 state:(const struct TSWPDrawingState *)arg2;
- (void)p_drawHiddenDeletionsAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawInvisiblesAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawAttachmentGlyphAtPosition:(CDStruct_316206b0)arg1 fragment:(const struct TSWPLineFragment *)arg2;
- (void)p_drawTextInRunsForLine:(struct __CTLine *)arg1 fragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3 tateChuYoko:(_Bool)arg4 baseRange:(struct _NSRange)arg5 isFirstLineRef:(_Bool)arg6;
- (void)p_strokeWavyLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 width:(double)arg3;
- (void)p_strokeLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 width:(double)arg3;
- (void)p_drawAdornmentLineBackgroundRect:(id)arg1 lineDrawFlags:(unsigned int)arg2 drawingState:(const struct TSWPDrawingState *)arg3 bounds:(struct CGRect)arg4;
- (void)p_drawAdornmentLine:(id)arg1 drawingState:(const struct TSWPDrawingState *)arg2 lineFragment:(const struct TSWPLineFragment *)arg3 lineFragmentStart:(struct CGPoint)arg4 vertical:(_Bool)arg5;
- (void)p_drawAutocorrectionMarkingsFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2;
- (void)p_drawDictationMarkingsFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2;
- (void)p_drawWordMarkingsForFragment:(const struct TSWPLineFragment *)arg1 color:(id)arg2 ranges:(id)arg3 suppressRange:(struct _NSRange)arg4 drawingState:(const struct TSWPDrawingState *)arg5;
- (_Bool)p_shouldClipFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2 lineDrawFlags:(unsigned int)arg3 updateRect:(struct CGRect)arg4 outClipRect:(struct CGRect *)arg5;
- (void)drawAdornmentRects:(id)arg1 forColumn:(id)arg2 foreground:(_Bool)arg3;
- (void)drawFragment:(const struct TSWPLineFragment *)arg1 updateRect:(struct CGRect)arg2 drawingState:(const struct TSWPDrawingState *)arg3 runState:(CDStruct_3b6efdb6 *)arg4 lineDrawFlags:(unsigned int)arg5;
- (void)didRenderFragments;
- (void)willRenderFragmentsWithDrawingState:(const struct TSWPDrawingState *)arg1;
- (void)setupFontSmoothingWithDrawingState:(const struct TSWPDrawingState *)arg1 attributes:(id)arg2;
- (struct CGSize)convertSizeToDeviceSpace:(struct CGSize)arg1;
- (struct CGRect)getClipBoundingBox;
- (void)dealloc;
- (id)initWithContext:(struct CGContext *)arg1;

@end

