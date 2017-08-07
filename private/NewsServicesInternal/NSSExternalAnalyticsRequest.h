//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NSSecureCoding-Protocol.h>

@class NSSExternalAnalyticsRequestMetadata, NSURL;

@interface NSSExternalAnalyticsRequest : NSObject <NSSecureCoding>
{
    NSURL *_URL;
    NSSExternalAnalyticsRequestMetadata *_metadata;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSSExternalAnalyticsRequestMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 metadata:(id)arg2;

@end
