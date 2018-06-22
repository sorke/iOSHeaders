//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, TUSearchController;

__attribute__((visibility("hidden")))
@interface TUAutocompleteResultPartitioner : NSObject
{
    TUSearchController *_searchController;
    NSMutableArray *_normalResultsArray;
    NSMutableArray *_foundInMailResultsArray;
    NSMutableArray *_foundOnServersResultsArray;
}

+ (_Bool)sourceTypeIsFoundOnServers:(unsigned long long)arg1;
+ (_Bool)sourceTypeIsFoundInMail:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableArray *foundOnServersResultsArray; // @synthesize foundOnServersResultsArray=_foundOnServersResultsArray;
@property(retain, nonatomic) NSMutableArray *foundInMailResultsArray; // @synthesize foundInMailResultsArray=_foundInMailResultsArray;
@property(retain, nonatomic) NSMutableArray *normalResultsArray; // @synthesize normalResultsArray=_normalResultsArray;
@property __weak TUSearchController *searchController; // @synthesize searchController=_searchController;
- (void).cxx_destruct;
- (void)addResult:(id)arg1;
- (id)init;
- (id)searchResults;

@end

