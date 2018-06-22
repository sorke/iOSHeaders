//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

#import "VNImageIdealImageSizeProviding.h"

@class NSArray, NSString, VNCanceller;

@interface VNCreateSceneprintRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>
{
    VNCanceller *_canceller;
    _Bool _returnAllResults;
    _Bool _useCenterTileOnly;
}

+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (const CDStruct_7d93034e *)revisionAvailability;
@property(nonatomic) _Bool useCenterTileOnly; // @synthesize useCenterTileOnly=_useCenterTileOnly;
@property(nonatomic) _Bool returnAllResults; // @synthesize returnAllResults=_returnAllResults;
- (void).cxx_destruct;
- (_Bool)internalCancelInContext:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)hasCancellationHook;
- (id)sequencedRequestPreviousObservationsKey;
- (id)observationsCacheKey;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
@property(readonly) NSArray *supportedImageSizeSet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

