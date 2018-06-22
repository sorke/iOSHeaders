//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface WBSFaviconProviderRecordCache : NSObject
{
    NSMutableDictionary *_iconURLStringToInfoDictionary;
    NSMutableDictionary *_iconUUIDToURLStringDictionary;
}

- (void).cxx_destruct;
- (void)removeRecordForIconUUIDs:(id)arg1;
- (void)removeAllRecords;
- (id)dateAddedForFaviconURLString:(id)arg1 iconUUID:(id *)arg2 size:(struct CGSize *)arg3;
- (void)setDateAdded:(id)arg1 forFaviconURLString:(id)arg2 iconUUID:(id)arg3 iconSize:(struct CGSize)arg4 hasGeneratedResolutions:(_Bool)arg5;
- (id)iconInfoForURLString:(id)arg1;
- (id)init;

@end

