//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>
#import <NewsToday/NSSecureCoding-Protocol.h>
#import <NewsToday/NTSectionDisplayDescriptor-Protocol.h>

@class NSOrderedSet, NSString, NSURL, NTPBSectionDisplayDescriptor, SFRankingFeedback;

@interface NTSection : NSObject <NTSectionDisplayDescriptor, NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_personalizationFeatureID;
    NSOrderedSet *_headlines;
    SFRankingFeedback *_rankingFeedback;
    NSString *_name;
    NTPBSectionDisplayDescriptor *_displayDescriptor;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NTPBSectionDisplayDescriptor *displayDescriptor; // @synthesize displayDescriptor=_displayDescriptor;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) SFRankingFeedback *rankingFeedback; // @synthesize rankingFeedback=_rankingFeedback;
@property(copy, nonatomic) NSOrderedSet *headlines; // @synthesize headlines=_headlines;
@property(readonly, copy, nonatomic) NSString *personalizationFeatureID; // @synthesize personalizationFeatureID=_personalizationFeatureID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *backgroundGradientColor;
@property(readonly, copy, nonatomic) NSURL *discoverMoreVideosURL;
@property(readonly, copy, nonatomic) NSString *discoverMoreVideosSubtitle;
@property(readonly, copy, nonatomic) NSString *discoverMoreVideosTitle;
@property(readonly, nonatomic) _Bool displaysAsVideoPlaylist;
@property(readonly, copy, nonatomic) NSString *nameColor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasEqualContents:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 personalizationFeatureID:(id)arg2 headlines:(id)arg3 rankingFeedback:(id)arg4 displayDescriptor:(id)arg5;
- (id)init;

@end
