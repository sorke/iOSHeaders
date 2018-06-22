//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber;

@interface CTPriVersion : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_majorVersion;
    NSNumber *_minorVersion;
    NSNumber *_releaseVersion;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *releaseVersion; // @synthesize releaseVersion=_releaseVersion;
@property(retain, nonatomic) NSNumber *minorVersion; // @synthesize minorVersion=_minorVersion;
@property(retain, nonatomic) NSNumber *majorVersion; // @synthesize majorVersion=_majorVersion;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

