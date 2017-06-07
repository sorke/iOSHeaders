//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDLayout.h>

#import <iWorkImport/TSDWrappable-Protocol.h>

@class NSString, TSDLayoutGeometry, TSDWrapSegments, TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSDDrawableLayout : TSDLayout <TSDWrappable>
{
    TSDWrapSegments *mCachedWrapSegments;
    TSUBezierPath *mCachedWrapPath;
    TSUBezierPath *mCachedExternalWrapPath;
}

- (_Bool)supportsInspectorPositioning;
- (void)invalidateParentForWrap;
- (void)i_invalidateWrap;
- (_Bool)allowsConnections;
- (void)parentDidChange;
- (void)processChangedProperty:(int)arg1;
@property(copy, nonatomic) TSDLayoutGeometry *geometry;
- (void)dragBy:(struct CGPoint)arg1;
- (void)invalidateExteriorWrap;
- (void)invalidate;
@property(readonly, nonatomic) _Bool hasAlpha;
- (int)wrapFitType;
- (int)wrapDirection;
- (int)wrapType;
- (_Bool)isHTMLWrap;
- (id)wrapSegments;
- (id)wrapPath;
- (id)i_externalWrapPath;
- (id)i_wrapPath;
- (id)i_computeWrapPath;
- (id)i_computeWrapPathClosed:(_Bool)arg1;
- (struct CGRect)boundsInRoot;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (void)dealloc;
- (unsigned long long)pageCountForAttachment:(id)arg1;
- (unsigned long long)pageNumberForAttachment:(id)arg1;
- (unsigned long long)pageNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
