//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import "MapsSuggestionsSource.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface MapsSuggestionsFakeSource : MapsSuggestionsBaseSource <MapsSuggestionsSource>
{
    NSObject<OS_dispatch_queue> *_queue;
    struct NSArray *_entriesToPull;
    _Bool _isNowStopped;
    _Bool _sendCopies;
    unsigned long long _calledStart;
    unsigned long long _calledUpdateSuggestionEntries;
    unsigned long long _calledStop;
    unsigned long long _totalAdded;
    unsigned long long _totalDeleted;
    double _frequency;
}

+ (unsigned long long)disposition;
+ (_Bool)isEnabled;
@property _Bool sendCopies; // @synthesize sendCopies=_sendCopies;
@property double frequency; // @synthesize frequency=_frequency;
@property _Bool isNowStopped; // @synthesize isNowStopped=_isNowStopped;
@property unsigned long long totalDeleted; // @synthesize totalDeleted=_totalDeleted;
@property unsigned long long totalAdded; // @synthesize totalAdded=_totalAdded;
@property unsigned long long calledStop; // @synthesize calledStop=_calledStop;
@property unsigned long long calledUpdateSuggestionEntries; // @synthesize calledUpdateSuggestionEntries=_calledUpdateSuggestionEntries;
@property unsigned long long calledStart; // @synthesize calledStart=_calledStart;
- (void).cxx_destruct;
- (void)startDebugTest;
- (void)_allowTheDustToSettle;
- (void)setPullResponseEntries:(struct NSArray *)arg1;
- (void)pushDeletionOfEntries:(struct NSArray *)arg1;
- (void)pushEntries:(struct NSArray *)arg1;
- (void)pushAdditionOfEntries:(struct NSArray *)arg1 deleteMissing:(_Bool)arg2;
- (unsigned long long)_addEntries:(struct NSArray *)arg1 deleteMissing:(_Bool)arg2;
- (struct NSArray *)_copyEntriesIfNecessary:(struct NSArray *)arg1;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (void)stop;
- (void)start;
- (id)initWithDelegate:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

