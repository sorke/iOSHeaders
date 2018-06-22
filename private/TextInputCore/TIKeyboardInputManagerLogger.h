//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TIKeyboardInputManagerLogging.h"

@class NSString, TITypologyLog, TITypologyStatistic;

@interface TIKeyboardInputManagerLogger : NSObject <TIKeyboardInputManagerLogging>
{
    NSString *_inputModeIdentifier;
    TITypologyLog *_typologyLog;
    TITypologyStatistic *_typologyStatistic;
}

+ (void)pruneTypologyLogsToMaxNumBytes:(long long)arg1 satisfyingPredicate:(CDUnknownBlockType)arg2;
+ (_Bool)shouldSubmitStructuredDataReportForTypologyLog:(id)arg1;
+ (id)generateStructuredDataReportForTypologyLog:(id)arg1;
+ (void)submitStructuredDataReportForTypologyLog:(id)arg1;
+ (void)submitAggregrateDictionaryReport:(id)arg1 inputModeIdentifier:(id)arg2;
+ (void)writeHumanReadableTraceForTypologyLog:(id)arg1;
+ (id)writePropertyList:(id)arg1 withFilename:(id)arg2;
+ (id)writeToFileWithTypologyLog:(id)arg1;
@property(retain, nonatomic) TITypologyStatistic *typologyStatistic; // @synthesize typologyStatistic=_typologyStatistic;
@property(retain, nonatomic) TITypologyLog *typologyLog; // @synthesize typologyLog=_typologyLog;
@property(retain, nonatomic) NSString *inputModeIdentifier; // @synthesize inputModeIdentifier=_inputModeIdentifier;
- (void).cxx_destruct;
- (void)logReceivedLastAcceptedCandidateCorrected;
- (void)logReceivedCandidateRejected:(id)arg1;
- (void)logReceivedTextAccepted:(id)arg1;
- (void)logReceivedSetOriginalInput:(id)arg1;
- (void)logKeyboardConfig:(id)arg1 forAdjustedPhraseBoundaryInForwardDirection:(_Bool)arg2 granularity:(int)arg3 keyboardState:(id)arg4;
- (void)logReceivedSkipHitTestForTouchEvent:(id)arg1 forKeyboardState:(id)arg2;
- (void)logHitKeyCode:(long long)arg1 forTouchEvent:(id)arg2 keyboardState:(id)arg3;
- (void)logRefinements:(id)arg1 forCandidate:(id)arg2 keyboardState:(id)arg3;
- (void)logReplacements:(id)arg1 forString:(id)arg2 keyLayout:(id)arg3;
- (void)logKeyboardConfig:(id)arg1 textToCommit:(id)arg2 forAcceptedCandidate:(id)arg3 keyboardState:(id)arg4;
- (void)logCandidateResultSet:(id)arg1 forKeyboardState:(id)arg2;
- (void)logAutocorrections:(id)arg1 forKeyboardState:(id)arg2 requestToken:(id)arg3;
- (void)logKeyboardOutput:(id)arg1 keyboardConfiguration:(id)arg2 forKeyboardInput:(id)arg3 keyboardState:(id)arg4;
- (void)logKeyboardConfig:(id)arg1 forSyncToKeyboardState:(id)arg2;
- (void)logToHumanReadableTrace:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)backgroundWriteLogsAndSubmitReport;
- (id)writeToFile;
- (void)disableTypologyLogIfNecessaryForKeyboardState:(id)arg1;
- (_Bool)shouldWriteToTypologyLogForKeyboardState:(id)arg1;
- (_Bool)shouldWriteToSyslogForKeyboardState:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

