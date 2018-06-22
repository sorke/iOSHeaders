//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, NUAdBannerView;

@protocol NUAdProvider <NSObject>
- (void)bannerViewDidUnload:(NUAdBannerView *)arg1;
- (void)bannerViewDidLoad:(NUAdBannerView *)arg1;
- (void)videoPlaylistAdForContextProviders:(NSArray *)arg1 withCompletionBlock:(void (^)(NUAdBannerView *, NSURL *, unsigned long long, NSError *))arg2;
- (void)prerollForContextProviders:(NSArray *)arg1 withCompletionBlock:(void (^)(NUAdBannerView *, NSURL *, unsigned long long, NSError *))arg2;
- (void)interstitialViewForContextProviders:(NSArray *)arg1 contextProvidersWithKeys:(NSDictionary *)arg2 layoutOptions:(id <NUAdLayoutOptions>)arg3 withCompletionBlock:(void (^)(ADInterstitialAd *, NSError *))arg4;
- (void)interstitialViewForContextProviders:(NSArray *)arg1 layoutOptions:(id <NUAdLayoutOptions>)arg2 withCompletionBlock:(void (^)(ADInterstitialAd *, NSError *))arg3;
- (void)bannerViewForIdentifier:(NSString *)arg1 contextProviders:(NSArray *)arg2 layoutOptions:(id <NUAdLayoutOptions>)arg3 withCompletionBlock:(void (^)(NUAdBannerView *, NSError *))arg4;
@end

