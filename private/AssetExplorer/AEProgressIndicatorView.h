//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLRoundProgressView.h"

@class NSProgress;

__attribute__((visibility("hidden")))
@interface AEProgressIndicatorView : PLRoundProgressView
{
    NSProgress *__progress;
}

@property(readonly, nonatomic) NSProgress *_progress; // @synthesize _progress=__progress;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 progress:(id)arg2;

@end

