//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSSet, NSString, NSTimeZone;

@interface CLSManagedPublicEvent : NSManagedObject
{
}

+ (id)entityName;
@property(readonly, nonatomic) NSTimeZone *timeZone;

// Remaining properties
@property(nonatomic) double businessItemLatitude; // @dynamic businessItemLatitude;
@property(nonatomic) double businessItemLongitude; // @dynamic businessItemLongitude;
@property(nonatomic) unsigned long long businessItemMuid; // @dynamic businessItemMuid;
@property(retain, nonatomic) NSSet *categories; // @dynamic categories;
@property(nonatomic) long long expectedAttendance; // @dynamic expectedAttendance;
@property(retain, nonatomic) NSDate *localEndDate; // @dynamic localEndDate;
@property(nonatomic) double localEndTime; // @dynamic localEndTime;
@property(retain, nonatomic) NSDate *localStartDate; // @dynamic localStartDate;
@property(nonatomic) double localStartTime; // @dynamic localStartTime;
@property(nonatomic) unsigned long long muid; // @dynamic muid;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *performers; // @dynamic performers;
@property(retain, nonatomic) NSSet *queryLocations; // @dynamic queryLocations;
@property(nonatomic) long long timeZoneOffset; // @dynamic timeZoneOffset;
@property(nonatomic) double updateTimestamp; // @dynamic updateTimestamp;

@end

