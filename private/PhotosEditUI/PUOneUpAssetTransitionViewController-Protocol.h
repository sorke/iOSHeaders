//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUOneUpAssetTransitionContext, PUOneUpAssetTransitionInfo;

@protocol PUOneUpAssetTransitionViewController <NSObject>

@optional
- (PUOneUpAssetTransitionInfo *)createAssetTransitionInfo;
- (struct CGRect)oneUpAssetTransitionAssetFinalFrame:(id <PUOneUpAssetTransition>)arg1;
- (void)oneUpAssetTransitionDidEnd:(id <PUOneUpAssetTransition>)arg1;
- (void)oneUpAssetTransitionWillBegin:(id <PUOneUpAssetTransition>)arg1;
- (void)oneUpAssetTransition:(id <PUOneUpAssetTransition>)arg1 animateTransitionWithContext:(PUOneUpAssetTransitionContext *)arg2 duration:(double)arg3 completion:(void (^)(_Bool))arg4;
- (void)oneUpAssetTransition:(id <PUOneUpAssetTransition>)arg1 requestTransitionContextWithCompletion:(void (^)(PUOneUpAssetTransitionContext *))arg2;
@end

