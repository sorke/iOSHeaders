//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol MapsSuggestionsSourceDelegateProxy <NSObject>
- (void)deleteEntriesData:(NSData *)arg1 sourceNameData:(NSData *)arg2 handler:(void (^)(void))arg3;
- (void)addOrUpdateSuggestionEntriesData:(NSData *)arg1 sourceNameData:(NSData *)arg2 deleteMissing:(_Bool)arg3 handler:(void (^)(void))arg4;
@end

