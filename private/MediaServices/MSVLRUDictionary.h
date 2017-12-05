//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MSVLRUDictionaryNode, NSMutableDictionary;

@interface MSVLRUDictionary : NSObject <NSCopying>
{
    id <MSVLRUDictionaryDelegate> _delegate;
    long long _maximumCapacity;
    NSMutableDictionary *_dictionary;
    MSVLRUDictionaryNode *_head;
    MSVLRUDictionaryNode *_tail;
    long long _transactionCount;
}

@property(nonatomic) long long transactionCount; // @synthesize transactionCount=_transactionCount;
@property(retain, nonatomic) MSVLRUDictionaryNode *tail; // @synthesize tail=_tail;
@property(retain, nonatomic) MSVLRUDictionaryNode *head; // @synthesize head=_head;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(nonatomic) long long maximumCapacity; // @synthesize maximumCapacity=_maximumCapacity;
@property(nonatomic) __weak id <MSVLRUDictionaryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addNodeToFront:(id)arg1;
- (void)_moveNodeToFront:(id)arg1;
- (void)_removeNode:(id)arg1;
- (void)_removeNodeFromLinkedList:(id)arg1;
- (void)_shrinkToCapacity;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)peekObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)endTransaction;
- (void)beginTransaction;
- (void)performTransaction:(CDUnknownBlockType)arg1;
- (id)allValues;
- (id)allKeys;
@property(readonly, nonatomic) long long count;
- (id)initWithMaximumCapacity:(unsigned long long)arg1;

@end

