//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol HMDDataStreamBulkSendListener <NSObject>
- (void)accessoryDidCloseDataStream:(id)arg1;
- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id <HMDDataStreamBulkSendSessionCandidate>)arg2;
@end

