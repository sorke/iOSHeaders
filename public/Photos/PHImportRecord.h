//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHImportExceptionRecorder.h>

@class NSMutableArray, NSString, PHImportAsset, PHImportTimerCollection;

@interface PHImportRecord : PHImportExceptionRecorder
{
    NSString *_rawAssetIdentifier;
    _Bool _referencedImport;
    _Bool _isDownloaded;
    unsigned char _importType;
    unsigned char _importFileOperation;
    NSString *_assetIdentifier;
    PHImportAsset *_importAsset;
    NSMutableArray *_relatedRecords;
    NSString *_sourcePath;
    NSString *_destinationPath;
    PHImportTimerCollection *_timers;
}

@property(nonatomic) unsigned char importFileOperation; // @synthesize importFileOperation=_importFileOperation;
@property(nonatomic) unsigned char importType; // @synthesize importType=_importType;
@property(retain, nonatomic) PHImportTimerCollection *timers; // @synthesize timers=_timers;
@property(retain, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(retain, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(nonatomic) _Bool isDownloaded; // @synthesize isDownloaded=_isDownloaded;
@property(nonatomic) _Bool referencedImport; // @synthesize referencedImport=_referencedImport;
@property(retain, nonatomic) NSMutableArray *relatedRecords; // @synthesize relatedRecords=_relatedRecords;
@property(retain, nonatomic) PHImportAsset *importAsset; // @synthesize importAsset=_importAsset;
@property(retain, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
- (void).cxx_destruct;
- (void)setDownloadedAtPath:(id)arg1;
- (_Bool)needsDownload;
- (id)allImportRecords;
- (id)allImportAssets;
- (id)recordForAsset:(id)arg1;
- (void)addRelatedRecord:(id)arg1;
@property(readonly, nonatomic) NSString *rawAssetIdentifier;
@property(readonly, nonatomic) _Bool isReferenced;
- (id)allAssetIdentifiers;
- (void)cleanupAfterFailure;
- (void)updateImportType;
- (id)description;
- (id)initWithImportAsset:(id)arg1;

@end

