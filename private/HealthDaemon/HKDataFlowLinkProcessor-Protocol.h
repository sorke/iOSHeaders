//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKDataFlowLink;

@protocol HKDataFlowLinkProcessor <NSObject>

@optional
- (void)dataFlowLink:(HKDataFlowLink *)arg1 didAddDestination:(HKDataFlowLink *)arg2 direct:(_Bool)arg3;
- (void)dataFlowLink:(HKDataFlowLink *)arg1 didAddSource:(HKDataFlowLink *)arg2 direct:(_Bool)arg3;
@end

