//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantConfig : NSObject
{
    NSData *_participantData;
    NSString *_uuid;
    unsigned long long _idsParticipantID;
    _Bool _audioEnabled;
    _Bool _videoEnabled;
    _Bool _frequencyMeteringEnabled;
    _Bool _audioMuted;
    float _volume;
    float _audioPosition;
    _Bool _audioPaused;
    _Bool _videoPaused;
    unsigned char _videoQuality;
    unsigned int _visibilityIndex;
}

@property(nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property(nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic) _Bool videoPaused; // @synthesize videoPaused=_videoPaused;
@property(nonatomic) _Bool audioPaused; // @synthesize audioPaused=_audioPaused;
@property(nonatomic) float audioPosition; // @synthesize audioPosition=_audioPosition;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool audioMuted; // @synthesize audioMuted=_audioMuted;
@property(nonatomic) _Bool frequencyMeteringEnabled; // @synthesize frequencyMeteringEnabled=_frequencyMeteringEnabled;
@property(nonatomic) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) unsigned long long idsParticipantID; // @synthesize idsParticipantID=_idsParticipantID;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSData *participantData; // @synthesize participantData=_participantData;
- (id)description;
- (void)dealloc;

@end

