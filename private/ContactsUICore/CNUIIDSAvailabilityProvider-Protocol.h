//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNObservable, NSArray;
@protocol CNSchedulerProvider;

@protocol CNUIIDSAvailabilityProvider <NSObject>
- (CNObservable *)validateHandlesForIMessage:(NSArray *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
- (CNObservable *)validateHandlesForFaceTime:(NSArray *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
@end
