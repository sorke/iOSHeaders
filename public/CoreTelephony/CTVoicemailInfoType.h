//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface CTVoicemailInfoType : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _available;
    _Bool _isNetworkOriginated;
    _Bool _isVoiceMailMWI;
    NSString *_url;
    NSNumber *_count;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isVoiceMailMWI; // @synthesize isVoiceMailMWI=_isVoiceMailMWI;
@property(nonatomic) _Bool isNetworkOriginated; // @synthesize isNetworkOriginated=_isNetworkOriginated;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(nonatomic) _Bool available; // @synthesize available=_available;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCTVoicemailInfoType:(id)arg1;
- (id)initWithParam:(id)arg1 available:(_Bool)arg2 count:(id)arg3 isNetworkOriginated:(_Bool)arg4;
- (id)init;

@end

