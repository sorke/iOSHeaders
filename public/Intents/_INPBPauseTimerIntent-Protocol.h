//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _INPBIntentMetadata, _INPBTimer;

@protocol _INPBPauseTimerIntent <NSObject>
@property(readonly, nonatomic) _Bool hasTargetTimer;
@property(retain, nonatomic) _INPBTimer *targetTimer;
@property(nonatomic) _Bool hasPauseMultiple;
@property(nonatomic) _Bool pauseMultiple;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@end

