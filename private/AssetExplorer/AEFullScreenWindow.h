//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

#import "AEFullScreenContentWindow.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AEFullScreenWindow : UIWindow <AEFullScreenContentWindow>
{
    _Bool _desiresCameraStreaming;
}

@property(nonatomic) _Bool desiresCameraStreaming; // @synthesize desiresCameraStreaming=_desiresCameraStreaming;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

