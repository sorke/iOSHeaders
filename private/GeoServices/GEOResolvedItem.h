//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOPDResolvedItem, NSString;

@interface GEOResolvedItem : NSObject
{
    GEOPDResolvedItem *_resolvedItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int itemType;
@property(readonly, nonatomic) _Bool hasResultIndex;
@property(readonly, nonatomic) unsigned long long resultIndex;
@property(readonly, nonatomic) NSString *extractedTerm;
- (id)initWithAutocompleteResolvedItem:(id)arg1;
- (id)initWithResolvedItem:(id)arg1;

@end

