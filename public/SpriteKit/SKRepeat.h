//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKRepeat : SKAction
{
    struct SKCRepeat *_mycaction;
    SKAction *_repeatedAction;
}

+ (id)repeatActionForever:(id)arg1;
+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)subactions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

