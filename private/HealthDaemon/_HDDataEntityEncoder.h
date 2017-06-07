//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDEntityEncoder.h>

@class HDDataProvenanceCache, HDMetadataValueStatement;

@interface _HDDataEntityEncoder : HDEntityEncoder
{
    HDMetadataValueStatement *_metadataValueStatement;
    HDDataProvenanceCache *_dataProvenanceCache;
    CDUnknownBlockType _metadataKeyFilter;
    _Bool _includeTimeZone;
}

- (void).cxx_destruct;
- (void)finish;
- (id)_copyBaseMetadataForRow:(struct HDSQLiteRow *)arg1;
- (void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (id)orderedProperties;
- (id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 database:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(CDUnknownBlockType)arg6;

@end
