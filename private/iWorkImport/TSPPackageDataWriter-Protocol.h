//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSData, NSString;

@protocol TSPPackageDataWriter <NSObject>
- (struct CGDataConsumer *)newCGDataConsumerAtRelativePath:(NSString *)arg1;
- (_Bool)writeData:(NSData *)arg1 toRelativePath:(NSString *)arg2 allowEncryption:(_Bool)arg3 error:(id *)arg4;
@end
