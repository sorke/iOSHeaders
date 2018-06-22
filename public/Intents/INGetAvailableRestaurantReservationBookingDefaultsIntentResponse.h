//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntentResponse.h>

#import "INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport.h"
#import "INImageProxyInjecting.h"

@class INImage, NSDate, NSNumber, NSString;

@interface INGetAvailableRestaurantReservationBookingDefaultsIntentResponse : INIntentResponse <INImageProxyInjecting, INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport>
{
    unsigned long long _defaultPartySize;
    NSDate *_defaultBookingDate;
    NSNumber *_maximumPartySize;
    NSNumber *_minimumPartySize;
    INImage *_providerImage;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) INImage *providerImage; // @synthesize providerImage=_providerImage;
@property(copy, nonatomic) NSNumber *minimumPartySize; // @synthesize minimumPartySize=_minimumPartySize;
@property(copy, nonatomic) NSNumber *maximumPartySize; // @synthesize maximumPartySize=_maximumPartySize;
@property(readonly, copy, nonatomic) NSDate *defaultBookingDate; // @synthesize defaultBookingDate=_defaultBookingDate;
@property(readonly, nonatomic) unsigned long long defaultPartySize; // @synthesize defaultPartySize=_defaultPartySize;
- (void).cxx_destruct;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryRepresentation;
@property(readonly, nonatomic) long long code;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultPartySize:(unsigned long long)arg1 defaultBookingDate:(id)arg2 code:(long long)arg3 userActivity:(id)arg4;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithBackingStore:(id)arg1;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

