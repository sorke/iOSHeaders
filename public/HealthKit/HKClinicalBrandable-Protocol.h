//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKClinicalBrand, NSString;

@protocol HKClinicalBrandable <NSObject>
@property(readonly, copy, nonatomic) HKClinicalBrand *brand;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;

@optional
@property(readonly, nonatomic, getter=hasMultipleLocations) _Bool multiple;
@end

