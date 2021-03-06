//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBBuildId.h"

@class NSString;

@interface _INPBBuildId : PBCodable <_INPBBuildId, NSSecureCoding, NSCopying>
{
    struct _has;
    NSString *_buildNumber;
    NSString *_versionNumber;
}

@property(copy, nonatomic) NSString *versionNumber; // @synthesize versionNumber=_versionNumber;
@property(copy, nonatomic) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasVersionNumber;
@property(readonly, nonatomic) _Bool hasBuildNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

