//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray;

@interface MIDICIProfileState : NSObject <NSSecureCoding>
{
    NSArray *enabledProfiles;
    NSArray *disabledProfiles;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *disabledProfiles; // @synthesize disabledProfiles;
@property(readonly, nonatomic) NSArray *enabledProfiles; // @synthesize enabledProfiles;
- (void).cxx_destruct;
- (void)updateWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2;

@end

