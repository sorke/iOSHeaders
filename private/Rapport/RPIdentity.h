//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDate, NSString;

@interface RPIdentity : NSObject <NSSecureCoding>
{
    _Bool _present;
    int _type;
    NSDate *_dateAdded;
    NSDate *_dateRemoved;
    NSData *_deviceIRKData;
    NSData *_edPKData;
    NSData *_edSKData;
    NSString *_identifier;
    NSString *_idsDeviceID;
    NSString *_model;
    NSString *_name;
    NSDate *_dateAcknowledged;
    NSDate *_dateRequested;
}

+ (_Bool)supportsSecureCoding;
+ (id)nullIdentity;
@property(nonatomic) _Bool present; // @synthesize present=_present;
@property(copy, nonatomic) NSDate *dateRequested; // @synthesize dateRequested=_dateRequested;
@property(copy, nonatomic) NSDate *dateAcknowledged; // @synthesize dateAcknowledged=_dateAcknowledged;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *idsDeviceID; // @synthesize idsDeviceID=_idsDeviceID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSData *edSKData; // @synthesize edSKData=_edSKData;
@property(copy, nonatomic) NSData *edPKData; // @synthesize edPKData=_edPKData;
@property(copy, nonatomic) NSData *deviceIRKData; // @synthesize deviceIRKData=_deviceIRKData;
@property(copy, nonatomic) NSDate *dateRemoved; // @synthesize dateRemoved=_dateRemoved;
@property(copy, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
- (void).cxx_destruct;
- (_Bool)verifySignaturePtr:(const void *)arg1 signatureLen:(unsigned long long)arg2 dataPtr:(const void *)arg3 dataLen:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)verifySignature:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (_Bool)signDataPtr:(const void *)arg1 dataLen:(unsigned long long)arg2 signatureBytes:(unsigned char [64])arg3 error:(id *)arg4;
- (id)signData:(id)arg1 error:(id *)arg2;
- (_Bool)verifyAuthTagPtr:(const void *)arg1 authTagLen:(unsigned long long)arg2 dataPtr:(const void *)arg3 dataLen:(unsigned long long)arg4 type:(int)arg5 error:(id *)arg6;
- (_Bool)verifyAuthTag:(id)arg1 data:(id)arg2 type:(int)arg3 error:(id *)arg4;
- (id)authTagForData:(id)arg1 type:(int)arg2 error:(id *)arg3;
- (unsigned int)updateWithKeychainItem:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool sufficientForSelfIdentity;
@property(readonly, nonatomic) _Bool sufficientForFamilyIdentity;
- (unsigned int)compareWithRPIdentity:(id)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

