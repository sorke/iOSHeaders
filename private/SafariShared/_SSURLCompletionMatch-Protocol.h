//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSDate, NSString, NSURL;

@protocol _SSURLCompletionMatch <NSObject>
@property(readonly, nonatomic) NSDate *lastVisitTime;
@property(readonly, nonatomic) long long visitCount;
@property(readonly, nonatomic, getter=isTopHitDueToTriggerMatch) _Bool topHitDueToTriggerMatch;
@property(readonly, nonatomic, getter=isSynthesizedTopHit) _Bool synthesizedTopHit;
@property(readonly, nonatomic, getter=isTopHit) _Bool topHit;
@property(readonly, nonatomic) long long matchLocation;
@property(readonly, copy, nonatomic) NSString *userVisibleURLString;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSURL *url;
@end
