//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKContactsSearchManager, NSArray;

@protocol CKContactsSearchManagerDelegate <NSObject>
- (NSArray *)conversationCacheForContactsSearchManager:(CKContactsSearchManager *)arg1;
- (void)contactsSearchManager:(CKContactsSearchManager *)arg1 finishedSearchingWithResults:(NSArray *)arg2;
@end

