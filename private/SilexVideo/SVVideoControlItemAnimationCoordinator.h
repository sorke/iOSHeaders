//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoControlItemAnimating.h"

@class NSMutableArray, NSString;

@interface SVVideoControlItemAnimationCoordinator : NSObject <SVVideoControlItemAnimating>
{
    id <AVPlayerViewControllerAnimationCoordinator> _coordinator;
    NSMutableArray *_animationBlocks;
    NSMutableArray *_completionBlocks;
}

@property(readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(readonly, nonatomic) NSMutableArray *animationBlocks; // @synthesize animationBlocks=_animationBlocks;
@property(readonly, nonatomic) id <AVPlayerViewControllerAnimationCoordinator> coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (void)animateWithAnimationBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithAnimationCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

