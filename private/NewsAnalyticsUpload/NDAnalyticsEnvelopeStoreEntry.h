//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NDAnalyticsEnvelopeStoreEntry.h"

@class NSDate, NSString;

@interface NDAnalyticsEnvelopeStoreEntry : NSObject <NDAnalyticsEnvelopeStoreEntry>
{
    unsigned long long _submissionDateMillisecondsSince1970;
    int _envelopeContentType;
    NSString *_envelopeIdentifier;
}

@property(nonatomic) int envelopeContentType; // @synthesize envelopeContentType=_envelopeContentType;
@property(copy, nonatomic) NSString *envelopeIdentifier; // @synthesize envelopeIdentifier=_envelopeIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)stringRepresentation;
@property(copy, nonatomic) NSDate *envelopeSubmissionDate;
- (id)initWithStringRepresentation:(id)arg1;
- (id)init;

@end

