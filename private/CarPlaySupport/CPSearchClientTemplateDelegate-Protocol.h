//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTemplateDelegate.h"

@class CPListItem, CPSearchTemplate, NSString;

@protocol CPSearchClientTemplateDelegate <CPTemplateDelegate>
- (void)searchTemplateSearchButtonPressed:(CPSearchTemplate *)arg1;
- (void)searchTemplate:(CPSearchTemplate *)arg1 selectedResult:(CPListItem *)arg2 completionHandler:(void (^)(void))arg3;
- (void)searchTemplate:(CPSearchTemplate *)arg1 updateSearchResultsForSearchText:(NSString *)arg2 completionResults:(void (^)(NSArray *))arg3;
@end

