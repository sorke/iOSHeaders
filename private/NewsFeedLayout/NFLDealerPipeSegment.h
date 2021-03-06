//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NFLPipeSegment.h"

@class NFLSubBatchLayout;

@interface NFLDealerPipeSegment : NSObject <NFLPipeSegment>
{
    unsigned long long _pipeSegmentType;
    NFLSubBatchLayout *_subBatchLayout;
    CDUnknownBlockType _segmentTypeDescriptionProvider;
}

@property(copy, nonatomic) CDUnknownBlockType segmentTypeDescriptionProvider; // @synthesize segmentTypeDescriptionProvider=_segmentTypeDescriptionProvider;
@property(retain, nonatomic) NFLSubBatchLayout *subBatchLayout; // @synthesize subBatchLayout=_subBatchLayout;
@property(nonatomic) unsigned long long pipeSegmentType; // @synthesize pipeSegmentType=_pipeSegmentType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSegmentType:(unsigned long long)arg1 subBatchLayout:(id)arg2 segmentTypeDescriptionProvider:(CDUnknownBlockType)arg3;
- (id)init;

@end

