//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INRestaurantGuest, INRestaurantOffer, NSDate, NSString;

@protocol INRestaurantReservationUserBookingExport <NSObject, JSExport>
@property(copy, nonatomic) NSDate *dateStatusModified;
@property(nonatomic) unsigned long long status;
@property(copy, nonatomic) NSString *guestProvidedSpecialRequestText;
@property(copy, nonatomic) INRestaurantOffer *selectedOffer;
@property(copy, nonatomic) NSString *advisementText;
@property(copy, nonatomic) INRestaurantGuest *guest;
- (id)init;
@end

