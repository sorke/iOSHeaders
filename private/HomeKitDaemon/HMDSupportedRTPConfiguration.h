//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import "HMDTLVCreateParse.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface HMDSupportedRTPConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    NSArray *_srtpCryptoSuites;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *srtpCryptoSuites; // @synthesize srtpCryptoSuites=_srtpCryptoSuites;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (_Bool)_parseFromTLVData;
- (id)initWithCryptoSuites:(id)arg1;

@end

