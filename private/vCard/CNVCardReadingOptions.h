//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CNVCardReadingOptions : NSObject
{
    unsigned long long _contactLimit;
    NSArray *_propertiesToFetch;
    unsigned long long _maximumValueLength;
}

@property(nonatomic) unsigned long long maximumValueLength; // @synthesize maximumValueLength=_maximumValueLength;
@property(copy, nonatomic) NSArray *propertiesToFetch; // @synthesize propertiesToFetch=_propertiesToFetch;
@property(nonatomic) unsigned long long contactLimit; // @synthesize contactLimit=_contactLimit;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

