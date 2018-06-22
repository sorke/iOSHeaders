//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenTimeUI/STGroupSpecifierProvider.h>

@class LSApplicationProxy, PSSpecifier, STUsageItem;

@interface STAppDetailsGroupSpecifierProvider : STGroupSpecifierProvider
{
    STUsageItem *_appUsageItem;
    LSApplicationProxy *_applicationProxy;
    PSSpecifier *_categorySpecifier;
}

@property(readonly, nonatomic) PSSpecifier *categorySpecifier; // @synthesize categorySpecifier=_categorySpecifier;
@property(readonly, nonatomic) LSApplicationProxy *applicationProxy; // @synthesize applicationProxy=_applicationProxy;
@property(readonly, nonatomic) STUsageItem *appUsageItem; // @synthesize appUsageItem=_appUsageItem;
- (void).cxx_destruct;
- (void)didFetchCategory:(id)arg1;
- (id)developer:(id)arg1;
- (id)ageRating:(id)arg1;
- (id)category:(id)arg1;
- (id)usageItem:(id)arg1;
- (id)initWithAppUsageItem:(id)arg1;

@end

