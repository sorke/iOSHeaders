//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ASCredentialIdentityStoreState : NSObject
{
    _Bool _enabled;
    _Bool _supportsIncrementalUpdates;
}

@property(readonly, nonatomic) _Bool supportsIncrementalUpdates; // @synthesize supportsIncrementalUpdates=_supportsIncrementalUpdates;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)initWithEnabledState:(_Bool)arg1 supportsIncrementalUpdates:(_Bool)arg2;

@end

