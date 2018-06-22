//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKMapSnapshot, MKMapSnapshotter, NSLock, NSObject<OS_dispatch_queue>;

@interface PKPaymentTransactionLocationSnapshotter : NSObject
{
    MKMapSnapshotter *_snapshotter;
    MKMapSnapshot *_snapshot;
    NSLock *_snapshotCreationLock;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
}

- (void).cxx_destruct;
- (_Bool)_locationIsValid:(id)arg1;
- (id)_snapshotLocationForTransaction:(id)arg1;
- (void)dealloc;
- (void)cancel;
- (void)snapshotWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithTransaction:(id)arg1 radius:(double)arg2 snapshotSize:(struct CGSize)arg3 showsMerchantAnnotation:(_Bool)arg4;
- (id)initWithTransaction:(id)arg1 radius:(double)arg2 snapshotSize:(struct CGSize)arg3;

@end

