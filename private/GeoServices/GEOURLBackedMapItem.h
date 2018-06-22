//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOBaseMapItem.h>

#import "GEOMapItemStorageSerializable.h"

@class GEOAddress, GEOAssociatedApp, GEOFeatureStyleAttributes, GEOMapItemClientAttributes, GEOMapItemContainedPlace, GEOMapItemDetourInfo, GEOMapItemIdentifier, GEOMapItemPhotosAttribution, GEOMapItemPlaceAttribution, GEOMapItemReviewsAttribution, GEOMapRegion, GEOMessageLink, GEOPDBusinessClaim, GEOPDFlyover, GEOPDPlace, GEOPlace, GEOPlacecardLayoutConfiguration, GEOPriceDescription, GEORestaurantFeaturesLink, GEOURLExtraStorage, NSArray, NSData, NSDate, NSDictionary, NSString, NSTimeZone, NSURL;

@interface GEOURLBackedMapItem : GEOBaseMapItem <GEOMapItemStorageSerializable>
{
    NSURL *_url;
    GEOURLExtraStorage *_extraStorage;
    GEOFeatureStyleAttributes *_styleAttributes;
    GEOMapItemIdentifier *_identifier;
    CDStruct_2c43369c _coordinate;
    _Bool _hasMUID;
    unsigned long long _muid;
    GEOAddress *_geoAddress;
    NSString *_name;
}

+ (_Bool)urlContainsExtraStorage:(id)arg1;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) GEOAddress *geoAddress; // @synthesize geoAddress=_geoAddress;
@property(readonly, nonatomic, getter=_hasMUID) _Bool hasMUID; // @synthesize hasMUID=_hasMUID;
@property(readonly, nonatomic, getter=_muid) unsigned long long muid; // @synthesize muid=_muid;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic, getter=_identifier) GEOMapItemIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
- (void).cxx_destruct;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic, getter=_businessURL) NSString *businessURL;
@property(readonly, nonatomic, getter=_telephone) NSString *telephone;
@property(readonly, nonatomic, getter=_hasTelephone) _Bool hasTelephone;
- (id)mapItemStorageForGEOMapItem;
@property(readonly, nonatomic, getter=_responseStatusIsIncomplete) _Bool responseStatusIncomplete;
@property(readonly, nonatomic, getter=_hasResolvablePartialInformation) _Bool hasResolvablePartialInformation;
@property(readonly, nonatomic) int referenceFrame;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)initWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic, getter=_acceptsApplePay) _Bool acceptsApplePay;
@property(readonly, nonatomic, getter=_additionalPlaceInfos) NSArray *additionalPlaceInfos;
@property(readonly, nonatomic) NSDictionary *addressDictionary;
@property(readonly, nonatomic, getter=_addressGeocodeAccuracy) int addressGeocodeAccuracy;
@property(readonly, nonatomic, getter=_annotatedItemList) id <GEOAnnotatedItemList> annotatedItemList;
@property(readonly, nonatomic, getter=_areaInMeters) double areaInMeters;
@property(readonly, nonatomic) NSArray *areasOfInterest;
@property(readonly, nonatomic, getter=_associatedApp) GEOAssociatedApp *associatedApp;
@property(readonly, nonatomic, getter=_attribution) GEOMapItemPlaceAttribution *attribution;
@property(readonly, nonatomic, getter=_browseCategories) NSArray *browseCategories;
@property(readonly, nonatomic, getter=_businessClaim) GEOPDBusinessClaim *businessClaim;
@property(readonly, nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property(readonly, nonatomic, getter=_childPlaces) NSArray *childPlaces;
@property(readonly, nonatomic, getter=_clientAttributes) GEOMapItemClientAttributes *clientAttributes;
@property(readonly, nonatomic, getter=_completeOperatingHours) NSArray *completeOperatingHours;
@property(readonly, nonatomic) int contactAddressType;
@property(readonly, nonatomic) _Bool contactIsMe;
@property(readonly, nonatomic) NSString *contactName;
@property(readonly, nonatomic) NSString *contactSpokenName;
@property(readonly, nonatomic, getter=_containedPlace) GEOMapItemContainedPlace *containedPlace;
@property(readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) GEOMapItemDetourInfo *detourInfo;
@property(readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegionOrNil;
@property(readonly, nonatomic) float displayMaxZoom;
@property(readonly, nonatomic) float displayMinZoom;
@property(readonly, nonatomic, getter=isDisputed) _Bool disputed;
@property(readonly, nonatomic) NSData *encodedData;
@property(readonly, nonatomic, getter=_encyclopedicInfo) id <GEOEncyclopedicInfo> encyclopedicInfo;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) NSData *externalTransitStationCode;
@property(readonly, nonatomic, getter=_featureLink) GEORestaurantFeaturesLink *featureLink;
@property(readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property(readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncementMessage;
@property(readonly, nonatomic) GEOMapRegion *geoFenceMapRegion;
@property(readonly, nonatomic, getter=_goodForKids) _Bool goodForKids;
@property(readonly, nonatomic, getter=_hasAcceptsApplePayAmenity) _Bool hasAcceptsApplePayAmenity;
@property(readonly, nonatomic, getter=_hasAnyAmenities) _Bool hasAnyAmenities;
@property(readonly, nonatomic, getter=_hasAreaInMeters) _Bool hasAreaInMeters;
@property(readonly, nonatomic, getter=_hasBusinessClaim) _Bool hasBusinessClaim;
@property(readonly, nonatomic, getter=_hasCurrentOperatingHours) _Bool hasCurrentOperatingHours;
@property(readonly, nonatomic, getter=_hasDelivery) _Bool hasDelivery;
@property(readonly, nonatomic, getter=_hasDeliveryAmenity) _Bool hasDeliveryAmenity;
@property(readonly, nonatomic) _Bool hasDisplayMaxZoom;
@property(readonly, nonatomic) _Bool hasDisplayMinZoom;
@property(readonly, nonatomic, getter=_hasEncyclopedicInfo) _Bool hasEncyclopedicInfo;
@property(readonly, nonatomic) _Bool hasExpiredComponents;
@property(readonly, nonatomic, getter=_hasFeatureLink) _Bool hasFeatureLink;
@property(readonly, nonatomic, getter=_hasFlyover) _Bool hasFlyover;
@property(readonly, nonatomic, getter=_hasGenderNeutralRestroom) _Bool hasGenderNeutralRestroom;
@property(readonly, nonatomic, getter=_hasGenderNeutralRestroomAmenity) _Bool hasGenderNeutralRestroomAmenity;
@property(readonly, nonatomic, getter=_hasGoodForKidsAmenity) _Bool hasGoodForKidsAmenity;
@property(readonly, nonatomic, getter=_hasOperatingHours) _Bool hasOperatingHours;
@property(readonly, nonatomic, getter=_hasPriceRange) _Bool hasPriceRange;
@property(readonly, nonatomic, getter=_hasResultProviderID) _Bool hasResultProviderID;
@property(readonly, nonatomic, getter=_hasTakesReservationsAmenity) _Bool hasTakesReservationsAmenity;
@property(readonly, nonatomic, getter=_hasTransit) _Bool hasTransit;
@property(readonly, nonatomic, getter=_hasUserRatingScore) _Bool hasUserRatingScore;
@property(readonly, nonatomic) _Bool hasVenueCapacity;
@property(readonly, nonatomic, getter=_hasVenueFeatureType) _Bool hasVenueFeatureType;
@property(readonly, nonatomic, getter=_hasWifiFingerprintConfidence) _Bool hasWifiFingerprintConfidence;
@property(readonly, nonatomic, getter=_hasWifiFingerprintLabelStatusCode) _Bool hasWifiFingerprintLabelStatusCode;
@property(readonly, nonatomic, getter=_hasWifiFingerprintLabelType) _Bool hasWifiFingerprintLabelType;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=_isInLinkedPlaceRelationship) _Bool inLinkedPlaceRelationship;
@property(readonly, nonatomic) _Bool isEventAllDay;
@property(readonly, nonatomic, getter=_isStandaloneBrand) _Bool isStandAloneBrand;
@property(readonly, nonatomic, getter=_isTransitDisplayFeature) _Bool isTransitDisplayFeature;
@property(readonly, nonatomic, getter=_messageLink) GEOMessageLink *messageLink;
@property(readonly, nonatomic, getter=_needsAttribution) _Bool needsAttribution;
@property(readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property(readonly, nonatomic, getter=_openingHoursOptions) unsigned long long openingHoursOptions;
@property(readonly, nonatomic, getter=_operatingHours) NSArray *operatingHours;
@property(readonly, nonatomic, getter=_optsOutOfTelephoneAds) _Bool optsOutOfTelephoneAds;
@property(readonly, nonatomic, getter=_parsecSectionType) int parsecSectionType;
@property(readonly, nonatomic, getter=_photos) NSArray *photos;
@property(readonly, nonatomic, getter=_photosAttribution) GEOMapItemPhotosAttribution *photosAttribution;
@property(readonly, nonatomic, getter=_place) GEOPlace *place;
@property(readonly, nonatomic, getter=_placeData) GEOPDPlace *placeData;
@property(readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property(readonly, nonatomic, getter=_placeDisplayStyle) int placeDisplayStyle;
@property(readonly, nonatomic, getter=_placeDisplayType) int placeDisplayType;
@property(readonly, nonatomic, getter=_placeType) int placeType;
@property(readonly, nonatomic, getter=_placecardLayoutConfiguration) GEOPlacecardLayoutConfiguration *placecardLayoutConfiguration;
@property(readonly, nonatomic, getter=_poiPinpointURLString) NSString *poiPinpointURLString;
@property(readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property(readonly, nonatomic, getter=_priceDescription) GEOPriceDescription *priceDescription;
@property(readonly, nonatomic, getter=_priceRange) unsigned int priceRange;
@property(readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property(readonly, nonatomic, getter=_quickLinks) NSArray *quickLinks;
@property(readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property(readonly, nonatomic, getter=_resultSnippetDistanceDisplayThreshold) unsigned int resultSnippetDistanceDisplayThreshold;
@property(readonly, nonatomic, getter=_resultSnippetLocationString) NSString *resultSnippetLocationString;
@property(readonly, nonatomic, getter=_reviews) NSArray *reviews;
@property(readonly, nonatomic, getter=_reviewsAttribution) GEOMapItemReviewsAttribution *reviewsAttribution;
@property(readonly, nonatomic, getter=_roadAccessPoints) NSArray *roadAccessPoints;
@property(readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property(readonly, nonatomic) NSArray *spatialMappedCategories;
@property(readonly, nonatomic) NSArray *spatialMappedPlaceCategories;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=_takesReservations) _Bool takesReservations;
@property(readonly, nonatomic) NSTimeZone *timezone;
@property(readonly, nonatomic, getter=_tips) NSArray *tips;
@property(readonly, nonatomic, getter=_transitAttribution) id <GEOTransitAttribution> transitAttribution;
@property(readonly, nonatomic, getter=_transitInfo) id <GEOMapItemTransitInfo> transitInfo;
@property(readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property(readonly, nonatomic) long long venueCapacity;
@property(readonly, nonatomic, getter=_venueFeatureType) int venueFeatureType;
@property(readonly, nonatomic, getter=_venueInfo) id <GEOMapItemVenueInfo> venueInfo;
@property(readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property(readonly, nonatomic, getter=_wifiFingerprintConfidence) unsigned int wifiFingerprintConfidence;
@property(readonly, nonatomic, getter=_wifiFingerprintLabelStatusCode) int wifiFingerprintLabelStatusCode;
@property(readonly, nonatomic, getter=_wifiFingerprintLabelType) int wifiFingerprintLabelType;

@end

