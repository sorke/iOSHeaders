//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectModernCompositedImpl : _UIVibrancyEffectImpl
{
    long long _compositingMode;
    NSString *_filterType;
    UIColor *_compositingColor;
}

- (void).cxx_destruct;
- (void)appendDescriptionTo:(id)arg1;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCompositingMode:(long long)arg1 compositingColor:(id)arg2;

@end

