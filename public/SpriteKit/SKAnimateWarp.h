//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKAnimateWarp : SKAction
{
    struct SKCAnimateMesh *_mycaction;
}

+ (id)animateWithWarps:(id)arg1 times:(id)arg2 restore:(_Bool)arg3;
+ (id)animateWithWarps:(id)arg1 times:(id)arg2;
+ (id)warpTo:(id)arg1 duration:(double)arg2;
+ (_Bool)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

