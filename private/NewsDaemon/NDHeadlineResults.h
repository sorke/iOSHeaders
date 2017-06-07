//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsDaemon/NSCopying-Protocol.h>
#import <NewsDaemon/NSSecureCoding-Protocol.h>

@class NDHeadlineResultsMetadata, NSDate, NSDictionary, NSOrderedSet;

@interface NDHeadlineResults : NSObject <NSSecureCoding, NSCopying>
{
    NDHeadlineResultsMetadata *_metadata;
    NSOrderedSet *_sections;
    NSDictionary *_assetFileURLsByAssetID;
    NSDate *_expirationDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSDictionary *assetFileURLsByAssetID; // @synthesize assetFileURLsByAssetID=_assetFileURLsByAssetID;
@property(readonly, copy, nonatomic) NSOrderedSet *sections; // @synthesize sections=_sections;
@property(readonly, copy, nonatomic) NDHeadlineResultsMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadata:(id)arg1 sections:(id)arg2 assetFileURLsByAssetID:(id)arg3 expirationDate:(id)arg4;

@end
