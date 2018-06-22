//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SVVideoAccessoryBarItemTransitionContext;

@interface SVVideoAccessoryBarItemTransition : NSObject
{
    id <SVAccessoryItem> _fromItem;
    id <SVAccessoryItem> _toItem;
    id <SVVideoAccessoryItemTransitioning> _transitionCoordinator;
    SVVideoAccessoryBarItemTransitionContext *_context;
}

@property(retain, nonatomic) SVVideoAccessoryBarItemTransitionContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) id <SVVideoAccessoryItemTransitioning> transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(readonly, nonatomic) id <SVAccessoryItem> toItem; // @synthesize toItem=_toItem;
@property(readonly, nonatomic) id <SVAccessoryItem> fromItem; // @synthesize fromItem=_fromItem;
- (void).cxx_destruct;
- (void)cancel;
- (void)performTransitionOnContainerView:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithFromItem:(id)arg1 toItem:(id)arg2 transitionCoordinator:(id)arg3;

@end

