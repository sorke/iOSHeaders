//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutBuilderAssociatedSeriesEntity : HDHealthEntity
{
}

+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)allBuilderAssociatedSeriesWithProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)enumerateSeriesForBuilder:(id)arg1 transaction:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
+ (id)seriesForBuilder:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (long long)associateSeries:(id)arg1 toWorkoutBuilderID:(id)arg2 profile:(id)arg3 error:(id *)arg4;

@end

