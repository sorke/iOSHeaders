//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAssetRepresentationPrivate;

@interface ALAssetRepresentation : NSObject
{
    id _internal;
    _Bool _ignoreRead;
}

+ (void)_enableImageDataUsesMap;
@property _Bool ignoreRead; // @synthesize ignoreRead=_ignoreRead;
@property(retain, nonatomic) ALAssetRepresentationPrivate *internal; // @synthesize internal=_internal;
- (id)filename;
- (float)scale;
- (long long)orientation;
- (id)metadata;
- (id)url;
- (struct CGImage *)_largeDisplayableImageForFormatID:(int)arg1;
- (struct CGImage *)fullScreenImage;
- (struct CGImage *)zoomableDisplayImage;
- (struct CGImage *)fullResolutionImage;
- (struct CGImage *)CGImageWithOptions:(id)arg1;
- (struct CGImage *)CGImageWithOptions:(id)arg1 format:(int)arg2;
- (id)_imageData;
- (unsigned long long)getBytes:(char *)arg1 fromOffset:(long long)arg2 length:(unsigned long long)arg3 error:(id *)arg4;
- (long long)size;
- (struct CGSize)dimensions;
- (int)_fileDescriptor;
- (id)UTI;
- (_Bool)isValid;
- (id)description;
- (void)dealloc;
- (id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4;

@end

