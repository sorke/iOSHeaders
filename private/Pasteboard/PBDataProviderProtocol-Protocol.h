//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Pasteboard/NSObject-Protocol.h>

@class NSString;

@protocol PBDataProviderProtocol <NSObject>
- (void)loadRepresentationForItemAtIndex:(unsigned long long)arg1 type:(NSString *)arg2 completionBlock:(void (^)(NSData *, NSFileHandle *, NSError *))arg3;
- (void)helloCompletionBlock:(void (^)(void))arg1;
@end
