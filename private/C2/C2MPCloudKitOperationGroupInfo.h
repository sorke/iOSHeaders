//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPCloudKitOperationGroupInfo : PBCodable <NSCopying>
{
    NSString *_operationGroupId;
    NSString *_operationGroupName;
    _Bool _operationGroupTriggered;
    struct {
        unsigned int operationGroupTriggered:1;
    } _has;
}

@property(nonatomic) _Bool operationGroupTriggered; // @synthesize operationGroupTriggered=_operationGroupTriggered;
@property(retain, nonatomic) NSString *operationGroupName; // @synthesize operationGroupName=_operationGroupName;
@property(retain, nonatomic) NSString *operationGroupId; // @synthesize operationGroupId=_operationGroupId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasOperationGroupTriggered;
@property(readonly, nonatomic) _Bool hasOperationGroupName;
@property(readonly, nonatomic) _Bool hasOperationGroupId;

@end

