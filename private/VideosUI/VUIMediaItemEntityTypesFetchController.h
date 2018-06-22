//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideosUI/VUIMediaLibraryFetchController.h>

@class VUIMediaItemEntityTypesFetchResponse;

@interface VUIMediaItemEntityTypesFetchController : VUIMediaLibraryFetchController
{
    id <VUIMediaItemEntityTypesFetchControllerDelegate> _delegate;
    VUIMediaItemEntityTypesFetchResponse *_response;
}

@property(retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response; // @synthesize response=_response;
@property(nonatomic) __weak id <VUIMediaItemEntityTypesFetchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_updateResponseWithResult:(id)arg1 replaceContentsOnNilChanges:(_Bool)arg2;
- (void)_notifyFetchDidFailWithError:(id)arg1;
- (void)_notifyFetchDidCompleteWithResult:(id)arg1;
- (void)_notifyDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleContentsChangeFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2;
- (void)_handleInitialFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2;
- (void)_didCompleteFetchOperation:(id)arg1;
- (id)_fetchOperationForFetchReason:(long long)arg1;
- (void)cancelFetch;
- (id)initWithMediaLibrary:(id)arg1;

@end

