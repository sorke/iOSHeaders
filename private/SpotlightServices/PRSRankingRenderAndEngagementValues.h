//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableArray;

@interface PRSRankingRenderAndEngagementValues : NSObject <NSSecureCoding>
{
    NSMutableArray *_renderValues;
    NSMutableArray *_engagementValues;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSMutableArray *engagementValues; // @synthesize engagementValues=_engagementValues;
@property(retain) NSMutableArray *renderValues; // @synthesize renderValues=_renderValues;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

