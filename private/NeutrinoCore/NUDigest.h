//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NUDigest : NSObject
{
    NSString *_stringValue;
    struct CC_MD5state_st _context;
}

- (void).cxx_destruct;
- (void)addBytes:(const void *)arg1 length:(long long)arg2;
- (void)addCString:(const char *)arg1;
- (void)addString:(id)arg1;
- (id)stringValue;
- (void)finalize;
- (id)init;

@end
