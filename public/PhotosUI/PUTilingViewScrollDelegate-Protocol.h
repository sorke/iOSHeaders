//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUTilingLayout, PUTilingScrollInfo, PUTilingView;

@protocol PUTilingViewScrollDelegate <NSObject>

@optional
- (struct CGPoint)tilingView:(PUTilingView *)arg1 targetVisibleOriginForProposedVisibleOrigin:(struct CGPoint)arg2 withLayout:(PUTilingLayout *)arg3;
- (struct CGPoint)tilingView:(PUTilingView *)arg1 initialVisibleOriginWithLayout:(PUTilingLayout *)arg2;
- (PUTilingScrollInfo *)tilingView:(PUTilingView *)arg1 scrollInfoWithLayout:(PUTilingLayout *)arg2;
@end

