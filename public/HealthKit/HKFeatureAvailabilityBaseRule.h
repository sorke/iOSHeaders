//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityBaseRule : NSObject
{
    id <HKFeatureAvailabilityDataSource> _dataSource;
}

+ (Class)ruleClassForRawValue:(id)arg1;
@property(nonatomic) __weak id <HKFeatureAvailabilityDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (_Bool)evaluate;
- (void)processUserInfo:(id)arg1;
- (id)initWithRawValue:(id)arg1 dataSource:(id)arg2;

@end

