//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, _MRAVOutputDeviceDescriptorProtobuf;

@interface _MRAVEndpointDescriptorProtobuf : PBCodable <NSCopying>
{
    int _connectionType;
    _MRAVOutputDeviceDescriptorProtobuf *_designatedGroupLeader;
    NSString *_instanceIdentifier;
    NSString *_name;
    NSMutableArray *_outputDevices;
    NSString *_uniqueIdentifier;
    _Bool _canModifyGroupMembership;
    _Bool _isLocalEndpoint;
    _Bool _isProxyGroupPlayer;
    struct {
        unsigned int connectionType:1;
        unsigned int canModifyGroupMembership:1;
        unsigned int isLocalEndpoint:1;
        unsigned int isProxyGroupPlayer:1;
    } _has;
}

+ (Class)outputDevicesType;
@property(nonatomic) _Bool canModifyGroupMembership; // @synthesize canModifyGroupMembership=_canModifyGroupMembership;
@property(nonatomic) _Bool isProxyGroupPlayer; // @synthesize isProxyGroupPlayer=_isProxyGroupPlayer;
@property(retain, nonatomic) NSString *instanceIdentifier; // @synthesize instanceIdentifier=_instanceIdentifier;
@property(nonatomic) _Bool isLocalEndpoint; // @synthesize isLocalEndpoint=_isLocalEndpoint;
@property(retain, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *designatedGroupLeader; // @synthesize designatedGroupLeader=_designatedGroupLeader;
@property(retain, nonatomic) NSMutableArray *outputDevices; // @synthesize outputDevices=_outputDevices;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
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
@property(nonatomic) _Bool hasCanModifyGroupMembership;
- (int)StringAsConnectionType:(id)arg1;
- (id)connectionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasConnectionType;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) _Bool hasIsProxyGroupPlayer;
@property(readonly, nonatomic) _Bool hasInstanceIdentifier;
@property(nonatomic) _Bool hasIsLocalEndpoint;
@property(readonly, nonatomic) _Bool hasDesignatedGroupLeader;
- (id)outputDevicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)outputDevicesCount;
- (void)addOutputDevices:(id)arg1;
- (void)clearOutputDevices;
@property(readonly, nonatomic) _Bool hasUniqueIdentifier;
@property(readonly, nonatomic) _Bool hasName;

@end

