//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface EKUIEventActionHandler : NSObject
{
}

+ (id)sharedInstance;
- (void)donateInteractionForAction:(id)arg1 onEvent:(id)arg2;
- (id)_intentForAction:(id)arg1 onEvent:(id)arg2;
- (void)removeInteractionsForCalendar:(id)arg1;
- (void)handleEventDeletion:(id)arg1;
- (void)handleEventUpdate:(id)arg1;
- (void)handleEventCreation:(id)arg1;

@end
