//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIKBScreenTraits;

__attribute__((visibility("hidden")))
@interface UIKeyboardKeyplaneTransformationContext : NSObject
{
    _Bool _usesScriptSwitch;
    NSString *_currentKeyplaneName;
    UIKBScreenTraits *_screenTraits;
}

@property(nonatomic) _Bool usesScriptSwitch; // @synthesize usesScriptSwitch=_usesScriptSwitch;
@property(retain, nonatomic) UIKBScreenTraits *screenTraits; // @synthesize screenTraits=_screenTraits;
@property(retain, nonatomic) NSString *currentKeyplaneName; // @synthesize currentKeyplaneName=_currentKeyplaneName;
- (void).cxx_destruct;

@end

