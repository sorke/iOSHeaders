//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface CEMSystemAllowedMediaDeclaration_MediaItems : CEMPayloadBase
{
    NSString *_payloadAllMedia;
    NSArray *_payloadCd;
    NSArray *_payloadDvd;
    NSArray *_payloadBd;
    NSArray *_payloadBlankcd;
    NSArray *_payloadBlankdvd;
    NSArray *_payloadBlankbd;
    NSArray *_payloadDvdram;
    NSArray *_payloadDiskImage;
    NSArray *_payloadHarddiskInternal;
    NSArray *_payloadHarddiskExternal;
    NSArray *_payloadNetworkdisk;
}

+ (id)buildWithAllMedia:(id)arg1 withCd:(id)arg2 withDvd:(id)arg3 withBd:(id)arg4 withBlankcd:(id)arg5 withBlankdvd:(id)arg6 withBlankbd:(id)arg7 withDvdram:(id)arg8 withDiskImage:(id)arg9 withHarddiskInternal:(id)arg10 withHarddiskExternal:(id)arg11 withNetworkdisk:(id)arg12;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSArray *payloadNetworkdisk; // @synthesize payloadNetworkdisk=_payloadNetworkdisk;
@property(copy, nonatomic) NSArray *payloadHarddiskExternal; // @synthesize payloadHarddiskExternal=_payloadHarddiskExternal;
@property(copy, nonatomic) NSArray *payloadHarddiskInternal; // @synthesize payloadHarddiskInternal=_payloadHarddiskInternal;
@property(copy, nonatomic) NSArray *payloadDiskImage; // @synthesize payloadDiskImage=_payloadDiskImage;
@property(copy, nonatomic) NSArray *payloadDvdram; // @synthesize payloadDvdram=_payloadDvdram;
@property(copy, nonatomic) NSArray *payloadBlankbd; // @synthesize payloadBlankbd=_payloadBlankbd;
@property(copy, nonatomic) NSArray *payloadBlankdvd; // @synthesize payloadBlankdvd=_payloadBlankdvd;
@property(copy, nonatomic) NSArray *payloadBlankcd; // @synthesize payloadBlankcd=_payloadBlankcd;
@property(copy, nonatomic) NSArray *payloadBd; // @synthesize payloadBd=_payloadBd;
@property(copy, nonatomic) NSArray *payloadDvd; // @synthesize payloadDvd=_payloadDvd;
@property(copy, nonatomic) NSArray *payloadCd; // @synthesize payloadCd=_payloadCd;
@property(copy, nonatomic) NSString *payloadAllMedia; // @synthesize payloadAllMedia=_payloadAllMedia;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

