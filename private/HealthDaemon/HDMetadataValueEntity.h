//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataValueEntity : HDHealthEntity
{
}

+ (id)_predicateForEntityWithObjectID:(id)arg1;
+ (id)_predicateForEntityWithKeyID:(id)arg1;
+ (id)_insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)deleteStatementForObjectMetadataWithDatabase:(id)arg1;
+ (long long)protectionClass;
+ (id)indices;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;

@end

