//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PEPServiceConfiguration : NSObject
{
    NSString *_cacheFilePath;
    _Bool _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (id)sharedInstance;
- (_Bool)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(_Bool)arg2;
- (_Bool)registerNetworkDefaultsForAppID:(id)arg1;
- (void)_updateDefaults:(id)arg1;
- (void)_postNotification;
- (void)dealloc;
- (id)init;

@end

