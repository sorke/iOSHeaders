//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVContentKeyResponse.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface AVContentKeyResponseClearKey : AVContentKeyResponse
{
    NSData *_keyData;
    NSData *_initializationVector;
}

- (void)dealloc;
- (id)initWithKeyData:(id)arg1 initializationVector:(id)arg2;

@end

