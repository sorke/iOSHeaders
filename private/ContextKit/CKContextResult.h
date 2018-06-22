//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSOrderedSet, NSString, NSURL;

@interface CKContextResult : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_title;
    NSString *_query;
    long long _minPrefix;
    NSURL *_url;
    NSString *_portraitId;
    NSString *_category;
    NSString *_debug;
    NSOrderedSet *_relatedItems;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSOrderedSet *relatedItems; // @synthesize relatedItems=_relatedItems;
@property(copy, nonatomic) NSString *debug; // @synthesize debug=_debug;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *portraitId; // @synthesize portraitId=_portraitId;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) long long minPrefix; // @synthesize minPrefix=_minPrefix;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 query:(id)arg2 url:(id)arg3 category:(id)arg4;

@end

