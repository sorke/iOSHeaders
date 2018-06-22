//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Rapport/RPEndpoint.h>

#import "NSSecureCoding.h"

@class NSString;

@interface RPRemoteDisplayDevice : RPEndpoint <NSSecureCoding>
{
    unsigned int _flags;
    NSString *_persistentIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (unsigned int)updateWithEndpoint:(id)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

