//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_AURemoteParameterSynchronization.h"

@class MIDICIProfile, NSArray;

@protocol AUAudioUnitHostProtocol <_AURemoteParameterSynchronization>
- (void)MIDICIProfileChanged:(unsigned char)arg1 channel:(unsigned char)arg2 profile:(MIDICIProfile *)arg3 enabled:(_Bool)arg4;
- (void)propertiesChanged:(NSArray *)arg1;
@end

