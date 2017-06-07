//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NNMKSyncedAccount : NSObject
{
    _Bool _shouldArchive;
    _Bool _resendRequested;
    NSString *_accountId;
    NSString *_displayName;
    NSArray *_emailAddresses;
    unsigned long long _resendInterval;
}

@property(nonatomic) unsigned long long resendInterval; // @synthesize resendInterval=_resendInterval;
@property(nonatomic) _Bool resendRequested; // @synthesize resendRequested=_resendRequested;
@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(nonatomic) _Bool shouldArchive; // @synthesize shouldArchive=_shouldArchive;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end
