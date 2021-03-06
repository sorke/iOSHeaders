//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSLocking.h"

@class NSLock;

@interface WLKNetworkRequestReauthCoordinator : NSObject <NSLocking>
{
    NSLock *_lock;
    _Bool _sessionPrompt;
}

+ (id)coordinator;
@property _Bool sessionPrompt; // @synthesize sessionPrompt=_sessionPrompt;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unlock;
- (void)lock;
- (_Bool)didPrompt;
- (void)markPrompt;
- (void)dealloc;
- (id)_init;

@end

