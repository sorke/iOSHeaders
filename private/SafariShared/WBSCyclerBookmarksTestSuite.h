//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCyclerTestSuite-Protocol.h>

@class NSArray, NSString, WBSCyclerBookmarkListRepresentation, WBSCyclerBookmarkOperationContext, WBSCyclerTestSuiteBookmarkAuxiliary;

@interface WBSCyclerBookmarksTestSuite : NSObject <WBSCyclerTestSuite>
{
    NSArray *_operations;
    NSArray *_relativeProbabilitiesForOperations;
    WBSCyclerBookmarkOperationContext *_operationContext;
    WBSCyclerTestSuiteBookmarkAuxiliary *_bookmarkAuxiliary;
    unsigned long long _iterationCount;
    WBSCyclerBookmarkListRepresentation *_expectedTopLevelBookmarksFromPreviousIteration;
}

+ (_Bool)setValue:(id)arg1 forConfigurationKey:(id)arg2;
- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2;
- (void)_validateServerBookmarksWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_validateServerBookmarksAfterInitialSyncWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_validateServerBookmarksWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleRequest:(id)arg1 withTarget:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canHandleRequest:(id)arg1;
- (void)runWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
