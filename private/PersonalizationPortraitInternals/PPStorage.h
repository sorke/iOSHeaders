//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PPStorage : NSObject
{
}

+ (_Bool)removeCachedMapItemsBeforeCutoffDate:(id)arg1 error:(id *)arg2;
+ (_Bool)removeMapItemForPlaceName:(id)arg1 error:(id *)arg2;
+ (id)mapItemForPlaceName:(id)arg1 error:(id *)arg2;
+ (_Bool)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id *)arg3;
+ (_Bool)clearTopicStoreWithError:(id *)arg1;
+ (_Bool)clearNamedEntityStoreWithError:(id *)arg1;
+ (id)findLocalTopicsWithSource:(id)arg1 stream:(id)arg2;
+ (id)findLocalEntitiesWithSource:(id)arg1 stream:(id)arg2;
+ (id)topicRecordsWithQuery:(id)arg1 error:(id *)arg2;
+ (id)namedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2;
+ (void)_filterBlacklistedNamedEntityRecords:(id)arg1;

@end

