//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SOSServerProtocol <NSObject>
- (void)mostRecentLocationSentWithCompletion:(void (^)(CLLocation *))arg1;
- (void)isSendingLocationUpdate:(void (^)(_Bool))arg1;
- (void)stopSendingLocationUpdate;
- (void)startSendingLocationUpdateForReason:(long long)arg1 WithCompletion:(void (^)(_Bool, id *))arg2;
- (void)startSendingLocationUpdateWithCompletion:(void (^)(_Bool, id *))arg1;
- (void)willStartSendingLocationUpdate;
@end

