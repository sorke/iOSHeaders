//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSDate, NSString;

@interface GKTurnBasedParticipantInternal : GKInternalRepresentation
{
    NSString *_sessionID;
    GKPlayerInternal *_player;
    GKPlayerInternal *_invitedBy;
    NSString *_inviteMessage;
    NSString *_status;
    NSDate *_lastTurnDate;
    NSDate *_timeoutDate;
    unsigned int _matchOutcome;
    unsigned char _slot;
}

+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
@property(nonatomic) unsigned char slot; // @synthesize slot=_slot;
@property(nonatomic) unsigned int matchOutcome; // @synthesize matchOutcome=_matchOutcome;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *inviteMessage; // @synthesize inviteMessage=_inviteMessage;
@property(retain, nonatomic) GKPlayerInternal *invitedBy; // @synthesize invitedBy=_invitedBy;
@property(retain, nonatomic) NSDate *timeoutDate; // @synthesize timeoutDate=_timeoutDate;
@property(retain, nonatomic) NSDate *lastTurnDate; // @synthesize lastTurnDate=_lastTurnDate;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)descriptionSubstitutionMap;
- (id)serverRepresentation;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
@property(readonly, nonatomic) NSString *playerID;

@end

