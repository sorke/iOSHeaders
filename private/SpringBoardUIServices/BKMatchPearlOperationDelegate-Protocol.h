//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BKFaceDetectOperationDelegate.h"
#import "BKMatchOperationDelegate.h"

@class BKMatchOperation, BKMatchPearlOperation, BKMatchPearlResultInfo;

@protocol BKMatchPearlOperationDelegate <BKFaceDetectOperationDelegate, BKMatchOperationDelegate>

@optional
- (void)matchOperation:(BKMatchPearlOperation *)arg1 matchedWithResult:(BKMatchPearlResultInfo *)arg2;
- (void)matchOperation:(BKMatchOperation *)arg1 providedFeedback:(long long)arg2;
@end

