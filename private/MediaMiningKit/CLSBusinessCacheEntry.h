//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSSet;

@interface CLSBusinessCacheEntry : NSManagedObject
{
}

+ (id)entityName;

// Remaining properties
@property(retain, nonatomic) NSSet *businessItems; // @dynamic businessItems;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic) double radius; // @dynamic radius;
@property(nonatomic) double updateTimestamp; // @dynamic updateTimestamp;

@end

