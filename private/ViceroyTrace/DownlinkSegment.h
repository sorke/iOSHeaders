//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ViceroyTrace/MultiwaySegment.h>

__attribute__((visibility("hidden")))
@interface DownlinkSegment : MultiwaySegment
{
    id <DownlinkSegmentDelegate> _delegate;
}

- (id)segmentReport;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 delegate:(id)arg3;

@end

