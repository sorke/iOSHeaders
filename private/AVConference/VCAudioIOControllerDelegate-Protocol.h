//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSError;

@protocol VCAudioIOControllerDelegate <NSObject>
- (void)didResume;
- (void)didSuspend;
- (void)controllerFormatChanged:(struct AudioStreamBasicDescription)arg1;
- (void)didStop:(_Bool)arg1 error:(NSError *)arg2;
- (void)didStart:(_Bool)arg1 error:(NSError *)arg2;
@end
