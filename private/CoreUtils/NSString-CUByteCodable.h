//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

#import "CUByteCodable.h"

@interface NSString (CUByteCodable) <CUByteCodable>
+ (id)createWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)encodedDataAndReturnError:(id *)arg1;
- (const char *)encodedBytesAndReturnLength:(unsigned long long *)arg1 error:(id *)arg2;
@end

