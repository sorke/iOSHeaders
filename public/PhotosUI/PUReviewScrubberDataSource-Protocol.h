//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, PUReviewScrubber;

@protocol PUReviewScrubberDataSource <NSObject>
- (_Bool)reviewScrubber:(PUReviewScrubber *)arg1 shouldProvideFeedbackForCellAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)reviewScrubber:(PUReviewScrubber *)arg1 numberOfItemsInSection:(unsigned long long)arg2;

@optional
- (unsigned long long)numberOfSectionsInReviewScrubber:(PUReviewScrubber *)arg1;
@end

