//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface ICDocCamUtilities : NSObject
{
}

+ (struct CGAffineTransform)transformForOrientation:(id)arg1 newSize:(struct CGSize)arg2;
+ (id)resizedImage:(id)arg1 newSize:(struct CGSize)arg2 transform:(struct CGAffineTransform)arg3 drawTransposed:(_Bool)arg4 interpolationQuality:(int)arg5;
+ (id)resizedImage:(id)arg1 newSize:(struct CGSize)arg2 interpolationQuality:(int)arg3;
+ (struct CGSize)aspectFitSize:(struct CGSize)arg1 targetSize:(struct CGSize)arg2;
+ (struct CGSize)aspectFillSize:(struct CGSize)arg1 targetSize:(struct CGSize)arg2;
+ (_Bool)shouldPerformCustomAnimationForTransitionCoordinator:(id)arg1;
+ (id)buttonFromCopyingValuesFromButton:(id)arg1;
+ (void)prepareForRotationIfNecessaryWithShutterButton:(id)arg1 coodinator:(id)arg2;

@end

