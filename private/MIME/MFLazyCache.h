//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MIME/NSCacheDelegate-Protocol.h>

@class MFWeakReferenceHolder, NSCache, NSRecursiveLock, NSString;
@protocol MFLazyCacheDelegate;

@interface MFLazyCache : NSObject <NSCacheDelegate>
{
    NSRecursiveLock *_lock;
    NSCache *_storage;
    MFWeakReferenceHolder *_delegate;
    struct {
        unsigned int delegateRespondsToLazyCacheWillEvictObject:1;
    } _flags;
}

- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)objectForKey:(id)arg1 generator:(CDUnknownBlockType)arg2;
- (void)_exchangeOriginalObject:(id)arg1 forKey:(id)arg2 withObject:(id)arg3;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
@property __weak id <MFLazyCacheDelegate> delegate;
- (void)dealloc;
- (id)initWithCountLimit:(unsigned long long)arg1;
- (id)init;
- (id)storedObjectForKey:(id)arg1;
- (long long)waiterCountForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
