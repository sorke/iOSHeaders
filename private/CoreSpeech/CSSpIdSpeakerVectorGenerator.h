//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSSpIdSpeakerVectorGenerator : NSObject
{
}

- (void)endAudio;
- (void)processAudioData:(id)arg1;
@property(readonly, nonatomic) unsigned long long spIdType;
- (id)initWithCSspIdType:(unsigned long long)arg1 withSysConfigFile:(id)arg2 sysConfigRoot:(id)arg3 delegate:(id)arg4;

@end

