//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreThemeDefinition/TDPersistentDocument.h>

@class NSManagedObjectModel, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSUUID, TDCatalogGlobals, TDDeviceTraits, TDHistorian, TDThreadMOCOrganizer;

@interface CoreThemeDocument : TDPersistentDocument
{
    NSMutableDictionary *constantArrayControllers;
    NSMutableDictionary *cachedConstantArrays;
    long long cachedMaxIdentifierInUse;
    TDHistorian *m_historian;
    TDThreadMOCOrganizer *m_mocOrganizer;
    NSManagedObjectModel *m_managedObjectModel;
    NSString *pathToRepresentedDocument;
    NSString *_relativePathToProductionData;
    NSString *_targetPlatform;
    NSMutableDictionary *_packableRenditions;
    NSMutableDictionary *_explicitlyPackedIdentifiers;
    NSMutableDictionary *_explicitlyPackedPackings;
    NSMutableDictionary *_explicitlyPackedContents;
    _Bool m_didMigrate;
    int _updateVersionMetadataState;
    NSString *_minimumDeploymentVersion;
    int _majorVersion;
    int _minorVersion;
    int _patchVersion;
    NSMutableArray *_deviceTraits;
    struct _renditionkeyfmt *_keyFormat;
    TDCatalogGlobals *_catalogGlobals;
    NSMutableArray *_cachedAppearances;
    id <TDAssetManagementDelegate> _assetManagementDelegate;
    id <TDCustomAssetProvider> _customAssetProvider;
}

+ (id)defaultThemeBitSourceURLForDocumentURL:(id)arg1;
+ (void)doneWithColorConversion;
+ (int)shouldConvertColorsFromColorSpaceWithIdentifier:(unsigned long long)arg1 toIdentifier:(unsigned long long)arg2 error:(id *)arg3;
+ (unsigned long long)standardColorSpaceID;
+ (_Bool)defaultAllowsExtendedRangePixelFormats;
+ (void)closeMigrationProgress;
+ (void)presentMigrationProgress;
+ (id)dataModelNameForVersion:(long long)arg1;
+ (long long)dataModelVersion;
+ (long long)targetPlatformForMOC:(id)arg1;
+ (long long)defaultTargetPlatform;
+ (long long)platformForPersistentString:(id)arg1;
+ (id)persistentStringForPlatform:(long long)arg1;
+ (id)_imageAssetURLsByCopyingFileURLs:(id)arg1 toManagedLocationAtURL:(id)arg2 error:(id *)arg3;
+ (id)migrateDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
+ (long long)dataModelVersionFromMetadata:(id)arg1;
+ (id)createConfiguredDocumentAtURL:(id)arg1 error:(id *)arg2;
+ (void)_addThemeDocument:(id)arg1;
+ (id)_sharedDocumentList;
+ (_Bool)deepmapCompressionEnabled;
+ (_Bool)HEVCCompressionEnabled;
+ (int)maximumAreaOfPackableImageForScale:(unsigned long long)arg1;
+ (void)initialize;
@property(nonatomic) id <TDCustomAssetProvider> customAssetProvider; // @synthesize customAssetProvider=_customAssetProvider;
@property(nonatomic) id <TDAssetManagementDelegate> assetManagementDelegate; // @synthesize assetManagementDelegate=_assetManagementDelegate;
@property(copy) NSString *pathToRepresentedDocument; // @synthesize pathToRepresentedDocument;
@property(copy, nonatomic) NSString *minimumDeploymentVersion; // @synthesize minimumDeploymentVersion=_minimumDeploymentVersion;
- (_Bool)_clampMetrics;
- (void)_processModelProductions;
- (void)_automaticP3GenerationFromSRGB;
- (void)_automaticSRGBGenerationFromP3;
- (_Bool)_matchesAllExceptGamut:(id)arg1 andKeySpec:(id)arg2;
- (void)_optimizeForDeviceTraits;
- (void)incrementallyPackRenditionsSinceDate:(id)arg1 error:(id *)arg2;
- (void)packRenditionsError:(id *)arg1;
- (void)_groupPackableRenditions;
- (_Bool)_updateRenditionPackings:(id)arg1 error:(id *)arg2;
- (void)_insertRendition:(id)arg1 forKey:(id)arg2;
- (void)_delete:(id)arg1 withRendition:(id)arg2;
- (void)_removeRedundantPDFBasedRenditions:(id)arg1;
- (void)_removeRedundantPDFBasedRenditionsForAssets:(id)arg1;
- (void)addThemeBitSourceAtPath:(id)arg1;
- (void)addThemeBitSourceAtPath:(id)arg1 createProductions:(_Bool)arg2;
@property(readonly, nonatomic) NSURL *themeBitSourceURL;
- (void)_configureAfterFirstSave;
- (void)_synchronousSave;
- (_Bool)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (_Bool)checkCompatibilityOfDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (_Bool)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id *)arg5;
- (id)updatedVersionsMetadataFromMetadata:(id)arg1;
- (id)persistentStoreTypeForFileType:(id)arg1;
@property(readonly) TDCatalogGlobals *catalogGlobals;
- (void)importCursorsFromURL:(id)arg1 getUnusedImportedCursors:(id *)arg2 getUnupdatedCursors:(id *)arg3;
- (void)exportCursorsToURL:(id)arg1;
- (void)importColorsFromURL:(id)arg1 valuesOnly:(_Bool)arg2 getUnusedColorNames:(id *)arg3;
- (void)exportColorsToURL:(id)arg1;
- (id)namedEffectProductions;
- (id)namedArtworkProductions;
- (id)schemaPartDefinitionWithElementID:(long long)arg1 partID:(long long)arg2;
- (id)schemaDefinitionWithElementID:(long long)arg1;
- (_Bool)customizeSchemaPartDefinition:(id)arg1 usingArtworkFormat:(id)arg2 nameElement:(id)arg3 shouldReplaceExisting:(_Bool)arg4 error:(id *)arg5;
- (_Bool)customizeSchemaMaterialDefinition:(id)arg1 shouldReplaceExisting:(_Bool)arg2 error:(id *)arg3;
- (_Bool)customizeSchemaEffectDefinition:(id)arg1 shouldReplaceExisting:(_Bool)arg2 error:(id *)arg3;
- (_Bool)customizeSchemaElementDefinition:(id)arg1 usingArtworkFormat:(id)arg2 shouldReplaceExisting:(_Bool)arg3 error:(id *)arg4;
- (void)removeCustomizationForSchemaDefinition:(id)arg1 shouldDeleteAssetFiles:(_Bool)arg2;
- (_Bool)customizationExistsForSchemaDefinition:(id)arg1;
- (id)_customizedSchemaDefinitionsForEntity:(id)arg1;
- (id)customizedSchemaMaterialDefinitions;
- (id)customizedSchemaEffectDefinitions;
- (id)customizedSchemaElementDefinitions;
- (_Bool)usesCUISystemThemeRenditionKey;
- (long long)renditionKeySpecAttributeCount;
- (int)renditionKeySemantics;
- (const struct _renditionkeyfmt *)renditionKeyFormat;
- (const struct _renditionkeyfmt *)untrimmedRenditionKeyFormat;
- (void)_updateKeyFormatWithContext:(id)arg1;
- (_Bool)_canremoveKeyAttribte:(unsigned short)arg1;
- (void)convertColorsFromColorSpaceWithIdentifier:(unsigned long long)arg1 toIdentifier:(unsigned long long)arg2;
- (unsigned long long)colorSpaceID;
- (void)setAllowsExtendedRangePixelFormats:(_Bool)arg1;
- (_Bool)allowsExtendedRangePixelFormats;
- (_Bool)didMigrate;
- (void)primeArrayControllers;
- (void)resetThemeConstants;
- (void)buildModel;
@property long long targetPlatform;
- (void)setArtworkFormat:(id)arg1;
- (id)artworkFormat;
- (unsigned int)checksum;
@property(copy, nonatomic) NSUUID *uuid;
- (unsigned long long)countOfRenditionsMatchingRenditionKeySpecs:(id)arg1;
- (unsigned long long)countOfRenditionsMatchingRenditionKeySpec:(id)arg1;
- (id)renditionsMatchingRenditionKeySpec:(id)arg1;
- (_Bool)isCustomLook;
- (void)setRelativePathToProductionData:(id)arg1;
- (id)relativePathToProductionData;
- (id)rootPathForProductionData;
- (id)pathToAsset:(id)arg1;
- (void)setMetadatum:(id)arg1 forKey:(id)arg2;
- (id)metadatumForKey:(id)arg1;
- (id)_addAssetsAtFileURLs:(id)arg1 createProductions:(_Bool)arg2 referenceFiles:(_Bool)arg3 bitSource:(id)arg4 customInfos:(id)arg5 sortedCustomInfos:(id *)arg6;
- (id)addAssetsAtFileURLs:(id)arg1 createProductions:(_Bool)arg2 referenceFiles:(_Bool)arg3 bitSource:(id)arg4 customInfos:(id)arg5;
- (id)addAssetsAtFileURLs:(id)arg1 createProductions:(_Bool)arg2;
- (id)addAssetsAtFileURLs:(id)arg1;
- (id)assetAtFileURL:(id)arg1;
- (id)assetAtPath:(id)arg1;
- (id)createAssetWithName:(id)arg1 fileType:(id)arg2 scaleFactor:(unsigned int)arg3 inCategory:(id)arg4 forThemeBitSource:(id)arg5;
- (id)createAssetWithName:(id)arg1 scaleFactor:(unsigned int)arg2 inCategory:(id)arg3 forThemeBitSource:(id)arg4;
- (id)createAssetWithName:(id)arg1 inCategory:(id)arg2 forThemeBitSource:(id)arg3;
- (id)createElementProductionWithAsset:(id)arg1;
- (id)_genericPartDefinition;
- (void)importCustomAssetsWithImportInfos:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)createCustomArtworkProductionsForCustomAssets:(id)arg1 withImportInfos:(id)arg2 error:(id *)arg3;
- (id)_addAssetsFromCustomAssetInfos:(id)arg1 bitSource:(id)arg2 error:(id *)arg3;
- (void)deleteNamedAssets:(id)arg1 shouldDeleteAssetFiles:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importNamedAssetsWithImportInfos:(id)arg1 referenceFiles:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canImportNamedAssetImportInfo:(id)arg1;
- (void)importNamedAssetsFromFileURLs:(id)arg1 referenceFiles:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_backwardsCompatibilityPatchForLayoutDirection;
- (void)_generateWatchImages;
- (_Bool)_production:(id)arg1 containsScale:(unsigned int)arg2 andIdiom:(unsigned int)arg3 andSubtype:(unsigned int)arg4;
- (void)createNamedRenditionGroupProductionsForImportInfos:(id)arg1 error:(id *)arg2;
- (void)_tidyUpRecognitionImages;
- (void)_tidyUpLayerStacks;
- (void)_makeRadiosityImages;
- (void)_addResolvedLayerReferenceToFlattenedImageRendition:(id)arg1 usingArtworkRendition:(id)arg2 andLayerReference:(id)arg3;
- (long long)_compareFlattenedKeySpec1:(id)arg1 toKeySpec2:(id)arg2;
- (id)updateAutomaticTexturesForCustomInfos:(id)arg1 allTextureInfos:(id)arg2;
- (void)createNamedRecognitionObjectsForAssets:(id)arg1 customInfos:(id)arg2 error:(id *)arg3;
- (void)createNamedModelsForCustomInfos:(id)arg1 referenceFiles:(_Bool)arg2 bitSource:(id)arg3 error:(id *)arg4;
- (void)createNamedTexturesForCustomInfos:(id)arg1 referenceFiles:(_Bool)arg2 bitSource:(id)arg3 error:(id *)arg4;
- (id)createNamedArtworkProductionsForAssets:(id)arg1 customInfos:(id)arg2 error:(id *)arg3;
- (void)_createBackstopRenditions;
- (void)createBackstop:(id)arg1 withDeploymentTarget:(long long)arg2;
- (_Bool)needToCreateBackstopFor2018DeploymentVariant:(id)arg1;
- (_Bool)isArtworkRenditionEligibleForBackdrop:(id)arg1;
- (_Bool)needToCreateBackstopForPlatform;
- (id)_sizeIndexesByNameFromNamedAssetImportInfos:(id)arg1;
- (id)createNamedColorProductionsForImportInfos:(id)arg1 error:(id *)arg2;
- (id)slicesComputedForImageSize:(struct CGSize)arg1 usingSliceInsets:(CDStruct_3c058996)arg2 resizableSliceSize:(struct CGSize)arg3 withRenditionType:(long long)arg4;
- (id)namedArtworkProductionWithName:(id)arg1;
- (id)elementProductionsWithName:(id)arg1;
- (id)namedElementsForElementDefinition:(id)arg1;
- (id)namedElementWithName:(id)arg1;
- (id)_createNamedElementWithIdentifier:(long long)arg1;
- (id)_createNamedElementWithNextAvailableIdentifier;
- (id)_namedImagePartDefinition;
- (id)_createPhotoshopElementProductionWithAsset:(id)arg1;
- (id)createNamedEffectProductionWithName:(id)arg1 isText:(_Bool)arg2;
- (id)_namedImageEffectPartDefinition;
- (id)_namedTextEffectPartDefinition;
- (id)namedEffectProductionWithName:(id)arg1;
- (id)createEffectStyleProductionForPartDefinition:(id)arg1 withNameIdentifier:(id)arg2;
- (id)createEffectStyleProductionForPartDefinition:(id)arg1;
- (void)_normalizeRenditionKeySpec:(id)arg1 forSchemaRendition:(id)arg2;
- (id)createProductionWithRenditionGroup:(id)arg1 forPartDefinition:(id)arg2 artworkFormat:(id)arg3 nameElement:(id)arg4 shouldReplaceExisting:(_Bool)arg5 error:(id *)arg6;
- (id)createProductionWithRenditionGroup:(id)arg1 forPartDefinition:(id)arg2 artworkFormat:(id)arg3 shouldReplaceExisting:(_Bool)arg4 error:(id *)arg5;
- (_Bool)allowMultipleInstancesOfElementID:(long long)arg1;
- (_Bool)createPSDReferenceArtworkForRenditionGroup:(id)arg1 atDestination:(id)arg2 error:(id *)arg3;
- (id)_themeBitSourceForReferencedFilesAtURLs:(id)arg1 createIfNecessary:(_Bool)arg2;
- (id)_themeBitSource:(id *)arg1;
- (id)createReferencePNGForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2 atLocation:(id)arg3 error:(id *)arg4;
- (id)defaultPathComponentsForPartDefinition:(id)arg1;
- (id)defaultBaseFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2;
- (id)defaultPNGFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2;
- (id)folderNameFromRenditionKey:(id)arg1 forPartDefinition:(id)arg2;
- (id)minimalDisplayNameForThemeConstant:(id)arg1;
- (void)deleteProductions:(id)arg1 shouldDeleteAssetFiles:(_Bool)arg2;
- (void)deleteProduction:(id)arg1 shouldDeleteAssetFiles:(_Bool)arg2;
- (void)deleteObject:(id)arg1;
- (void)deleteObjects:(id)arg1;
- (id)newObjectForEntity:(id)arg1;
- (unsigned long long)countForEntity:(id)arg1 withPredicate:(id)arg2;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 withContext:(id)arg4 error:(id *)arg5;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 error:(id *)arg4;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2 error:(id *)arg3;
- (id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2;
- (id)mappingForPhotoshopLayerIndex:(long long)arg1 themeDrawingLayerIdentifier:(long long)arg2;
- (id)appearanceWithIdentifier:(long long)arg1 name:(id)arg2 createIfNeeded:(_Bool)arg3;
- (id)appearanceWithIdentifier:(long long)arg1;
- (id)artworkDraftTypeWithIdentifier:(long long)arg1;
- (id)zeroCodeArtworkInfoWithIdentifier:(long long)arg1;
- (id)psdImageRefForAsset:(id)arg1;
- (id)constantWithName:(id)arg1 forIdentifier:(long long)arg2;
- (id)textureInterpretaitionWithIdentifier:(unsigned int)arg1;
- (id)textureFaceWithIdentifier:(long long)arg1;
- (id)pixelFormatWithIdentifier:(long long)arg1;
- (id)iterationTypeWithIdentifier:(int)arg1;
- (id)renditionSubtypeWithIdentifier:(unsigned int)arg1;
- (id)renditionTypeWithIdentifier:(long long)arg1;
- (id)effectComponentWithType:(unsigned int)arg1 inRendition:(id)arg2 createIfNeeded:(_Bool)arg3;
- (id)effectParameterValueWithType:(unsigned int)arg1 inComponent:(id)arg2 createIfNeeded:(_Bool)arg3;
- (id)effectParameterTypeWithIdentifier:(unsigned int)arg1;
- (id)effectTypeWithIdentifier:(unsigned int)arg1;
- (id)schemaCategoryWithIdentifier:(long long)arg1;
- (id)lookWithIdentifier:(long long)arg1;
- (id)compressionTypeWithIdentifier:(long long)arg1;
- (id)templateRenderingModeWithIdentifier:(long long)arg1;
- (id)sizeClassWithIdentifier:(long long)arg1;
- (id)deploymentTargetWithIdentifier:(long long)arg1;
- (id)displayGamutWithIdentifier:(long long)arg1;
- (id)graphicsFeatureSetClassWithIdentifier:(long long)arg1;
- (id)idiomWithIdentifier:(long long)arg1;
- (id)drawingLayerWithIdentifier:(long long)arg1;
- (id)previousValueWithIdentifier:(long long)arg1;
- (id)valueWithIdentifier:(long long)arg1;
- (id)presentationStateWithIdentifier:(long long)arg1;
- (id)previousStateWithIdentifier:(long long)arg1;
- (id)stateWithIdentifier:(long long)arg1;
- (id)directionWithIdentifier:(long long)arg1;
- (id)sizeWithIdentifier:(long long)arg1;
- (id)partWithIdentifier:(long long)arg1;
- (id)elementWithIdentifier:(long long)arg1;
- (id)themeConstant:(id)arg1 withIdentifier:(long long)arg2;
- (id)_cachedConstantsForEntity:(id)arg1;
- (void)recacheThemeConstant:(id)arg1;
- (id)historian;
- (id)mocOrganizer;
- (id)managedObjectModel;
- (id)updateToEmbeddedSchemaVersion2AndReturnAlertString:(id *)arg1;
- (void)checkVersionsAndUpdateIfNecessary;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)initWithType:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 targetPlatform:(long long)arg2 error:(id *)arg3;
- (id)init;
- (void)_getFilename:(id *)arg1 scaleFactor:(unsigned int *)arg2 category:(id *)arg3 bitSource:(id *)arg4 forFileURL:(id)arg5;
- (id)_predicateForRenditionKeySpec:(id)arg1;
- (void)changedObjectsNotification:(id)arg1;
- (_Bool)shouldCreateBackstopForLossless;
- (_Bool)shouldCreateBackstopForLossy;
- (_Bool)shouldAllowDeepmapCompressionForDeploymentTarget:(unsigned int)arg1;
- (_Bool)shouldAllowDeepmapCompression;
- (_Bool)shouldAllowHevcCompressionForDeploymentTarget:(unsigned int)arg1;
- (_Bool)shouldAllowHevcCompression;
- (_Bool)shouldPerformHistogramBasedPacking;
- (_Bool)shouldAllowPaletteImageCompressionForDeploymentTarget:(unsigned int)arg1;
- (_Bool)shouldAllowPaletteImageCompression;
- (_Bool)shouldSupportCompactCompression;
- (void)updateRenditionSpec:(id)arg1;
- (id)deviceTraitsUsedForOptimization;
- (void)removeDeviceTraitsForOptimization;
- (void)addDeviceTraitForOptimization:(id)arg1;
@property(retain, nonatomic) TDDeviceTraits *optimizeForDeviceTraits;
@property(readonly, nonatomic) int patchVersion;
@property(readonly, nonatomic) int minorVersion;
@property(readonly, nonatomic) int majorVersion;

@end

