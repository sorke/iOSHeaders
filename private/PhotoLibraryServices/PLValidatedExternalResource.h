//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "PLWriteableResource.h"

@class NSData, NSString, NSURL;

@interface PLValidatedExternalResource : NSObject <PLWriteableResource, NSCopying>
{
    short _version;
    short _resourceType;
    short _localAvailability;
    short _localAvailabilityTarget;
    short _remoteAvailability;
    short _remoteAvailabilityTarget;
    unsigned int _recipeID;
    unsigned int _orientation;
    int _qualitySortValue;
    id <PLAssetID> _assetID;
    id <PLResourceDataStore> _dataStore;
    long long _dataStoreSubtype;
    id <PLResourceDataStoreKey> _dataStoreKey;
    long long _unorientedWidth;
    long long _unorientedHeight;
    id <PLCodecIdentity> _codecID;
    id <PLColorSpaceIdentity> _colorSpaceID;
    id <PLUniformTypeIdentifierIdentity> _uniformTypeIdentifierID;
    NSString *_fingerprint;
    long long _dataLength;
    NSData *_data;
    NSURL *_fileURL;
    unsigned long long _cplType;
}

@property(nonatomic) unsigned long long cplType; // @synthesize cplType=_cplType;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) long long dataLength; // @synthesize dataLength=_dataLength;
@property(retain, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
- (void)setQualitySortValue:(int)arg1;
@property(readonly, nonatomic) int qualitySortValue;
- (void)setUniformTypeIdentifierID:(id)arg1;
@property(readonly, nonatomic) id <PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;
- (void)setColorSpaceID:(id)arg1;
@property(readonly, nonatomic) id <PLColorSpaceIdentity> colorSpaceID;
- (void)setCodecID:(id)arg1;
@property(readonly, nonatomic) id <PLCodecIdentity> codecID;
- (void)setUnorientedHeight:(long long)arg1;
@property(readonly, nonatomic) long long unorientedHeight;
- (void)setUnorientedWidth:(long long)arg1;
@property(readonly, nonatomic) long long unorientedWidth;
- (void)setOrientation:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int orientation;
@property(readonly, nonatomic) short remoteAvailabilityTarget; // @synthesize remoteAvailabilityTarget=_remoteAvailabilityTarget;
- (void)setRemoteAvailability:(short)arg1;
@property(readonly, nonatomic) short remoteAvailability;
@property(readonly, nonatomic) short localAvailabilityTarget; // @synthesize localAvailabilityTarget=_localAvailabilityTarget;
@property(readonly, nonatomic) short localAvailability; // @synthesize localAvailability=_localAvailability;
- (void)setDataStoreKey:(id)arg1;
@property(readonly, nonatomic) id <PLResourceDataStoreKey> dataStoreKey;
- (void)setDataStoreSubtype:(long long)arg1;
@property(readonly, nonatomic) long long dataStoreSubtype;
- (void)setDataStore:(id)arg1;
@property(readonly, nonatomic) id <PLResourceDataStore> dataStore;
- (void)setRecipeID:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int recipeID;
- (void)setResourceType:(short)arg1;
@property(readonly, nonatomic) short resourceType;
- (void)setVersion:(short)arg1;
@property(readonly, nonatomic) short version;
@property(readonly, copy, nonatomic) id <PLAssetID> assetID; // @synthesize assetID=_assetID;
- (void).cxx_destruct;
- (void)setQualitySortValueBasedOnAssetWidth:(long long)arg1 height:(long long)arg2 isNativeColorSpace:(_Bool)arg3;
- (_Bool)isPrimaryUTI;
- (_Bool)isDefaultOrientation;
- (_Bool)isDerivative;
@property(readonly, nonatomic) long long orientedHeight; // @dynamic orientedHeight;
@property(readonly, nonatomic) long long orientedWidth; // @dynamic orientedWidth;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

