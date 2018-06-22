//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideosUI/VUIDeviceMediaLibrary.h>

@class VUIMPMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMPDeviceMediaLibrary : VUIDeviceMediaLibrary
{
    _Bool _updating;
    _Bool _initialUpdate;
    VUIMPMediaLibrary *_mediaLibrary;
}

+ (_Bool)_isInitialUpdateInProgress;
+ (_Bool)_isUpdateInProgress;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(retain, nonatomic) VUIMPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(nonatomic, getter=isInitialUpdate) _Bool initialUpdate; // @synthesize initialUpdate=_initialUpdate;
@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
- (void).cxx_destruct;
- (void)_updateUpdatingProperties;
- (void)_handleMediaLibraryIsUpdateInProgressDidChangeNotification:(id)arg1;
- (void)_handleMediaLibraryDidChangeNotification:(id)arg1;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoaderIdentifier;
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)title;
- (void)updateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;
- (id)initWithManager:(id)arg1;

@end

