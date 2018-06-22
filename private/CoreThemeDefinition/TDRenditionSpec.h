//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSSet, TDElementProduction, TDRenditionKeySpec, TDRenditionType;

@interface TDRenditionSpec : NSManagedObject
{
}

- (void)drawPackableRenditionInContext:(struct CGContext *)arg1 withDocument:(id)arg2;
- (_Bool)canBePackedWithDocument:(id)arg1;
- (_Bool)updatePackingPropertiesWithDocument:(id)arg1;
@property(nonatomic) struct CGPoint packedPoint;
@property(retain, nonatomic) TDRenditionType *renditionType; // @dynamic renditionType;
- (id)propertiesAsDictionary;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)resetToBaseKeySpec;
- (void)awakeFromInsert;

// Remaining properties
@property(nonatomic) _Bool alphaCrop; // @dynamic alphaCrop;
@property(retain, nonatomic) NSDate *dateOfLastChange; // @dynamic dateOfLastChange;
@property(nonatomic) int height; // @dynamic height;
@property(retain, nonatomic) TDRenditionKeySpec *keySpec; // @dynamic keySpec;
@property(nonatomic) _Bool monochrome; // @dynamic monochrome;
@property(nonatomic) _Bool opaque; // @dynamic opaque;
@property(nonatomic) int packedPointX; // @dynamic packedPointX;
@property(nonatomic) int packedPointY; // @dynamic packedPointY;
@property(retain, nonatomic) NSSet *packedRenditions; // @dynamic packedRenditions;
@property(retain, nonatomic) TDRenditionSpec *parentRendition; // @dynamic parentRendition;
@property(retain, nonatomic) TDElementProduction *production; // @dynamic production;
@property(retain, nonatomic) NSSet *properties; // @dynamic properties;
@property(nonatomic) int width; // @dynamic width;

@end

