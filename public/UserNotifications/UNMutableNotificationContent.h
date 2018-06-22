//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UserNotifications/UNNotificationContent.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSURL, UNNotificationIcon, UNNotificationSound;

@interface UNMutableNotificationContent : UNNotificationContent
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;
@property(nonatomic) unsigned long long summaryArgumentCount; // @dynamic summaryArgumentCount;
@property(copy, nonatomic) NSString *summaryArgument; // @dynamic summaryArgument;
@property(copy, nonatomic) NSSet *topicIdentifiers; // @dynamic topicIdentifiers;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *threadIdentifier; // @dynamic threadIdentifier;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(copy, nonatomic) UNNotificationSound *sound; // @dynamic sound;
@property(nonatomic) _Bool shouldUseRequestIdentifierForDismissalSync; // @dynamic shouldUseRequestIdentifierForDismissalSync;
@property(nonatomic) _Bool shouldSuppressSyncDismissalWhenRemoved; // @dynamic shouldSuppressSyncDismissalWhenRemoved;
@property(nonatomic) _Bool shouldSuppressScreenLightUp; // @dynamic shouldSuppressScreenLightUp;
@property(nonatomic) _Bool shouldSuppressDefaultAction; // @dynamic shouldSuppressDefaultAction;
@property(nonatomic) _Bool shouldPreventNotificationDismissalAfterDefaultAction; // @dynamic shouldPreventNotificationDismissalAfterDefaultAction;
@property(nonatomic) _Bool shouldBackgroundDefaultAction; // @dynamic shouldBackgroundDefaultAction;
@property(nonatomic) _Bool shouldAuthenticateDefaultAction; // @dynamic shouldAuthenticateDefaultAction;
@property(nonatomic) _Bool shouldIgnoreDoNotDisturb; // @dynamic shouldIgnoreDoNotDisturb;
@property(nonatomic) _Bool shouldHideTime; // @dynamic shouldHideTime;
@property(nonatomic) _Bool shouldHideDate; // @dynamic shouldHideDate;
@property(copy, nonatomic) NSArray *peopleIdentifiers; // @dynamic peopleIdentifiers;
@property(copy, nonatomic) NSString *launchImageName; // @dynamic launchImageName;
@property(nonatomic) _Bool hasDefaultAction; // @dynamic hasDefaultAction;
@property(copy, nonatomic) UNNotificationIcon *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *header; // @dynamic header;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSURL *defaultActionURL; // @dynamic defaultActionURL;
@property(copy, nonatomic) NSString *defaultActionTitle; // @dynamic defaultActionTitle;
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(copy, nonatomic) NSString *categoryIdentifier; // @dynamic categoryIdentifier;
@property(copy, nonatomic) NSString *body; // @dynamic body;
@property(copy, nonatomic) NSNumber *badge; // @dynamic badge;
@property(copy, nonatomic) NSArray *attachments; // @dynamic attachments;

@end

