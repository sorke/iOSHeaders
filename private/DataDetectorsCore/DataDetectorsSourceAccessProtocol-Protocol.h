//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSFileHandle, NSMutableArray, NSNumber, NSString;

@protocol DataDetectorsSourceAccessProtocol
- (void)writeSourceFromRawData:(NSMutableArray *)arg1 source:(NSNumber *)arg2 signature:(NSString *)arg3 withReply:(void (^)(_Bool))arg4;
- (void)writeSourceFromJSONFile:(NSFileHandle *)arg1 source:(NSNumber *)arg2 withReply:(void (^)(_Bool))arg3;
- (void)filesForSourceRead:(NSArray *)arg1 resourceType:(unsigned long long)arg2 withReply:(void (^)(NSArray *))arg3;
- (void)fileForSourceRead:(NSNumber *)arg1 resourceType:(unsigned long long)arg2 withReply:(void (^)(NSFileHandle *))arg3;
@end

