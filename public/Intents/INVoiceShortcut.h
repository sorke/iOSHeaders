//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INIntent, INShortcut, INVoiceShortcutAction, NSString, NSUUID, NSUserActivity;

@interface INVoiceShortcut : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_identifier;
    NSString *_invocationPhrase;
    INShortcut *_shortcut;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) INShortcut *shortcut; // @synthesize shortcut=_shortcut;
@property(readonly, copy, nonatomic) NSString *invocationPhrase; // @synthesize invocationPhrase=_invocationPhrase;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)_initWithVCVoiceShortcut:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 invocationPhrase:(id)arg2 shortcut:(id)arg3;
@property(readonly, copy, nonatomic) INVoiceShortcutAction *action;
@property(readonly, nonatomic) NSUserActivity *userActivity;
@property(readonly, nonatomic) INIntent *intent;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithIntent:(id)arg1;

@end

