//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString;

@interface PHAssetResourceCreationOptions : NSObject <NSCopying>
{
    _Bool _shouldMoveFile;
    _Bool _shouldIngestInPlace;
    NSDate *_alternateImportImageDate;
    NSString *_originalFilename;
    NSString *_uniformTypeIdentifier;
}

@property(nonatomic) _Bool shouldIngestInPlace; // @synthesize shouldIngestInPlace=_shouldIngestInPlace;
@property(nonatomic) _Bool shouldMoveFile; // @synthesize shouldMoveFile=_shouldMoveFile;
@property(copy, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(copy, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(retain, nonatomic) NSDate *alternateImportImageDate; // @synthesize alternateImportImageDate=_alternateImportImageDate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;

@end

