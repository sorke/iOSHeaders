//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXSettings.h"

@class PUAirPlaySettings, PUAlbumListSettings, PUFeedSettings, PUImportSettings, PUIrisSettings, PUMedusaSettings, PUMemoriesSettings, PUMomentsSettings, PUOneUpSettings, PUPerformanceDiagnosticsSettings, PUPhotoEditProtoSettings, PUPhotosGridSettings, PUSceneSettings, PUSearchSettings, PUSlideshowSettings, PUTabbedLibrarySettings, PUTilingViewSettings, PUWelcomeSettings, PUWorkaroundSettings;

@interface PURootSettings : PXSettings
{
    _Bool _enforceDisableIrisUI;
    _Bool _allowIrisUI;
    PUTabbedLibrarySettings *_tabbedLibrarySettings;
    PUPhotosGridSettings *_photosGridSettings;
    PUPhotoEditProtoSettings *_photoEditingSettings;
    PUFeedSettings *_feedSettings;
    PUMomentsSettings *_momentsSettings;
    PUMedusaSettings *_medusaSettings;
    PUOneUpSettings *_oneUpSettings;
    PUTilingViewSettings *_tilingViewSettings;
    Class _interfaceThemeClass;
    PUAirPlaySettings *_airPlaySettings;
    PUSlideshowSettings *_slideshowSettings;
    PUAlbumListSettings *_albumListSettings;
    PUMemoriesSettings *_memoriesSettings;
    PUWelcomeSettings *_welcomeSettings;
    PUWorkaroundSettings *_workaroundSettings;
    PUSceneSettings *_sceneSettings;
    PUSearchSettings *_searchSettings;
    PUIrisSettings *_irisSettings;
    Class _orbInterfaceThemeClass;
    PUPerformanceDiagnosticsSettings *_performanceDiagnosticsSettings;
    PUImportSettings *_importSettings;
}

+ (void)_deleteAllDiagnosticFiles;
+ (id)_memoriesRelatedSettings;
+ (id)_photosUICoreSettings;
+ (id)_photoKitSettings;
+ (id)photosUITesterRootViewController;
+ (void)_setCurrentAsset:(id)arg1;
+ (id)currentAsset;
+ (void)_setDebugRows:(id)arg1;
+ (id)_debugRowsForViewControllerStack:(id)arg1;
+ (void)dismissSettingsController:(id)arg1;
+ (void)presentSettingsController;
+ (void)setupStatusBarDoubleTapOnInternalDevices;
+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(retain, nonatomic) PUImportSettings *importSettings; // @synthesize importSettings=_importSettings;
@property(retain, nonatomic) PUPerformanceDiagnosticsSettings *performanceDiagnosticsSettings; // @synthesize performanceDiagnosticsSettings=_performanceDiagnosticsSettings;
@property(retain, nonatomic) Class orbInterfaceThemeClass; // @synthesize orbInterfaceThemeClass=_orbInterfaceThemeClass;
@property(retain, nonatomic) PUIrisSettings *irisSettings; // @synthesize irisSettings=_irisSettings;
@property(retain, nonatomic) PUSearchSettings *searchSettings; // @synthesize searchSettings=_searchSettings;
@property(retain, nonatomic) PUSceneSettings *sceneSettings; // @synthesize sceneSettings=_sceneSettings;
@property(retain, nonatomic) PUWorkaroundSettings *workaroundSettings; // @synthesize workaroundSettings=_workaroundSettings;
@property(retain, nonatomic) PUWelcomeSettings *welcomeSettings; // @synthesize welcomeSettings=_welcomeSettings;
@property(retain, nonatomic) PUMemoriesSettings *memoriesSettings; // @synthesize memoriesSettings=_memoriesSettings;
@property(retain, nonatomic) PUAlbumListSettings *albumListSettings; // @synthesize albumListSettings=_albumListSettings;
@property(retain, nonatomic) PUSlideshowSettings *slideshowSettings; // @synthesize slideshowSettings=_slideshowSettings;
@property(retain, nonatomic) PUAirPlaySettings *airPlaySettings; // @synthesize airPlaySettings=_airPlaySettings;
@property(retain, nonatomic) Class interfaceThemeClass; // @synthesize interfaceThemeClass=_interfaceThemeClass;
@property(retain, nonatomic) PUTilingViewSettings *tilingViewSettings; // @synthesize tilingViewSettings=_tilingViewSettings;
@property(retain, nonatomic) PUOneUpSettings *oneUpSettings; // @synthesize oneUpSettings=_oneUpSettings;
@property(retain, nonatomic) PUMedusaSettings *medusaSettings; // @synthesize medusaSettings=_medusaSettings;
@property(retain, nonatomic) PUMomentsSettings *momentsSettings; // @synthesize momentsSettings=_momentsSettings;
@property(retain, nonatomic) PUFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(retain, nonatomic) PUPhotoEditProtoSettings *photoEditingSettings; // @synthesize photoEditingSettings=_photoEditingSettings;
@property(retain, nonatomic) PUPhotosGridSettings *photosGridSettings; // @synthesize photosGridSettings=_photosGridSettings;
@property(retain, nonatomic) PUTabbedLibrarySettings *tabbedLibrarySettings; // @synthesize tabbedLibrarySettings=_tabbedLibrarySettings;
@property(nonatomic) _Bool allowIrisUI; // @synthesize allowIrisUI=_allowIrisUI;
- (void).cxx_destruct;
- (void)setEnforceDisableIrisUI:(_Bool)arg1;
- (_Bool)irisUIEnabled;
- (id)archiveValueForKey:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (void)restoreDefaultValues;
- (void)setDefaultValues;
- (id)parentSettings;

@end

