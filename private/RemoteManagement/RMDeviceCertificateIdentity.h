//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RemoteManagement/RMDeviceIdentity.h>

@interface RMDeviceCertificateIdentity : RMDeviceIdentity
{
    struct __SecIdentity *_identity;
}

@property(nonatomic) struct __SecIdentity *identity; // @synthesize identity=_identity;
- (void)deviceIdentityWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)validateIdentityForServer:(struct __SecTrust *)arg1;
- (id)initWithIdentity:(id)arg1;

@end

