//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMAssetBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class CEMAssetBaseDescriptor, NSString;

@interface CEMBookBookStoreDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol>
{
    CEMAssetBaseDescriptor *_payloadDescriptor;
    NSString *_payloadITunesStoreID;
}

+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withITunesStoreID:(id)arg3;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadITunesStoreID; // @synthesize payloadITunesStoreID=_payloadITunesStoreID;
@property(copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor; // @synthesize payloadDescriptor=_payloadDescriptor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

