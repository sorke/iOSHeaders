//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PLPTPAsset, PLPTPConversionResult;

@protocol PLPTPConversionSupport <NSObject>
@property(readonly, nonatomic) _Bool supportsTranscodeChoice;
- (PLPTPConversionResult *)conversionResultForAsset:(PLPTPAsset *)arg1 isVideo:(_Bool)arg2 isRender:(_Bool)arg3;
@end

