//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDate, NSError;

@protocol HKWorkoutSessionClientInterface
- (void)client_synchronizeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)client_didFailWithError:(NSError *)arg1;
- (void)client_didGenerateEvents:(NSArray *)arg1;
- (void)client_didChangeToState:(long long)arg1 date:(NSDate *)arg2;
- (void)client_didUpdateStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2;
@end

