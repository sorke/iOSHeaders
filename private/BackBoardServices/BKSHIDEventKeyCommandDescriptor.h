//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BackBoardServices/BKSHIDEventDescriptor.h>

@class NSString;

@interface BKSHIDEventKeyCommandDescriptor : BKSHIDEventDescriptor
{
    NSString *_input;
    long long _keyCode;
    long long _modifierFlags;
    NSString *_unmodifiedInput;
    NSString *_shiftModifiedInput;
    NSString *_commandModifiedInput;
}

+ (_Bool)_shouldMatchKeyCommandsWithKeyCode:(long long)arg1 gsKeyboard:(struct __GSKeyboard *)arg2;
+ (_Bool)_keyCodeIsModifierKey:(long long)arg1;
+ (id)keyCommandDescriptorForEvent:(struct __IOHIDEvent *)arg1 gsKeyboard:(struct __GSKeyboard *)arg2;
+ (id)descriptorWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2;
+ (id)descriptorWithInput:(id)arg1 modifierFlags:(long long)arg2;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *commandModifiedInput; // @synthesize commandModifiedInput=_commandModifiedInput;
@property(retain, nonatomic) NSString *shiftModifiedInput; // @synthesize shiftModifiedInput=_shiftModifiedInput;
@property(retain, nonatomic) NSString *unmodifiedInput; // @synthesize unmodifiedInput=_unmodifiedInput;
@property(readonly, nonatomic) long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(readonly, nonatomic) long long keyCode; // @synthesize keyCode=_keyCode;
@property(readonly, nonatomic) NSString *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (long long)describes:(id)arg1;
@property(readonly, nonatomic) _Bool isTextualDescriptor;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2;
- (id)initWithInput:(id)arg1 modifierFlags:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

