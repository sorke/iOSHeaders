//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL;

@interface RCRequestInfo : NSObject
{
    NSString *_requestKey;
    NSString *_responseKey;
    NSURL *_fallbackURL;
    unsigned long long _requestType;
    NSArray *_additionalChangeTags;
}

@property(readonly, nonatomic) NSArray *additionalChangeTags; // @synthesize additionalChangeTags=_additionalChangeTags;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(readonly, copy, nonatomic) NSString *responseKey; // @synthesize responseKey=_responseKey;
@property(readonly, copy, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 requestType:(unsigned long long)arg4 additionalChangeTags:(id)arg5;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3;

@end

