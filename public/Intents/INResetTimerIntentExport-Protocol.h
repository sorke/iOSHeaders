//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INTimer, NSNumber;

@protocol INResetTimerIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSNumber *resetMultiple;
@property(copy, nonatomic) INTimer *targetTimer;
- (id)init;
@end

