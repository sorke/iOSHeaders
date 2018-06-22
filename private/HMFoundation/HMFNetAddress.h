//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFNetAddressInternal, NSString;

@interface HMFNetAddress : HMFObject
{
    HMFNetAddressInternal *_internal;
}

+ (id)localAddress;
@property(readonly, nonatomic) HMFNetAddressInternal *internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *addressString;
@property(readonly, nonatomic) unsigned long long addressFamily;
- (id)attributeDescriptions;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithHostname:(id)arg1;
- (id)initWithSocketAddress:(const struct sockaddr *)arg1;
- (id)init;

@end

