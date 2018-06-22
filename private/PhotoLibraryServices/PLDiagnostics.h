//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLDiagnostics : NSObject
{
}

+ (void)collectYearsStatWithLibraryContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)collectCollectionsStatWithLibraryContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)collectMomentsStatWithLibraryContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)createOrEmptyMemoriesRelatedSnapshotOutputFolder;
+ (id)memoriesAndRelatedDiagnosticsOutputURL;
+ (id)_memoriesRelatedOutputPathBaseDirectory;
+ (void)fileRadarUserNotificationWithHeader:(id)arg1 message:(id)arg2 radarTitle:(id)arg3 radarDescription:(id)arg4;
+ (void)tapToRadarWithTitle:(id)arg1 description:(id)arg2;
+ (unsigned long long)addOSStateHandlerWithTitle:(id)arg1 queue:(id)arg2 propertyListHandler:(CDUnknownBlockType)arg3;
+ (id)excludingNameExpression;
+ (id)matchingNameExpression;
+ (void)enumerateDiagnosticsURLsIncludingPropertyiesForKeys:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)diagnosticsURLs;
+ (id)logDirectoryURL;

@end

