//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "HDDecoding.h"
#import "NSCopying.h"

@class HDCodableFHIRResourceForAPI, HDCodableSample, NSString;

@interface HDCodableClinicalRecord : PBCodable <HDDecoding, NSCopying>
{
    NSString *_displayName;
    HDCodableFHIRResourceForAPI *_fHIRResource;
    HDCodableSample *_sample;
}

@property(retain, nonatomic) HDCodableFHIRResourceForAPI *fHIRResource; // @synthesize fHIRResource=_fHIRResource;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasFHIRResource;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) _Bool hasSample;
- (_Bool)applyToObject:(id)arg1 error:(out id *)arg2;
- (_Bool)applyToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

