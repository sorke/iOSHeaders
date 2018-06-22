//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarIndicatorItem.h>

@class _UIStatusBarBackgroundActivityView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBackgroundActivityItem : _UIStatusBarIndicatorItem
{
    _UIStatusBarBackgroundActivityView *_backgroundView;
    _UIStatusBarBackgroundActivityView *_combinedView;
}

+ (_Bool)shouldKeepIconVisibleForActivityType:(long long)arg1;
+ (id)combinedDisplayIdentifier;
+ (id)backgroundDisplayIdentifier;
@property(retain, nonatomic) _UIStatusBarBackgroundActivityView *combinedView; // @synthesize combinedView=_combinedView;
@property(retain, nonatomic) _UIStatusBarBackgroundActivityView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (_Bool)shouldUpdateIndicatorForIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (id)_backgroundColorForActivityType:(long long)arg1;
- (id)_imageNameForActivityType:(long long)arg1;
- (id)imageNameForUpdate:(id)arg1;
- (id)imageForUpdate:(id)arg1;
- (struct CGSize)_pillSizeAndBaselineOffset:(double *)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (void)setupDisplayItem:(id)arg1;
- (id)indicatorEntryKey;

@end

