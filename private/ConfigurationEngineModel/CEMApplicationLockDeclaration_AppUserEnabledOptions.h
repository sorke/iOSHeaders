//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMApplicationLockDeclaration_AppUserEnabledOptions : CEMPayloadBase
{
    NSNumber *_payloadVoiceOver;
    NSNumber *_payloadZoom;
    NSNumber *_payloadInvertColors;
    NSNumber *_payloadAssistiveTouch;
}

+ (id)buildWithVoiceOver:(id)arg1 withZoom:(id)arg2 withInvertColors:(id)arg3 withAssistiveTouch:(id)arg4;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSNumber *payloadAssistiveTouch; // @synthesize payloadAssistiveTouch=_payloadAssistiveTouch;
@property(copy, nonatomic) NSNumber *payloadInvertColors; // @synthesize payloadInvertColors=_payloadInvertColors;
@property(copy, nonatomic) NSNumber *payloadZoom; // @synthesize payloadZoom=_payloadZoom;
@property(copy, nonatomic) NSNumber *payloadVoiceOver; // @synthesize payloadVoiceOver=_payloadVoiceOver;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

