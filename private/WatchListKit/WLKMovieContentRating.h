//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKContentRating.h>

@interface WLKMovieContentRating : WLKContentRating
{
    unsigned long long _MPAAContentRating;
}

+ (unsigned long long)_contentRatingForString:(id)arg1;
@property(readonly, nonatomic) unsigned long long MPAAContentRating; // @synthesize MPAAContentRating=_MPAAContentRating;
- (id)initWithDictionary:(id)arg1;

@end
