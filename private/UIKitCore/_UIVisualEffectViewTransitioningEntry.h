//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UIVisualEffectViewEntry.h>

__attribute__((visibility("hidden")))
@interface _UIVisualEffectViewTransitioningEntry : _UIVisualEffectViewEntry
{
    _UIVisualEffectViewEntry *_sourceEntry;
    _UIVisualEffectViewEntry *_destinationEntry;
}

- (void).cxx_destruct;
- (id)description;
- (id)copyForTransitionOut;
- (id)copyForTransitionToEffect:(id)arg1;
- (_Bool)canTransitionToEffect:(id)arg1;
- (_Bool)hasTransform;
- (_Bool)shouldManageCornerRadius;
- (_Bool)isSameTypeOfEffect:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)addEffectToView:(id)arg1;
- (_Bool)shouldAnimateProperty:(id)arg1;
- (id)initWithSourceEntry:(id)arg1 destinationEntry:(id)arg2;

@end

