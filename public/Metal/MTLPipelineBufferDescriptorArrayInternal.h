//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLPipelineBufferDescriptorArray.h>

@class MTLPipelineBufferDescriptorInternal;

__attribute__((visibility("hidden")))
@interface MTLPipelineBufferDescriptorArrayInternal : MTLPipelineBufferDescriptorArray
{
    MTLPipelineBufferDescriptorInternal *_descriptors[31];
}

- (id)_descriptorAtIndex:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end

