//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFEndSearchFeedback.h>

@class NSDictionary;

@interface SFEndNetworkSearchFeedback : SFEndSearchFeedback
{
    long long _responseSize;
    long long _statusCode;
    NSDictionary *_networkTimingData;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *networkTimingData; // @synthesize networkTimingData=_networkTimingData;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) long long responseSize; // @synthesize responseSize=_responseSize;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartSearch:(id)arg1 responseSize:(long long)arg2 statusCode:(long long)arg3 networkTimingData:(id)arg4;

@end
