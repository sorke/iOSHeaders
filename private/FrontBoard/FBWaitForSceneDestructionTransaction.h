//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

#import "FBSceneManagerObserver.h"

@class FBScene, FBSceneManager, NSString;

@interface FBWaitForSceneDestructionTransaction : FBTransaction <FBSceneManagerObserver>
{
    FBSceneManager *_sceneManager;
    FBScene *_sceneToWaitForDeath;
}

@property(readonly, nonatomic) FBScene *scene; // @synthesize scene=_sceneToWaitForDeath;
- (void).cxx_destruct;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (_Bool)_canBeInterrupted;
- (void)_begin;
- (void)dealloc;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

