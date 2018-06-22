//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideosUI/VUIMediaCollection.h>

#import "VUIPlistMediaEntityImageLoadParamsCreating.h"

@class VUIPlistMediaDatabaseShow;

__attribute__((visibility("hidden")))
@interface VUIPlistShowMediaCollection : VUIMediaCollection <VUIPlistMediaEntityImageLoadParamsCreating>
{
    VUIPlistMediaDatabaseShow *_databaseShow;
}

@property(retain, nonatomic) VUIPlistMediaDatabaseShow *databaseShow; // @synthesize databaseShow=_databaseShow;
- (void).cxx_destruct;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)mediaItemCount;
- (id)_valueForPropertyDescriptor:(id)arg1;
- (id)playedState;
- (id)coverArtImageIdentifier;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)initWithMediaLibrary:(id)arg1 databaseShow:(id)arg2 requestedProperties:(id)arg3;

@end

