//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHPerson.h"

#import "PXPerson.h"

@class NSDate, NSString;

@interface PHPerson (PXPerson) <PXPerson>
+ (void)px_loadRepresentativeFacesForPersons:(id)arg1;
@property(readonly) NSDate *px_keyPhotoDate;
@property(readonly) _Bool isPersonModel;
@property(readonly) NSString *px_localIdentifier;
@property(readonly) unsigned long long numberOfAssets;
- (void)requestFaceTileImageWithTargetSize:(struct CGSize)arg1 cropFactor:(unsigned long long)arg2 style:(unsigned long long)arg3 cacheResult:(_Bool)arg4 boundFaceRect:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isVerified;
@property(readonly) NSString *name;
@property(readonly) NSString *px_displayName;
@property(readonly) Class superclass;
@end

