//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSortDescriptor, NSString, PHAssetCollection, PHImportSource, PHPhotoLibrary;

@interface PHImportOptions : NSObject
{
    struct options_bits _options_bits;
    NSString *_rootSourcePath;
    PHAssetCollection *_destinationAlbum;
    NSSortDescriptor *_sortDescriptor;
    NSString *_personId;
    PHImportSource *_importSource;
    PHPhotoLibrary *_library;
}

@property(retain, nonatomic) PHPhotoLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) PHImportSource *importSource; // @synthesize importSource=_importSource;
@property(retain, nonatomic) NSString *personId; // @synthesize personId=_personId;
@property(retain, nonatomic) NSSortDescriptor *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
@property(retain, nonatomic) PHAssetCollection *destinationAlbum; // @synthesize destinationAlbum=_destinationAlbum;
@property(retain, nonatomic) NSString *rootSourcePath; // @synthesize rootSourcePath=_rootSourcePath;
- (void).cxx_destruct;
- (void)setAllowUnsupported:(_Bool)arg1;
- (_Bool)allowUnsupported;
- (void)setOmitImportComplete:(_Bool)arg1;
- (_Bool)omitImportComplete;
- (void)setMetadataAddMode:(unsigned long long)arg1;
- (unsigned long long)metadataAddMode;
@property(nonatomic) _Bool deleteAfterImport;
@property(nonatomic) _Bool skipDiskSpaceCheck;
@property(nonatomic) _Bool allowDuplicates;
@property(nonatomic) _Bool referencedImport;
@property(nonatomic) unsigned long long fileOperation;
@property(nonatomic) _Bool skipAlertWhenFinished;
@property(nonatomic) _Bool hideProgress;
- (void)setImportedBy:(short)arg1;
- (short)importedBy;
@property(nonatomic) _Bool preserveFolderStructure;
- (id)initWithLibrary:(id)arg1 importSource:(id)arg2;
- (id)init;

@end

