//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaMiningKit/CLSInputClue.h>

@class CLSPlace;

@interface CLSInputLocationClue : CLSInputClue
{
    CLSPlace *_place;
}

+ (id)cluesWithLocations:(id)arg1;
+ (id)clueWithLocation:(id)arg1;
- (void).cxx_destruct;
- (_Bool)isEqualToClue:(id)arg1;
- (void)_prepareWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (_Bool)isDefinite;
- (struct CLLocationCoordinate2D)closestCoordinates;
- (id)projectedLocation;
- (id)location;
- (id)regionInPlacemark;
- (id)region;
- (id)placemark;
- (void)setPlace:(id)arg1;
- (id)place;

@end

