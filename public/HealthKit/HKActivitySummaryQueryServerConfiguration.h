//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

__attribute__((visibility("hidden")))
@interface HKActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration
{
    _Bool _shouldIncludeActivitySummaryPrivateProperties;
    _Bool _shouldIncludeActivitySummaryStatistics;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldIncludeActivitySummaryStatistics; // @synthesize shouldIncludeActivitySummaryStatistics=_shouldIncludeActivitySummaryStatistics;
@property(nonatomic) _Bool shouldIncludeActivitySummaryPrivateProperties; // @synthesize shouldIncludeActivitySummaryPrivateProperties=_shouldIncludeActivitySummaryPrivateProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

