//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, RMBlueprintScheduleSimpleItem;

@interface RMBlueprintScheduleRepresentation : NSObject
{
    RMBlueprintScheduleSimpleItem *_simpleSchedule;
    NSArray *_customScheduleItems;
}

@property(retain, nonatomic) NSArray *customScheduleItems; // @synthesize customScheduleItems=_customScheduleItems;
@property(retain, nonatomic) RMBlueprintScheduleSimpleItem *simpleSchedule; // @synthesize simpleSchedule=_simpleSchedule;
- (void).cxx_destruct;

@end

