//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNFavoritesLogger.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockFavoritesLogger : NSObject <CNFavoritesLogger>
{
}

- (void)failedToWriteFavoritesToPath:(id)arg1 error:(id)arg2 simulateCrashReport:(_Bool)arg3;
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(id)arg1;
- (void)failedToWriteRemoteFavorites:(id)arg1;
- (void)failedToVerifyFavorites:(id)arg1 withPropertyListFavorites:(id)arg2 error:(id)arg3;
- (void)failedToConvertFavoritesToPropertyList:(id)arg1;
- (void)failedToReadFavoritesFromPath:(id)arg1 error:(id)arg2 simulateCrashReport:(_Bool)arg3;
- (void)failedToReadRemoteFavorites:(id)arg1;
- (void)finishedWritingFavoritesToPath:(id)arg1 entriesCount:(unsigned long long)arg2;
- (void)finishedWritingRemoteFavorites;
- (void)finishedReadingFavoritesFromPath:(id)arg1 entriesCount:(unsigned long long)arg2;
- (void)finishedReadingRemoteFavorites;
- (void)rematchingFavorites:(CDUnknownBlockType)arg1;
- (void)writingFavorites:(CDUnknownBlockType)arg1;
- (void)readingFavorites:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

