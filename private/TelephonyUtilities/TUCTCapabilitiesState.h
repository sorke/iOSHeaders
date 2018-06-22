//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "TUPubliclyAccessibleCopying.h"

@class NSData, NSString, NSURL, TUCTCapabilityInfo;

@interface TUCTCapabilitiesState : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>
{
    _Bool _provisioningURLInvalid;
    _Bool _supported;
    _Bool _enabled;
    _Bool _currentlyAvailable;
    _Bool _roamingSupported;
    _Bool _roamingEnabled;
    _Bool _emergencySupported;
    _Bool _emergencyCurrentlyAvailable;
    int _provisioningStatus;
    NSURL *_provisioningURL;
    NSData *_provisioningPostData;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isEmergencyCurrentlyAvailable) _Bool emergencyCurrentlyAvailable; // @synthesize emergencyCurrentlyAvailable=_emergencyCurrentlyAvailable;
@property(nonatomic, getter=isEmergencySupported) _Bool emergencySupported; // @synthesize emergencySupported=_emergencySupported;
@property(nonatomic, getter=isRoamingEnabled) _Bool roamingEnabled; // @synthesize roamingEnabled=_roamingEnabled;
@property(nonatomic, getter=isRoamingSupported) _Bool roamingSupported; // @synthesize roamingSupported=_roamingSupported;
@property(nonatomic, getter=isCurrentlyAvailable) _Bool currentlyAvailable; // @synthesize currentlyAvailable=_currentlyAvailable;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isSupported) _Bool supported; // @synthesize supported=_supported;
@property(copy, nonatomic) NSData *provisioningPostData; // @synthesize provisioningPostData=_provisioningPostData;
@property(nonatomic, getter=isProvisioningURLInvalid) _Bool provisioningURLInvalid; // @synthesize provisioningURLInvalid=_provisioningURLInvalid;
@property(copy, nonatomic) NSURL *provisioningURL; // @synthesize provisioningURL=_provisioningURL;
@property(nonatomic) int provisioningStatus; // @synthesize provisioningStatus=_provisioningStatus;
- (void).cxx_destruct;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg1;
- (id)publiclyAccessibleCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)invalidateProvisioningURL;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) TUCTCapabilityInfo *ctCapabilityInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

