//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPSKernel.h"

@class MPSExternalCNNBinary;

@interface MPSCNNBinaryKernel : MPSKernel
{
    CDStruct_d6af7fc0 _primaryOffset;
    CDStruct_d6af7fc0 _secondaryOffset;
    CDStruct_1e3be3a8 _clipRect;
    unsigned long long _destinationFeatureChannelOffset;
    unsigned long long _primarySourceFeatureChannelOffset;
    unsigned long long _secondarySourceFeatureChannelOffset;
    unsigned long long _primarySourceFeatureChannelMaxCount;
    unsigned long long _secondarySourceFeatureChannelMaxCount;
    unsigned long long _primaryKernelWidth;
    unsigned long long _primaryKernelHeight;
    unsigned long long _secondaryKernelWidth;
    unsigned long long _secondaryKernelHeight;
    unsigned long long _primaryStrideInPixelsX;
    unsigned long long _primaryStrideInPixelsY;
    unsigned long long _secondaryStrideInPixelsX;
    unsigned long long _secondaryStrideInPixelsY;
    unsigned long long _primaryDilationRateX;
    unsigned long long _primaryDilationRateY;
    unsigned long long _secondaryDilationRateX;
    unsigned long long _secondaryDilationRateY;
    _Bool _isBackwards;
    _Bool _supportsBroadcasting;
    id <MPSNNPadding> _padding;
    unsigned long long _primaryEdgeMode;
    unsigned long long _secondaryEdgeMode;
    int _checkFlags;
    CDUnknownFunctionPointerType _encode;
    CDUnknownFunctionPointerType _batchEncode;
    void *_encodeData;
    MPSExternalCNNBinary *_plugin;
    id <MPSImageAllocator> _destinationImageAllocator;
}

@property(retain, nonatomic) id <MPSImageAllocator> destinationImageAllocator; // @synthesize destinationImageAllocator=_destinationImageAllocator;
@property(retain, nonatomic) id <MPSNNPadding> padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) _Bool isBackwards; // @synthesize isBackwards=_isBackwards;
@property(readonly, nonatomic) unsigned long long secondaryDilationRateY; // @synthesize secondaryDilationRateY=_secondaryDilationRateY;
@property(readonly, nonatomic) unsigned long long secondaryDilationRateX; // @synthesize secondaryDilationRateX=_secondaryDilationRateX;
@property(readonly, nonatomic) unsigned long long primaryDilationRateY; // @synthesize primaryDilationRateY=_primaryDilationRateY;
@property(readonly, nonatomic) unsigned long long primaryDilationRateX; // @synthesize primaryDilationRateX=_primaryDilationRateX;
@property(nonatomic) unsigned long long secondaryStrideInPixelsY; // @synthesize secondaryStrideInPixelsY=_secondaryStrideInPixelsY;
@property(nonatomic) unsigned long long secondaryStrideInPixelsX; // @synthesize secondaryStrideInPixelsX=_secondaryStrideInPixelsX;
@property(nonatomic) unsigned long long primaryStrideInPixelsY; // @synthesize primaryStrideInPixelsY=_primaryStrideInPixelsY;
@property(nonatomic) unsigned long long primaryStrideInPixelsX; // @synthesize primaryStrideInPixelsX=_primaryStrideInPixelsX;
@property(readonly, nonatomic) unsigned long long secondaryKernelHeight; // @synthesize secondaryKernelHeight=_secondaryKernelHeight;
@property(readonly, nonatomic) unsigned long long secondaryKernelWidth; // @synthesize secondaryKernelWidth=_secondaryKernelWidth;
@property(readonly, nonatomic) unsigned long long primaryKernelHeight; // @synthesize primaryKernelHeight=_primaryKernelHeight;
@property(readonly, nonatomic) unsigned long long primaryKernelWidth; // @synthesize primaryKernelWidth=_primaryKernelWidth;
@property(nonatomic) unsigned long long secondarySourceFeatureChannelMaxCount; // @synthesize secondarySourceFeatureChannelMaxCount=_secondarySourceFeatureChannelMaxCount;
@property(nonatomic) unsigned long long secondarySourceFeatureChannelOffset; // @synthesize secondarySourceFeatureChannelOffset=_secondarySourceFeatureChannelOffset;
@property(nonatomic) unsigned long long primarySourceFeatureChannelMaxCount; // @synthesize primarySourceFeatureChannelMaxCount=_primarySourceFeatureChannelMaxCount;
@property(nonatomic) unsigned long long primarySourceFeatureChannelOffset; // @synthesize primarySourceFeatureChannelOffset=_primarySourceFeatureChannelOffset;
@property(nonatomic) unsigned long long destinationFeatureChannelOffset; // @synthesize destinationFeatureChannelOffset=_destinationFeatureChannelOffset;
@property(nonatomic) unsigned long long secondaryEdgeMode; // @synthesize secondaryEdgeMode=_secondaryEdgeMode;
@property(nonatomic) unsigned long long primaryEdgeMode; // @synthesize primaryEdgeMode=_primaryEdgeMode;
@property(nonatomic) CDStruct_1e3be3a8 clipRect; // @synthesize clipRect=_clipRect;
@property(nonatomic) CDStruct_d6af7fc0 secondaryOffset; // @synthesize secondaryOffset=_secondaryOffset;
@property(nonatomic) CDStruct_d6af7fc0 primaryOffset; // @synthesize primaryOffset=_primaryOffset;
- (unsigned long long)maxBatchSize;
- (void)copyToBinaryGradientState:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 destinationImage:(id)arg5;
- (struct NSArray *)temporaryResultStateBatchForCommandBuffer:(id)arg1 primaryImage:(struct NSArray *)arg2 secondaryImage:(struct NSArray *)arg3 sourceStates:(id)arg4 destinationImage:(struct NSArray *)arg5;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 destinationImage:(id)arg5;
- (struct NSArray *)resultStateBatchForPrimaryImage:(struct NSArray *)arg1 secondaryImage:(struct NSArray *)arg2 sourceStates:(id)arg3 destinationImage:(struct NSArray *)arg4;
- (id)resultStateForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (_Bool)appendBatchBarrier;
- (_Bool)isResultStateReusedAcrossBatch;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(CDStruct_d6af7fc0 *)arg4 secondaryOffset:(CDStruct_d6af7fc0 *)arg5 kernelOffset:(CDStruct_d6af7fc0 *)arg6;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2;
- (void)dealloc;
- (void)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(struct NSArray *)arg2 secondaryImages:(struct NSArray *)arg3 inStates:(struct NSArray *)arg4 destinationImages:(struct NSArray *)arg5;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(struct NSArray *)arg2 secondaryImages:(struct NSArray *)arg3 destinationStates:(struct NSArray **)arg4 destinationStateIsTemporary:(_Bool)arg5;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(struct NSArray *)arg2 secondaryImages:(struct NSArray *)arg3 inStates:(struct NSArray *)arg4;
- (void)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(struct NSArray *)arg2 secondaryImages:(struct NSArray *)arg3 destinationImages:(struct NSArray *)arg4;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(struct NSArray *)arg2 secondaryImages:(struct NSArray *)arg3;
- (void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 inState:(id)arg4 destinationImage:(id)arg5;
- (id)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationState:(id *)arg4 destinationStateIsTemporary:(_Bool)arg5;
- (id)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 inState:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationImage:(id)arg4;
- (id)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3;
- (struct MPSRegion)secondarySourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (struct MPSRegion)primarySourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool isStateModified;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end

