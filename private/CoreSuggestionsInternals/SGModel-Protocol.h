//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/NSObject-Protocol.h>

@class PMLModelCovariates, PMLModelWeights;

@protocol SGModel <NSObject>
- (PMLModelCovariates *)features:(id)arg1;
- (PMLModelWeights *)fit:(id)arg1 toOutcome:(_Bool)arg2;
- (_Bool)predict:(id)arg1;
@end
