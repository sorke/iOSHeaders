//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DNDEventBehaviorResolutionService, MFFuture, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface _MFSoundBehaviorOverridesMonitor : NSObject
{
    DNDEventBehaviorResolutionService *_dndBehaviorResolutionService;
    NSObject<OS_dispatch_queue> *_dndBehaviorResolutionServiceQueue;
    MFFuture *_behaviorOverrideTypes;
}

+ (id)sharedInstance;
@property(readonly) MFFuture *behaviorOverrideTypes; // @synthesize behaviorOverrideTypes=_behaviorOverrideTypes;
- (void).cxx_destruct;
- (id)_resolveDNDBehavior;
- (id)init;

@end

