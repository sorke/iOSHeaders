//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceListRestrictionsCommand_StatusProfileRestrictions, CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary;

@interface CEMDeviceListRestrictionsCommand_Status : CEMPayloadBase
{
    CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary *_statusGlobalRestrictions;
    CEMDeviceListRestrictionsCommand_StatusProfileRestrictions *_statusProfileRestrictions;
}

+ (id)buildWithGlobalRestrictions:(id)arg1 withProfileRestrictions:(id)arg2;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusProfileRestrictions *statusProfileRestrictions; // @synthesize statusProfileRestrictions=_statusProfileRestrictions;
@property(copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary *statusGlobalRestrictions; // @synthesize statusGlobalRestrictions=_statusGlobalRestrictions;
- (void).cxx_destruct;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

