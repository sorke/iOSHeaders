//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIAccessibilityLoader : NSObject
{
}

+ (void)loadActualAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 loadSubbundles:(_Bool)arg3;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 force:(_Bool)arg3 loadAllAccessibilityInfo:(_Bool)arg4;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2;
+ (void)_stringLocalizationStarted:(id)arg1;
+ (void)_didLoadPreboardAccessibilityBundle;
+ (void)_didLoadSystemAppAccessibilityBundle;
+ (id)_accessibilityBundlesForBundle:(id)arg1;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 loadSubbundles:(_Bool)arg3;
+ (void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 forceLoad:(_Bool)arg3 loadSubbundles:(_Bool)arg4 loadAllAccessibilityInfo:(_Bool)arg5;
+ (void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 force:(_Bool)arg3 loadAllAccessibilityInfo:(_Bool)arg4;
+ (void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2;
+ (void)_accessibilityInitializeSubclassRuntimeOverrides;
+ (void)_accessibilityInitializeRuntimeOverrides;
+ (_Bool)_accessibilityStringLocalizationCategoriesLoaded;
+ (_Bool)_accessibilityUIKitBundleLoaded;
+ (_Bool)_accessibilityServerStarted;
+ (void)_accessibilityStopServer;
+ (void)_accessibilityReenabled;
+ (void)_accessibilityStartMiniServer;
+ (void)_accessibilityStartServer;
+ (void)_performInitialAccessibilityBundleLoad:(_Bool)arg1 monitorForFutureLoadEvents:(_Bool)arg2 trackingMode:(long long)arg3;

@end

