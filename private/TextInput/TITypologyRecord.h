//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface TITypologyRecord : NSObject <NSSecureCoding>
{
    double _timestamp;
}

+ (id)recordClasses;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)textSummaryForAutocorrection:(id)arg1;
- (id)shortDescription;
- (id)textSummary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)applyToStatistic:(id)arg1;

@end

