//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoFoundation/PFPriorityQueueExtension.h>

#import "PFQOSPriorityEnqueuing.h"

@interface PFQOSPriorityQueueExtension : PFPriorityQueueExtension <PFQOSPriorityEnqueuing>
{
}

- (void)enqueueWithQOSPriority:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)enqueueWithCurrentQOSPriority:(CDUnknownBlockType)arg1;
- (id)initWithConcurrentScheduling:(_Bool)arg1;

@end

