//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PSIGroup;

@interface PSIRankedGroup : NSObject
{
    PSIGroup *_group;
    double _score;
}

@property(nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) PSIGroup *group; // @synthesize group=_group;
- (void)dealloc;
- (id)initWithGroup:(id)arg1 score:(double)arg2;

@end

