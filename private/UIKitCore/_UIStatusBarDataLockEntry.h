//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataLockEntry : _UIStatusBarDataEntry
{
    long long _unlockFailureCount;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long unlockFailureCount; // @synthesize unlockFailureCount=_unlockFailureCount;
- (id)_ui_descriptionBuilder;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;

@end

