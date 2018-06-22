//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSString, UIImage, XBApplicationSnapshotGenerationContext, XBSnapshotContainerIdentity, XBStatusBarSettings;

@interface XBApplicationSnapshot : NSObject <NSSecureCoding, BSDescriptionProviding>
{
    XBSnapshotContainerIdentity *_containerIdentity;
    id <XBSnapshotManifestStore> _store;
    NSMutableDictionary *_variantsByID;
    _Bool _invalidated;
    NSString *_identifier;
    NSString *_logIdentifier;
    NSString *_groupID;
    NSString *_variantID;
    NSString *_launchInterfaceIdentifier;
    NSString *_name;
    NSString *_scheme;
    NSString *_requiredOSVersion;
    NSString *_path;
    NSString *_filename;
    NSString *_relativePath;
    long long _fileLocation;
    NSDate *_creationDate;
    NSDate *_lastUsedDate;
    NSDate *_expirationDate;
    _Bool _fullScreen;
    struct CGSize _referenceSize;
    struct CGRect _contentFrame;
    long long _interfaceOrientation;
    long long _contentType;
    long long _fileFormat;
    _Bool _imageOpaque;
    double _imageScale;
    long long _imageOrientation;
    XBStatusBarSettings *_statusBarSettings;
    long long _classicMode;
    long long _compatibilityMode;
    long long _backgroundStyle;
    XBApplicationSnapshotGenerationContext *_generationContext;
    UIImage *_cachedImage;
    unsigned long long _imageAccessCount;
    _Bool _keepImageAccessUntilExpiration;
    _Bool _keepImageAccessForPreHeat;
    _Bool _hasProtectedContent;
    NSDictionary *_extendedData;
    CDUnknownBlockType _imageGenerator;
    struct CGAffineTransform _imageTransform;
}

+ (_Bool)supportsSecureCoding;
+ (id)dataForImage:(id)arg1 withFormat:(long long)arg2;
+ (id)_allSecureCodingClassesIncludingDefaultAndClientSpecified;
+ (void)setSecureCodableCustomExtendedDataClasses:(id)arg1;
+ (id)secureCodableCustomExtendedDataClasses;
+ (id)normalizeSnapshotName:(id)arg1;
@property(nonatomic) struct CGAffineTransform imageTransform; // @synthesize imageTransform=_imageTransform;
@property(nonatomic) long long fileLocation; // @synthesize fileLocation=_fileLocation;
@property(copy, nonatomic, getter=_relativePath, setter=_setRelativePath:) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(nonatomic, getter=isImageOpaque) _Bool imageOpaque; // @synthesize imageOpaque=_imageOpaque;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(copy) XBSnapshotContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
@property(readonly, nonatomic, getter=_store) id <XBSnapshotManifestStore> store; // @synthesize store=_store;
@property(copy) NSDictionary *extendedData; // @synthesize extendedData=_extendedData;
@property(readonly, nonatomic) XBApplicationSnapshotGenerationContext *generationContext; // @synthesize generationContext=_generationContext;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) long long compatibilityMode; // @synthesize compatibilityMode=_compatibilityMode;
@property(nonatomic) long long classicMode; // @synthesize classicMode=_classicMode;
@property(copy, nonatomic) XBStatusBarSettings *statusBarSettings; // @synthesize statusBarSettings=_statusBarSettings;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) struct CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSDate *lastUsedDate; // @synthesize lastUsedDate=_lastUsedDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) long long fileFormat; // @synthesize fileFormat=_fileFormat;
@property(copy, nonatomic, getter=filename, setter=_setFilename:) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic, setter=_setPath:) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *requiredOSVersion; // @synthesize requiredOSVersion=_requiredOSVersion;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *launchInterfaceIdentifier; // @synthesize launchInterfaceIdentifier=_launchInterfaceIdentifier;
@property(copy, nonatomic) NSString *variantID; // @synthesize variantID=_variantID;
@property(readonly, copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 includeVariants:(_Bool)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_purgeCachedImageIfAppropriate:(_Bool)arg1;
- (_Bool)_shouldDeleteFileOnPurge;
- (void)_setHasProtectedContent:(_Bool)arg1;
- (void)_cacheImage:(id)arg1;
- (id)_cachedImage;
- (void)_configureWithPath:(id)arg1;
- (id)_configureDefaultPathWithinGroupForFormat:(long long)arg1;
- (id)_createVariantWithIdentifier:(id)arg1;
- (_Bool)_isInvalidated;
- (void)_invalidate;
- (_Bool)_validateWithContainerIdentity:(id)arg1;
- (id)_determineRelativePathForPath:(id)arg1 location:(long long *)arg2;
- (_Bool)_path:(id)arg1 isRelativeToPath:(id)arg2 outRelativePath:(id *)arg3;
- (struct CGRect)_referenceBounds;
- (_Bool)_hasGenerationContext;
@property(copy, nonatomic) CDUnknownBlockType imageGenerator; // @synthesize imageGenerator=_imageGenerator;
- (void)_manifestQueueDecode_setStore:(id)arg1;
- (id)descriptionWithoutVariants;
- (_Bool)isValid;
- (void)_endPreHeatImageAccess;
- (void)_beginPreHeatImageAccess;
- (void)endImageAccess;
- (void)beginImageAccess;
- (void)_snynchronized_evaluateImageAccessUntilExpirationEnablingIfNecessary:(_Bool)arg1;
- (_Bool)_synchronized_isExpired;
- (void)beginImageAccessUntilExpiration;
- (void)purgeImage;
- (_Bool)hasCachedImage;
- (void)loadImage;
- (void)loadImageForPreHeat;
- (id)cachedImageForInterfaceOrientation:(long long)arg1;
- (id)imageForInterfaceOrientation:(long long)arg1;
- (id)variantWithIdentifier:(id)arg1;
- (id)variants;
@property(readonly, nonatomic) _Bool hasFullSizedContent;
@property(nonatomic) struct CGRect contentFrame;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) _Bool hasProtectedContent;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) _Bool fileExists;
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
- (void)_setFileLocation:(long long)arg1;
- (long long)_fileLocation;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithContainerIdentity:(id)arg1 store:(id)arg2 groupID:(id)arg3 generationContext:(id)arg4;
- (id)init;
- (void)_commonInitWithIdentifier:(id)arg1;
@property(readonly, nonatomic) unsigned long long _contentTypeMask;
@property(readonly, nonatomic) unsigned long long _interfaceOrientationMask;
@property(readonly, retain, nonatomic) XBStatusBarSettings *_sortableStatusBarSettings;
@property(readonly, copy, nonatomic) NSString *_sortableRequiredOSVersion;
@property(readonly, copy, nonatomic) NSString *_sortableLaunchInterfaceIdentifier;
@property(readonly, copy, nonatomic) NSString *_sortableName;
@property(readonly, copy, nonatomic) NSString *_sortableScheme;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

