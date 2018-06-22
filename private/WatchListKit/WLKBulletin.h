//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSString, NSURL;

@interface WLKBulletin : NSObject <NSSecureCoding>
{
    NSString *_bulletinType;
    long long _bulletinSource;
    NSString *_coalescingID;
    NSString *_threadID;
    NSDate *_notBeforeDate;
    NSDate *_notAfterDate;
    NSDate *_publishedDate;
    NSString *_title;
    NSString *_message;
    NSURL *_actionURL;
    NSDictionary *_bulletinMetrics;
    NSDictionary *_actionMetrics;
    NSDictionary *_userInfo;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSDictionary *actionMetrics; // @synthesize actionMetrics=_actionMetrics;
@property(copy, nonatomic) NSDictionary *bulletinMetrics; // @synthesize bulletinMetrics=_bulletinMetrics;
@property(copy, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSDate *publishedDate; // @synthesize publishedDate=_publishedDate;
@property(copy, nonatomic) NSDate *notAfterDate; // @synthesize notAfterDate=_notAfterDate;
@property(copy, nonatomic) NSDate *notBeforeDate; // @synthesize notBeforeDate=_notBeforeDate;
@property(copy, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(copy, nonatomic) NSString *coalescingID; // @synthesize coalescingID=_coalescingID;
@property(nonatomic) long long bulletinSource; // @synthesize bulletinSource=_bulletinSource;
@property(copy, nonatomic) NSString *bulletinType; // @synthesize bulletinType=_bulletinType;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)createBulletinRequest;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

