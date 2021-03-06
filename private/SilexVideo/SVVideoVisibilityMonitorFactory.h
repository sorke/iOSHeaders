//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVisibilityMonitorFactory.h"

@class NSString;

@interface SVVideoVisibilityMonitorFactory : NSObject <SVVisibilityMonitorFactory>
{
    id <SVVideoVisiblePercentageManager> _videoVisiblePercentageManager;
}

@property(readonly, nonatomic) id <SVVideoVisiblePercentageManager> videoVisiblePercentageManager; // @synthesize videoVisiblePercentageManager=_videoVisiblePercentageManager;
- (void).cxx_destruct;
- (id)createVisibilityMonitorForVideo:(id)arg1;
- (id)initWithVideoVisiblePercentageManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

