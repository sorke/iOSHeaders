//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet, NTKInfinityDataSource, NTKInfinityListing;

@interface NTKInfinityController : NSObject
{
    _Bool _shouldForceActionForTap;
    NTKInfinityDataSource *_dataSource;
    unsigned long long _currentCharacter;
    NSMutableOrderedSet *_recentlyPlayedActions;
    NSMutableOrderedSet *_recentlyPlayedMagicMoments;
    long long _currentReviewListingIndex;
    unsigned long long _reviewDirection;
    NSArray *_reviewModeListings;
    unsigned long long _controllerMode;
    unsigned long long _currentStyle;
    NTKInfinityListing *_currentListing;
}

@property(retain, nonatomic) NTKInfinityListing *currentListing; // @synthesize currentListing=_currentListing;
@property(nonatomic) unsigned long long currentStyle; // @synthesize currentStyle=_currentStyle;
@property(nonatomic) unsigned long long controllerMode; // @synthesize controllerMode=_controllerMode;
- (void).cxx_destruct;
- (long long)currentReviewIndex;
- (unsigned long long)totalReviewListings;
- (id)_nextReviewListing;
- (void)setSequentialDirection:(unsigned long long)arg1;
- (unsigned long long)characterFromStyle:(unsigned long long)arg1;
- (id)complicationColorForStyle:(unsigned long long)arg1;
- (id)currentStyleComplicationColor;
- (id)currentComplicationColor;
- (id)posterImageForStyle:(unsigned long long)arg1;
- (id)currentPosterImage;
- (unsigned long long)_modeFromStyle:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)_maxRecentlyPlayedActions;
- (unsigned long long)_maxRecentlyPlayedMagicMoments;
- (void)startedPlayingListing:(id)arg1;
- (void)invalidateCurrentListing;
- (void)prepareUserTapAction;
- (id)_recentlyPlayedListings;
- (id)_listingsOfTypes:(id)arg1;
- (id)nextQueueListing;
- (id)_nextToyboxListing;
- (id)nextListing;
- (id)init;

@end
