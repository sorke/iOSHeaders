//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoGravityProviding.h"

@class NSString;

@interface SVVideoGravityProvider : NSObject <SVVideoGravityProviding>
{
    CDUnknownBlockType _changeBlock;
    NSString *_videoGravity;
    NSString *_landscapeVideoGravity;
    NSString *_portraitVideoGravity;
    id <SVVideoPresentationSizeObserving> _presentationSizeObserver;
    id <SVVideoViewControllerSizeObserving> _videoViewControllerSizeObserver;
}

@property(readonly, nonatomic) id <SVVideoViewControllerSizeObserving> videoViewControllerSizeObserver; // @synthesize videoViewControllerSizeObserver=_videoViewControllerSizeObserver;
@property(readonly, nonatomic) id <SVVideoPresentationSizeObserving> presentationSizeObserver; // @synthesize presentationSizeObserver=_presentationSizeObserver;
@property(copy, nonatomic) NSString *portraitVideoGravity; // @synthesize portraitVideoGravity=_portraitVideoGravity;
@property(copy, nonatomic) NSString *landscapeVideoGravity; // @synthesize landscapeVideoGravity=_landscapeVideoGravity;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock=_changeBlock;
- (void).cxx_destruct;
- (void)updateVideoGravityWithPresentationSize:(struct CGSize)arg1 videoViewControllerSize:(struct CGSize)arg2;
- (id)initWithPresentationSizeObserver:(id)arg1 videoViewControllerSizeObserver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

