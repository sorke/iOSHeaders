//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLPrimaryResourceDataStoreKey.h>

@interface PLPrimaryResourceDataStoreCPLDerivativeKey : PLPrimaryResourceDataStoreKey
{
    struct PLPrimaryDataStore_CPLKeyStrategy_KeyStruct _keyStruct;
}

+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;
@property(nonatomic) struct PLPrimaryDataStore_CPLKeyStrategy_KeyStruct keyStruct; // @synthesize keyStruct=_keyStruct;
- (id)fileURLForAssetID:(id)arg1;
- (id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (_Bool)isValid;
- (id)initWithKeyStruct:(const void *)arg1;
- (id)keyData;
- (id)store;

@end

