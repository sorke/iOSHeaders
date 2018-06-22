//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOUtilityServiceProxy.h"

@class NSString;

@interface GEOUtilityService : NSObject <GEOUtilityServiceProxy>
{
    id <GEOUtilityServiceProxy> _proxy;
}

+ (id)sharedService;
+ (void)useProxy:(Class)arg1;
- (void).cxx_destruct;
- (void)getCurrentGeoServicesState:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getGeoServicesCacheDirectoryPath;
- (id)getHomeDirectoryPath;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

