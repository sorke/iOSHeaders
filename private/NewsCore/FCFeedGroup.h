//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCFeedElement.h"
#import "FCFeedGroupOutlining.h"

@class FCColor, FCColorGradient, FCFeedDescriptor, FCFeedEdition, NSArray, NSDate, NSString, NTPBDiscoverMoreVideosInfo;

@interface FCFeedGroup : NSObject <FCFeedElement, FCFeedGroupOutlining>
{
    _Bool _isFirstFromEdition;
    NSString *_identifier;
    NSString *_sourceIdentifier;
    FCColor *_titleColor;
    FCColorGradient *_backgroundGradient;
    NSDate *_creationDate;
    unsigned long long _options;
    unsigned long long _mergeID;
    long long _groupType;
    NSArray *_elements;
    NSArray *_headlines;
    NSString *_title;
    NSString *_subtitle;
    NTPBDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
    NSArray *_videoPlaylistHeadlines;
    FCFeedDescriptor *_L2FeedDescriptor;
    FCFeedEdition *_edition;
}

+ (id)_pbHeadlinesFromHeadlines:(id)arg1 sharedStringIndex:(id)arg2;
+ (id)pbGroupFromGroup:(id)arg1 sharedStringIndex:(id)arg2;
@property(readonly, nonatomic) _Bool isFirstFromEdition; // @synthesize isFirstFromEdition=_isFirstFromEdition;
@property(readonly, copy, nonatomic) FCFeedEdition *edition; // @synthesize edition=_edition;
@property(readonly, copy, nonatomic) FCFeedDescriptor *L2FeedDescriptor; // @synthesize L2FeedDescriptor=_L2FeedDescriptor;
@property(readonly, copy, nonatomic) NSArray *videoPlaylistHeadlines; // @synthesize videoPlaylistHeadlines=_videoPlaylistHeadlines;
@property(readonly, copy, nonatomic) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo; // @synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSArray *headlines; // @synthesize headlines=_headlines;
@property(readonly, copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(readonly, nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) unsigned long long mergeID; // @synthesize mergeID=_mergeID;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) FCColorGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(readonly, copy, nonatomic) FCColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isGap;
@property(readonly, nonatomic) long long feedElementType;
@property(readonly, copy, nonatomic) NSString *backingTagID;
@property(readonly, nonatomic) _Bool shouldPresentCollapsed;
@property(readonly, nonatomic) _Bool hasStrictHeadlineOrder;
@property(readonly, nonatomic) _Bool canBeExtended;
- (id)copyWithEdition:(id)arg1 isFirst:(_Bool)arg2;
- (id)copyWithMergeID:(unsigned long long)arg1;
- (id)copyWithElements:(id)arg1;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 elements:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleColor:(id)arg5 backgroundGradient:(id)arg6 discoverMoreVideosInfo:(id)arg7 videoPlaylistHeadlines:(id)arg8 L2FeedDescriptor:(id)arg9 elements:(id)arg10 options:(unsigned long long)arg11;
- (id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 title:(id)arg4 subtitle:(id)arg5 titleColor:(id)arg6 backgroundGradient:(id)arg7 discoverMoreVideosInfo:(id)arg8 videoPlaylistHeadlines:(id)arg9 L2FeedDescriptor:(id)arg10 elements:(id)arg11 options:(unsigned long long)arg12;
- (id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 creationDate:(id)arg4 title:(id)arg5 subtitle:(id)arg6 titleColor:(id)arg7 backgroundGradient:(id)arg8 discoverMoreVideosInfo:(id)arg9 videoPlaylistHeadlines:(id)arg10 L2FeedDescriptor:(id)arg11 edition:(id)arg12 isFirstFromEdition:(_Bool)arg13 elements:(id)arg14 options:(unsigned long long)arg15 mergeID:(unsigned long long)arg16;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

