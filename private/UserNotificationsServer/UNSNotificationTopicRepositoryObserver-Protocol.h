//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UNSNotificationTopicRepository;

@protocol UNSNotificationTopicRepositoryObserver <NSObject>
- (void)topicRepository:(UNSNotificationTopicRepository *)arg1 didChangeTopicsForBundleIdentifier:(NSString *)arg2;
@end

