//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSArray, NSSet;

@interface FCFileCoordinatedTodayWidgetDropboxTransaction : NSObject <NSCopying>
{
    unsigned long long _transactionType;
    NSArray *_insertedOrUpdatedHistoryItems;
    NSSet *_deletedArticleIDs;
}

+ (void)_mergeItem:(id)arg1 intoItem:(id)arg2;
+ (id)collapsedTransactionOfTransactions:(id)arg1;
+ (id)transactionToMutateSeenArticlesWithInsertedOrUpdatedHistoryItems:(id)arg1 deletedArticleIDs:(id)arg2;
+ (id)transactionToClearSeenArticles;
+ (id)transactionOfIdentity;
@property(copy, nonatomic) NSSet *deletedArticleIDs; // @synthesize deletedArticleIDs=_deletedArticleIDs;
@property(copy, nonatomic) NSArray *insertedOrUpdatedHistoryItems; // @synthesize insertedOrUpdatedHistoryItems=_insertedOrUpdatedHistoryItems;
@property(nonatomic) unsigned long long transactionType; // @synthesize transactionType=_transactionType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_mergeItem:(id)arg1 intoItem:(id)arg2;
- (CDUnknownBlockType)todayWidgetPrivateDataAccessor;
- (id)initWithTransactionType:(unsigned long long)arg1 insertedOrUpdatedHistoryItems:(id)arg2 deletedArticleIDs:(id)arg3;
- (id)init;

@end
