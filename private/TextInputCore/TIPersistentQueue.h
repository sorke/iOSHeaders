//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface TIPersistentQueue : NSObject
{
    NSURL *_presentedItemURL;
}

- (void).cxx_destruct;
- (void)dequeueObjects:(CDUnknownBlockType)arg1;
- (void)enqueueObjects:(CDUnknownBlockType)arg1;
- (void)readObjects:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

@end

