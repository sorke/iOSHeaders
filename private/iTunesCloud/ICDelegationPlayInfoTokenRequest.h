//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary, NSNumber;

@interface ICDelegationPlayInfoTokenRequest : NSObject <NSCopying>
{
    NSNumber *_DSID;
    NSData *_cloudCredentialsTokenData;
    NSData *_SICData;
}

@property(copy, nonatomic) NSData *SICData; // @synthesize SICData=_SICData;
@property(copy, nonatomic) NSData *cloudCredentialsTokenData; // @synthesize cloudCredentialsTokenData=_cloudCredentialsTokenData;
@property(copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSMutableDictionary *propertyListRepresentation;
- (id)initWithDSID:(id)arg1 SICData:(id)arg2;

@end
