//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface PIPortraitApertureValues : NSObject
{
    float _aperture;
    NSNumber *_minimumAperture;
}

+ (id)apertureValuesFromImageProperties:(id)arg1 error:(out id *)arg2;
@property(retain, nonatomic) NSNumber *minimumAperture; // @synthesize minimumAperture=_minimumAperture;
@property(nonatomic) float aperture; // @synthesize aperture=_aperture;
- (void).cxx_destruct;

@end

