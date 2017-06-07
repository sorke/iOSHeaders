//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CLSTimeZones : NSObject
{
    NSArray *_timeZonesDB;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *timeZonesDB; // @synthesize timeZonesDB=_timeZonesDB;
- (void).cxx_destruct;
- (id)timeZoneWithDictionary:(id)arg1;
- (id)filteredTimeZonesWithCountyCode:(id)arg1;
- (id)closestZoneInfoWithLocation:(id)arg1 source:(id)arg2;
- (id)_importDataBaseFromFile:(id)arg1;
- (void)invalidateCaches;
- (id)timeZoneWithLocation:(id)arg1 countryCode:(id)arg2;
- (id)timeZoneWithLocation:(id)arg1;

@end
