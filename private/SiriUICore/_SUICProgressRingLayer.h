//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriUICore/_SUICRingLayer.h>

@interface _SUICProgressRingLayer : _SUICRingLayer
{
    _Bool _spinning;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool spinning; // @synthesize spinning=_spinning;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

