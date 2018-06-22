//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SFResultSection, SFSearchResult, UIViewController<SearchUIResultShortLook>;

@protocol SearchUIResultViewDelegate <NSObject>

@optional
@property(readonly) NSString *currentQuery;
- (void)getUserActivityForResult:(SFSearchResult *)arg1 completionHandler:(void (^)(NSUserActivity *))arg2;
- (UIViewController<SearchUIResultShortLook> *)shortLookViewControllerForResult:(SFSearchResult *)arg1;
- (_Bool)hasShortLookViewControllerForResult:(SFSearchResult *)arg1;
- (void)didScrollPastBottomOfContent;
- (void)didUpdateContentScrolledOffScreenStatus:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didBeginScrollingResults;
- (void)didChangeExpansionStateForSection:(SFResultSection *)arg1 expanded:(_Bool)arg2;
- (_Bool)sectionShouldBeExpanded:(SFResultSection *)arg1;
- (void)clearResultsFromSection:(SFResultSection *)arg1;
- (_Bool)sectionIsClearable:(SFResultSection *)arg1;
- (void)didTapInEmptyRegion;
@end

