//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PHAssetExportRequestOptions : NSObject
{
    _Bool _treatLivePhotoAsStill;
    _Bool _flattenSlomoVideos;
    _Bool _dontAllowRAW;
    long long _variant;
}

@property(nonatomic) _Bool dontAllowRAW; // @synthesize dontAllowRAW=_dontAllowRAW;
@property(nonatomic) _Bool flattenSlomoVideos; // @synthesize flattenSlomoVideos=_flattenSlomoVideos;
@property(nonatomic) _Bool treatLivePhotoAsStill; // @synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill;
@property(nonatomic) long long variant; // @synthesize variant=_variant;
- (id)description;

@end

