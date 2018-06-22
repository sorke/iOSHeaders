//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CLKAssertionBlockSentinel : NSObject
{
    _Bool _called;
    _Bool _fatal;
    NSString *_message;
    CDUnknownBlockType _fallbackBlock;
}

@property(copy, nonatomic) CDUnknownBlockType fallbackBlock; // @synthesize fallbackBlock=_fallbackBlock;
@property(nonatomic, getter=shouldBeFatal) _Bool fatal; // @synthesize fatal=_fatal;
@property(getter=isCalled) _Bool called; // @synthesize called=_called;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)dealloc;
- (void)markCalled;

@end

