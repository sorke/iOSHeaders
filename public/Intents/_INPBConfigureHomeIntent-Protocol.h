//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBHomeEntity, _INPBIntentMetadata;

@protocol _INPBConfigureHomeIntent <NSObject>
+ (Class)entitiesType;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long entitiesCount;
@property(copy, nonatomic) NSArray *entities;
- (_INPBHomeEntity *)entitiesAtIndex:(unsigned long long)arg1;
- (void)addEntities:(_INPBHomeEntity *)arg1;
- (void)clearEntities;
@end

