//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PARSessionDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSSet, NSString, PARSession, PRSFeedbackProxy, PRSRankingServerKnobs, SSPlistDataReader;

@interface PRSSearchSession : NSObject <PARSessionDelegate>
{
    NSMutableArray *_feedback;
    id <PRSSessionController> _client;
    double _lastQueryTime;
    NSString *_queryLanguage;
    NSDictionary *_sqfData;
    NSDictionary *_serverFeatures;
    NSString *_userAgent;
    _Bool _parsecFeedbackAllowed;
    PRSFeedbackProxy *_listener;
    _Bool _configuredSession;
    NSObject<OS_dispatch_queue> *_clientQueue;
    double _sessionStartTime;
    NSArray *_supportedServices;
    NSString *_modelL2Version;
    PARSession *_session;
    NSObject<OS_dispatch_source> *_quiescenceTimer;
    double _retryAfter;
}

@property double retryAfter; // @synthesize retryAfter=_retryAfter;
@property(retain) NSObject<OS_dispatch_source> *quiescenceTimer; // @synthesize quiescenceTimer=_quiescenceTimer;
@property _Bool configuredSession; // @synthesize configuredSession=_configuredSession;
@property(retain) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain) PARSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSString *modelL2Version; // @synthesize modelL2Version=_modelL2Version;
@property(readonly, nonatomic) NSArray *supportedServices; // @synthesize supportedServices=_supportedServices;
@property(nonatomic) double sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool disableAsTypedSuggestion;
@property(readonly, nonatomic) SSPlistDataReader *cannedCEPValues;
- (void)shrinkCaches;
@property(readonly, nonatomic) PRSRankingServerKnobs *rankingKnobs;
@property(readonly, nonatomic) SSPlistDataReader *cepDictionary;
@property(readonly, nonatomic) NSSet *appBlacklist;
- (void)pruneCache;
- (void)getCachedQueries:(id *)arg1 results:(id *)arg2 webSearch:(_Bool)arg3;
- (void)queryCompleted:(id)arg1;
@property(readonly, nonatomic) double suggestionsRenderTimeout;
@property(readonly, nonatomic) double searchRenderTimeout;
- (void)getFTEStringsWithReply:(CDUnknownBlockType)arg1;
- (id)queryWithString:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 handler:(id)arg4 queryIdent:(unsigned long long)arg5 whyQuery:(unsigned long long)arg6;
- (void)setQueryLanguage:(id)arg1;
- (void)setUserAgentString:(id)arg1;
- (void)setFeedbackStartTime;
- (void)deactivate;
- (void)activate;
- (void)warmup;
- (id)getQueryTaskForHandler:(id)arg1 scaleFactor:(double)arg2 whyQuery:(unsigned long long)arg3;
- (id)dictationQueryWithResponse:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 webSearch:(_Bool)arg4 handler:(id)arg5 queryIdent:(unsigned long long)arg6 whyQuery:(unsigned long long)arg7;
- (id)queryWithEngagedSuggestion:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 handler:(id)arg4 queryIdent:(unsigned long long)arg5 whyQuery:(unsigned long long)arg6;
- (id)queryWithString:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 scaleFactor:(double)arg4 handler:(id)arg5 queryIdent:(unsigned long long)arg6 whyQuery:(unsigned long long)arg7;
- (void)session:(id)arg1 didDeleteResource:(id)arg2;
- (void)session:(id)arg1 didDownloadResource:(id)arg2;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (id)feedbackListener;
- (void)setParsecFeedbackAllowed:(_Bool)arg1;
- (id)initWithClient:(id)arg1 clientQueue:(id)arg2;
- (id)initWithClient:(id)arg1 clientQueue:(id)arg2 config:(id)arg3 session:(id)arg4;
@property(readonly, nonatomic) id <SFFeedbackListener> listener;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

