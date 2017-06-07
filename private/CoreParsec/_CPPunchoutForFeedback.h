//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface _CPPunchoutForFeedback : PBCodable <NSCopying>
{
    NSString *_actionTarget;
    NSString *_bundleIdentifier;
    NSString *_label;
    NSString *_name;
    NSMutableArray *_urls;
}

+ (Class)urlsType;
@property(retain, nonatomic) NSString *actionTarget; // @synthesize actionTarget=_actionTarget;
@property(retain, nonatomic) NSMutableArray *urls; // @synthesize urls=_urls;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasActionTarget;
- (id)urlsAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlsCount;
- (void)addUrls:(id)arg1;
- (void)clearUrls;
@property(readonly, nonatomic) _Bool hasLabel;
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
@property(readonly, nonatomic) _Bool hasName;

@end
