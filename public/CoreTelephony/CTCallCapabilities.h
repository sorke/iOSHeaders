//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface CTCallCapabilities : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isWifiCallingAvailable;
    _Bool _isVoLTECallingAvailable;
    _Bool _isCSCallingAvailable;
    _Bool _isEmergencyCallingOnWifiAllowed;
    _Bool _isEmergencyCallingOnWifiAvailable;
    _Bool _isCarrierSupportsEmergencyCallOnWifiNoLimit;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isCarrierSupportsEmergencyCallOnWifiNoLimit; // @synthesize isCarrierSupportsEmergencyCallOnWifiNoLimit=_isCarrierSupportsEmergencyCallOnWifiNoLimit;
@property(nonatomic) _Bool isEmergencyCallingOnWifiAvailable; // @synthesize isEmergencyCallingOnWifiAvailable=_isEmergencyCallingOnWifiAvailable;
@property(nonatomic) _Bool isEmergencyCallingOnWifiAllowed; // @synthesize isEmergencyCallingOnWifiAllowed=_isEmergencyCallingOnWifiAllowed;
@property(nonatomic) _Bool isCSCallingAvailable; // @synthesize isCSCallingAvailable=_isCSCallingAvailable;
@property(nonatomic) _Bool isVoLTECallingAvailable; // @synthesize isVoLTECallingAvailable=_isVoLTECallingAvailable;
@property(nonatomic) _Bool isWifiCallingAvailable; // @synthesize isWifiCallingAvailable=_isWifiCallingAvailable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

