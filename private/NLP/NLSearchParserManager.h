//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NLSearchParserManager : NSObject
{
    void *_parser;
}

+ (id)defaultManager;
- (void)dealloc;
- (void)enumerateSearchSuggestions:(id)arg1 options:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)tokenizeAndEnumerateAttributedParsesForQuery:(id)arg1 options:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)attributedParseForDateRangeForOptions:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

