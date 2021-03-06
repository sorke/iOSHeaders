//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKDataProviderValue.h"

@class HKQuantity, NSDate, NSString;

@interface HKGenericQuantityDataProviderCurrentValue : NSObject <HKDataProviderValue>
{
    HKQuantity *_quantity;
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)contextualDescriptionWithDateCache:(id)arg1;
- (id)stringWithDisplayType:(id)arg1 unitController:(id)arg2;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)initWithQuantity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

