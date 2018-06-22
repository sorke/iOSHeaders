//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDJournalableOperation.h>

@class NSArray, NSUUID;

@interface HDInsertValuesToQuantitySampleSeriesOperation : HDJournalableOperation
{
    NSUUID *_seriesIdentifier;
    NSArray *_values;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, copy, nonatomic) NSUUID *seriesIdentifier; // @synthesize seriesIdentifier=_seriesIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)initWithSeriesIdentifier:(id)arg1 values:(id)arg2;

@end

