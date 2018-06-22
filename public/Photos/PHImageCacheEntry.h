//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHRecyclableObject.h"

@class NSError, NSMutableArray, NSString;

@interface PHImageCacheEntry : NSObject <PHRecyclableObject>
{
    NSError *_error;
    struct CGImage *_imageRef;
    struct os_unfair_lock_s _lock;
    _Bool _isCancelled;
    NSMutableArray *_handlersWaitingOnResult;
    int _imageRequestIDForPopulatingCache;
}

@property(nonatomic) int imageRequestIDForPopulatingCache; // @synthesize imageRequestIDForPopulatingCache=_imageRequestIDForPopulatingCache;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (_Bool)isCancelled;
- (void)cancel;
- (void)populateWithImageRef:(struct CGImage *)arg1 error:(id)arg2 unlockBeforeNotfiyingWaiters:(struct os_unfair_lock_s *)arg3;
- (void)addNotifyHandler:(CDUnknownBlockType)arg1;
- (void)_callWaiters:(id)arg1 wasCancelled:(_Bool)arg2;
- (struct CGImage *)createImageRef;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

