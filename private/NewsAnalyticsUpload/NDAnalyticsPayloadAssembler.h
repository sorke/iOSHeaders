//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NDAnalyticsPayloadAssembler : NSObject
{
    id <NDAnalyticsPayloadAssemblerConfigProvider> _configProvider;
    unsigned long long _maxPayloadSize;
}

@property(nonatomic) unsigned long long maxPayloadSize; // @synthesize maxPayloadSize=_maxPayloadSize;
@property(retain, nonatomic) id <NDAnalyticsPayloadAssemblerConfigProvider> configProvider; // @synthesize configProvider=_configProvider;
- (void).cxx_destruct;
- (void)_fetchAnalyticsEnvelopeContentTypeConfigsWithCompletion:(CDUnknownBlockType)arg1;
- (void)assemblePayloadsWithEntries:(id)arg1 lastUploadDatesByContentType:(id)arg2 droppedEnvelopeReasonsToUpload:(id)arg3 envelopeSizeByEntry:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)determinePayloadDeliveryWindowForEntries:(id)arg1 withLastUploadDatesByContentType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithConfigProvider:(id)arg1 maxPayloadSize:(unsigned long long)arg2;
- (id)init;

@end

