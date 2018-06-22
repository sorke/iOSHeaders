//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSSet, NSString, RMBlueprintSchedule, RMBlueprintUsageLimit;

@interface RMBlueprint : NSManagedObject
{
}

+ (id)fetchRequestMatchingExpiredBlueprints;
- (id)declarationsWithError:(id *)arg1;

// Remaining properties
@property(retain, nonatomic) NSSet *configurations; // @dynamic configurations;
@property(copy, nonatomic) NSDate *expiration; // @dynamic expiration;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) _Bool invertUsageLimit; // @dynamic invertUsageLimit;
@property(retain, nonatomic) RMBlueprintSchedule *schedule; // @dynamic schedule;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(retain, nonatomic) RMBlueprintUsageLimit *usageLimit; // @dynamic usageLimit;
@property(retain, nonatomic) NSSet *users; // @dynamic users;

@end

