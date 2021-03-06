//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AAResponse.h"

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface AAUIQuotaResponse : AAResponse
{
    NSDictionary *_quotaInfo;
    NSArray *_usage;
    NSDictionary *_endPoints;
    NSDictionary *_storageInfo;
    NSDictionary *_storageMeterLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayLabel;
@property(readonly, nonatomic) NSURL *manageStorageURL;
@property(readonly, nonatomic) _Bool hasMaxTier;
@property(readonly, nonatomic) NSNumber *availableStorageInBytes;
@property(readonly, nonatomic) NSNumber *usedStorageInBytes;
@property(readonly, nonatomic) NSNumber *totalStorageInBytes;
@property(readonly, nonatomic) NSNumber *totalStorageInByes;
@property(readonly, nonatomic) NSArray *iCloudMediaUsage;
@property(readonly, nonatomic) NSArray *usage;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

