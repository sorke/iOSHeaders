//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@class NSNumber, VNSequenceSummarizationObservation;

@interface VNSequenceSummarizationRequest : VNImageBasedRequest
{
}

+ (id)supportedFrameRates;
+ (Class)configurationClass;
+ (const CDStruct_d47b9615 *)dependentRequestCompatability;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (_Bool)allowsCachingOfResults;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSNumber *frameRate;
@property(retain, nonatomic) NSNumber *frameTimeStamp;
@property(retain, nonatomic) VNSequenceSummarizationObservation *inputObservation;
- (id)initWithSequenceSummarizationObservation:(id)arg1 frameTimeStamp:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithSequenceSummarizationObservation:(id)arg1 frameTimeStamp:(id)arg2;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

@end

