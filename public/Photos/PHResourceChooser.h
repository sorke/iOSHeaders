//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PHRecyclableObjectVendor;

@interface PHResourceChooser : NSObject
{
    PHRecyclableObjectVendor *_bagVendor;
}

+ (id)sharedResourceChooser;
- (void).cxx_destruct;
- (void)chooseResourceForAsset:(id)arg1 pixelSize:(struct CGSize)arg2 version:(long long)arg3 loadingMode:(long long)arg4 resourceRecipeID:(unsigned int *)arg5 resourceIdentity:(id *)arg6 resourceBagIfLocal:(id *)arg7;
- (id)chooseFromHintsForAsset:(id)arg1 pixelSize:(struct CGSize)arg2 version:(long long)arg3 choosingPolicy:(long long)arg4 loadingMode:(long long)arg5 excludingKeys:(id)arg6;
- (void)recycleBag:(id)arg1;
- (short)_resourceVersionFromVideoRequestVersion:(long long)arg1 assetHasAdjustments:(_Bool)arg2;
- (id)_resourceVersionsFromImageRequestVersion:(long long)arg1 assetHasAdjustments:(_Bool)arg2;
- (id)init;

@end

