//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperation;

@interface VUIAsynchronousWorkToken : NSObject
{
    NSOperation *_operation;
}

@property(retain, nonatomic) NSOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithOperation:(id)arg1;
- (id)init;

@end

