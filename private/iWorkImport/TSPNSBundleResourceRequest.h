//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPDocumentResourceBundleProvider-Protocol.h>
#import <iWorkImport/TSUResourceRequest-Protocol.h>

@class NSBundle, NSBundleResourceRequest, NSError, NSProgress, NSSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPNSBundleResourceRequest : NSObject <TSPDocumentResourceBundleProvider, TSUResourceRequest>
{
    NSSet *_tags;
    NSBundle *_bundle;
    NSBundleResourceRequest *_resourceRequest;
    NSProgress *_progress;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSError *_accessQueue_resourceAccessError;
    struct {
        unsigned int didBeginAccessingResources:1;
        unsigned int resourcesAvailable:1;
    } _accessQueue_flags;
}

- (void).cxx_destruct;
@property(readonly) NSSet *tags;
@property(readonly) unsigned long long estimatedDownloadSize;
- (void)performResourceAccessAsynchronouslyUsingQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)performResourceAccessUsingQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSBundle *bundle;
@property(readonly) NSProgress *progress;
- (void)dealloc;
- (id)initWithTags:(id)arg1 preinstalledTags:(id)arg2 bundle:(id)arg3;
- (id)initWithTags:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
