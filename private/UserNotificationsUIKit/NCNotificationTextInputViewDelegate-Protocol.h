//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationAction, NCNotificationTextInputView, NSString;

@protocol NCNotificationTextInputViewDelegate <NSObject>
- (void)notificationTextInputView:(NCNotificationTextInputView *)arg1 didConfirmText:(NSString *)arg2 forAction:(NCNotificationAction *)arg3;
@end
