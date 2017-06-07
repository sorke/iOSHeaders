//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/FCFeedTransforming-Protocol.h>

@class NSArray, NSString;
@protocol FCFeedTransforming;

@interface NTFeedTransformationIncrementalPersonalizedDiversifiedLimit : NSObject <FCFeedTransforming>
{
    NSArray *_priorFeedItems;
    id <FCFeedTransforming> _privateLimitTransformation;
}

@property(retain, nonatomic) id <FCFeedTransforming> privateLimitTransformation; // @synthesize privateLimitTransformation=_privateLimitTransformation;
@property(copy, nonatomic) NSArray *priorFeedItems; // @synthesize priorFeedItems=_priorFeedItems;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;
- (id)initWithPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
