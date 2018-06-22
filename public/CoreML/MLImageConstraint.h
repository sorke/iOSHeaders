//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLFeatureValueConstraint.h"
#import "NSCopying.h"

@class MLImageSizeConstraint;

@interface MLImageConstraint : NSObject <MLFeatureValueConstraint, NSCopying>
{
    long long _pixelsHigh;
    long long _pixelsWide;
    MLImageSizeConstraint *_sizeConstraint;
    unsigned long long _pixelType;
}

+ (unsigned long long)imagePixelTypeFromOSType:(unsigned int)arg1;
+ (id)_stringForOSType:(unsigned int)arg1;
+ (id)constraintWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3;
+ (id)constraintWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 sizeConstraint:(id)arg4;
+ (_Bool)osType:(unsigned int)arg1 isAcceptedForPixelType:(unsigned long long)arg2;
@property(readonly) unsigned long long pixelType; // @synthesize pixelType=_pixelType;
@property(readonly, nonatomic) MLImageSizeConstraint *sizeConstraint; // @synthesize sizeConstraint=_sizeConstraint;
@property(readonly, nonatomic) long long pixelsWide; // @synthesize pixelsWide=_pixelsWide;
@property(readonly, nonatomic) long long pixelsHigh; // @synthesize pixelsHigh=_pixelsHigh;
- (void).cxx_destruct;
@property(readonly) unsigned long long imageWidth;
@property(readonly) unsigned long long imageHeight;
@property(readonly) unsigned int osType;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;
- (id)_stringForAllowedOSTypes;
@property(readonly, nonatomic) unsigned int pixelFormatType;
- (id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 sizeConstraint:(id)arg4;

@end

