//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXActivityUtilities : NSObject
{
}

+ (id)_tintedInitialsImage:(id)arg1;
+ (id)_initialsImageGradientEndColor;
+ (id)_initialsImageGradientStartColor;
+ (id)textForDate:(id)arg1;
+ (void)requestPersonImageWithTargetSize:(struct CGSize)arg1 matchingEmail:(id)arg2 orPhone:(id)arg3 withFirstName:(id)arg4 lastName:(id)arg5 prefersPhotosImage:(_Bool)arg6 withCompletion:(CDUnknownBlockType)arg7;
+ (void)requestImageFromPeopleAlbumForPerson:(id)arg1 targetSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestContactMatchingEmail:(id)arg1 orPhone:(id)arg2 withFirstName:(id)arg3 lastName:(id)arg4 keysToFetch:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
+ (void)requestMeContactWithCompletion:(CDUnknownBlockType)arg1;

@end

