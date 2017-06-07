//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Vision/VNImageBufferProviding-Protocol.h>

@class NSCache, VNImageBuffer, VNObservationsCache, VNRequestPerformer;

__attribute__((visibility("hidden")))
@interface VNRequestPerformingContext : NSObject <VNImageBufferProviding>
{
    unsigned int _qosClass;
    VNRequestPerformer *_requestPerformer_DO_NOT_DIRECTLY_ACCESS;
    VNImageBuffer *_imageBuffer_DO_NOT_DIRECTLY_ACCESS;
    NSCache *_requestToObservationCacheKeyMap;
    VNObservationsCache *_observationsCache;
}

- (void).cxx_destruct;
- (id)previousSequencedObservationsForRequest:(id)arg1;
- (void)recordSequencedObservationsForRequest:(id)arg1;
- (id)cachedObservationsForRequest:(id)arg1;
- (void)cacheObservationsForRequest:(id)arg1;
- (id)_observationCacheKeyForRequest:(id)arg1;
- (id)imageBufferAndReturnError:(id *)arg1;
- (unsigned int)qosClass;
- (id)requestPerformerAndReturnError:(id *)arg1;
- (id)initWithRequestPerformer:(id)arg1 imageBuffer:(id)arg2 observationsCache:(id)arg3 qosClass:(unsigned int)arg4;
- (id)initWithRequestPerformer:(id)arg1 imageBuffer:(id)arg2 observationsCache:(id)arg3;
- (id)modelRequestHandlerAndReturnError:(id *)arg1;
- (void)setModelRequestHandler:(id)arg1;

@end
