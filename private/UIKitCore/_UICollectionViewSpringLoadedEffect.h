//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UISpringLoadedInteractionEffect.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionViewSpringLoadedEffect : NSObject <UISpringLoadedInteractionEffect>
{
    id <UISpringLoadedInteractionEffect> _blinkEffect;
}

@property(retain, nonatomic) id <UISpringLoadedInteractionEffect> blinkEffect; // @synthesize blinkEffect=_blinkEffect;
- (void).cxx_destruct;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

