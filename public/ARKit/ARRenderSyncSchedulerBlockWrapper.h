//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface ARRenderSyncSchedulerBlockWrapper : NSObject
{
    NSDate *_entryTimestamp;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSDate *entryTimestamp; // @synthesize entryTimestamp=_entryTimestamp;
- (void).cxx_destruct;

@end

