//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WBSFaviconProviderUtilities : NSObject
{
}

+ (id)imageWithURL:(id)arg1 closetToPreferredSize:(struct CGSize)arg2;
+ (id)multiResolutionImageFromImageData:(id)arg1 withPreferredSize:(struct CGSize)arg2 atScales:(id)arg3 didGenerateResolutions:(_Bool *)arg4;
+ (struct CGSize)sizeOfImageWithData:(id)arg1 closestToPreferredSize:(struct CGSize)arg2 isMultiResolution:(_Bool *)arg3;
+ (long long)computeRelativeSize:(struct CGSize)arg1 referenceSize:(struct CGSize)arg2;
+ (_Bool)isFaviconSize:(struct CGSize)arg1 morePreferrableThanFaviconSize:(struct CGSize)arg2 givenDesiredSize:(struct CGSize)arg3;

@end

