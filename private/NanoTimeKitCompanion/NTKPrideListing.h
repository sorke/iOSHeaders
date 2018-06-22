//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NTKAVListing.h"

@class CLKDevice, CLKVideo, NSArray, NSSet, NSString, UIImage;

@interface NTKPrideListing : NSObject <NSCopying, NTKAVListing>
{
    CLKDevice *_device;
    NSString *_filename;
    CLKVideo *_video;
    UIImage *_image;
    NSArray *_nextListings;
    NSSet *_tags;
    UIImage *image;
    NSString *_name;
}

+ (id)listingForDevice:(id)arg1 withFilename:(id)arg2;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)discardAssets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)snapshotDiffers:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) UIImage *image; // @synthesize image;
@property(readonly, nonatomic) CLKVideo *video;
- (_Bool)hasTag:(id)arg1;
- (id)randomNextListing;
- (void)setTags:(id)arg1;
- (void)setNextListings:(id)arg1;
- (id)initForDevice:(id)arg1 withFilename:(id)arg2;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

