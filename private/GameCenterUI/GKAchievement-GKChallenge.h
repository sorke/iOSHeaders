//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKAchievement.h>

@interface GKAchievement (GKChallenge)
+ (void)reportAchievements:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)selectChallengeablePlayers:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)selectChallengeablePlayerIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;
- (id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@end
