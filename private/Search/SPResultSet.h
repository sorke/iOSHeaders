//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray;

@interface SPResultSet : NSObject <NSSecureCoding>
{
    NSArray *_resultSections;
    NSArray *_stableSections;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *stableSections; // @synthesize stableSections=_stableSections;
@property(readonly, nonatomic) NSArray *resultSections; // @synthesize resultSections=_resultSections;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSections:(id)arg1 stableSections:(id)arg2;
- (id)initWithSections:(id)arg1;

@end

