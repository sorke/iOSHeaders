//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@class NSData;

@interface BSUIMappedSurfaceImage : UIImage
{
    NSData *_mappedSurfaceData;
}

+ (id)mappedSurfaceImageFromPath:(id)arg1 loadEagerly:(_Bool)arg2;
+ (_Bool)writeSurfaceImage:(id)arg1 toFileDescriptor:(int)arg2;
@property(retain, nonatomic, getter=_mappedSurfaceData, setter=_setMappedSurfaceData:) NSData *_mappedSurfaceData; // @synthesize _mappedSurfaceData;
- (void).cxx_destruct;

@end

