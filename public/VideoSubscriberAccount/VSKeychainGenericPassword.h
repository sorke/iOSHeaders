//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSKeychainItem.h>

@class NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VSKeychainGenericPassword : VSKeychainItem
{
}

@property(copy, nonatomic) NSString *generic;
@property(copy, nonatomic) NSString *service;
@property(copy, nonatomic) NSString *account;
@property(nonatomic, getter=isNegative) _Bool negative;
@property(nonatomic, getter=isInvisible) _Bool invisible;
@property(nonatomic, getter=isSynchronizable) _Bool synchronizable;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSNumber *typeCode;
@property(copy, nonatomic) NSNumber *creatorCode;
@property(copy, nonatomic) NSString *comment;
@property(copy, nonatomic) NSString *itemDescription;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(readonly, copy, nonatomic) NSDate *creationDate;
@property(copy, nonatomic) NSString *accessGroup;
- (id)_faultWhileAccessingPrimitiveValueForKey:(id)arg1;
- (void)_notifyWhileSettingPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (id)init;

@end
