//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AAUIAchievementResourceProvider, AAUIBadgeView, NSCache, NSObject<OS_dispatch_queue>;

@interface AAUIBadgeImageFactory : NSObject
{
    NSCache *_cache;
    AAUIAchievementResourceProvider *_resourceProvider;
    AAUIBadgeView *_earnedBadgeView;
    AAUIBadgeView *_unearnedBadgeView;
    NSObject<OS_dispatch_queue> *_imageCreationQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageCreationQueue; // @synthesize imageCreationQueue=_imageCreationQueue;
@property(retain, nonatomic) AAUIBadgeView *unearnedBadgeView; // @synthesize unearnedBadgeView=_unearnedBadgeView;
@property(retain, nonatomic) AAUIBadgeView *earnedBadgeView; // @synthesize earnedBadgeView=_earnedBadgeView;
@property(retain, nonatomic) AAUIAchievementResourceProvider *resourceProvider; // @synthesize resourceProvider=_resourceProvider;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)generateImageForConfiguration:(id)arg1 size:(struct CGSize)arg2 unearned:(_Bool)arg3;
- (id)thumbnailImageForAchievement:(id)arg1 size:(struct CGSize)arg2;
- (id)init;

@end

