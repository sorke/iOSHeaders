//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGDefaultCollectionTitleGenerator.h>

@class NSString;

@interface PGAggregationCollectionTitleGenerator : PGDefaultCollectionTitleGenerator
{
    NSString *_aggregationLabel;
}

@property(readonly, nonatomic) NSString *aggregationLabel; // @synthesize aggregationLabel=_aggregationLabel;
- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithCollection:(id)arg1 aggregationLabel:(id)arg2;

@end

