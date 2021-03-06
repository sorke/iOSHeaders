//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, WebBookmark;

__attribute__((visibility("hidden")))
@interface WBDuplicateBookmarkGroup : NSObject
{
    NSMutableArray *_dupicateBookmarks;
    NSMutableArray *_dupicateBookmarksToKeep;
    _Bool _foundDuplicates;
    WebBookmark *_originalBookmark;
}

@property(readonly, nonatomic) _Bool foundDuplicates; // @synthesize foundDuplicates=_foundDuplicates;
@property(readonly, nonatomic) WebBookmark *originalBookmark; // @synthesize originalBookmark=_originalBookmark;
- (void).cxx_destruct;
- (void)removeAllDuplicates;
- (void)exchangeOriginalBookmarkWithBookmark:(id)arg1;
- (void)addDuplicateBookmarkToKeep:(id)arg1;
- (void)addDuplicateBookmark:(id)arg1 replaceOriginal:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *duplicatesToKeep;
@property(readonly, nonatomic) NSArray *duplicates;
- (id)initWithOriginalBookmark:(id)arg1;

@end

