//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOPDPriceDescription, NSString;

@interface GEOPriceDescription : NSObject
{
    GEOPDPriceDescription *_geoPriceDescription;
}

@property(retain, nonatomic) GEOPDPriceDescription *geoPriceDescription; // @synthesize geoPriceDescription=_geoPriceDescription;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *priceDescription;
@property(readonly, nonatomic) _Bool hasPriceDescription;
- (id)initWithGEOPDPriceDescription:(id)arg1;

@end

