//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOUserSessionEntity, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSSet, NSString, PARBag, PRSRankingServerKnobs, SSPlistDataReader;

@interface PRSBagHandler : NSObject
{
    _Bool _waitingForLocation;
    NSObject<OS_dispatch_group> *_locationGroup;
    id _lockObject;
    NSMutableArray *_tasks;
    PARBag *_bag;
    NSObject<OS_dispatch_queue> *_bagQueue;
    _Bool _active;
    _Bool _enabled;
    _Bool _disableAsTypedSuggestion;
    _Bool _collectAnonymousData;
    _Bool _collectScores;
    _Bool _use2LayerRanking;
    _Bool _resourceMetadataNeedsWrite;
    id <PRSSessionController> _client;
    long long _status;
    double _searchRenderTimeout;
    double _suggestionsRenderTimeout;
    SSPlistDataReader *_cep_server_values;
    PRSRankingServerKnobs *_ranking_server_knobs;
    NSSet *_appBlacklist;
    NSArray *_enabledDomains;
    NSArray *_anonymousMetadataUndesiredBundleIDs;
    NSString *_fteLocString;
    NSString *_fteLearnMoreString;
    NSString *_fteContinueString;
    NSArray *_suggestionRankerModelParams;
    NSString *_lookupFirstUseDescription1;
    NSString *_lookupFirstUseDescription2;
    NSString *_lookupFirstUseLearnMore;
    GEOUserSessionEntity *_geoUserSessionEntity;
    NSMutableDictionary *_resourceMetadata;
    NSString *_resourceMetadataPath;
    NSObject<OS_dispatch_queue> *_resourceFetchQueue;
}

+ (id)sharedHandler;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resourceFetchQueue; // @synthesize resourceFetchQueue=_resourceFetchQueue;
@property(retain, nonatomic) NSString *resourceMetadataPath; // @synthesize resourceMetadataPath=_resourceMetadataPath;
@property(nonatomic) _Bool resourceMetadataNeedsWrite; // @synthesize resourceMetadataNeedsWrite=_resourceMetadataNeedsWrite;
@property(retain, nonatomic) NSMutableDictionary *resourceMetadata; // @synthesize resourceMetadata=_resourceMetadata;
@property(readonly) GEOUserSessionEntity *geoUserSessionEntity; // @synthesize geoUserSessionEntity=_geoUserSessionEntity;
@property(readonly, nonatomic) NSString *lookupFirstUseLearnMore; // @synthesize lookupFirstUseLearnMore=_lookupFirstUseLearnMore;
@property(readonly, nonatomic) NSString *lookupFirstUseDescription2; // @synthesize lookupFirstUseDescription2=_lookupFirstUseDescription2;
@property(readonly, nonatomic) NSString *lookupFirstUseDescription1; // @synthesize lookupFirstUseDescription1=_lookupFirstUseDescription1;
@property(retain, nonatomic) NSArray *suggestionRankerModelParams; // @synthesize suggestionRankerModelParams=_suggestionRankerModelParams;
@property(retain, nonatomic) NSString *fteContinueString; // @synthesize fteContinueString=_fteContinueString;
@property(retain, nonatomic) NSString *fteLearnMoreString; // @synthesize fteLearnMoreString=_fteLearnMoreString;
@property(retain, nonatomic) NSString *fteLocString; // @synthesize fteLocString=_fteLocString;
@property(nonatomic) _Bool use2LayerRanking; // @synthesize use2LayerRanking=_use2LayerRanking;
@property(retain, nonatomic) NSArray *anonymousMetadataUndesiredBundleIDs; // @synthesize anonymousMetadataUndesiredBundleIDs=_anonymousMetadataUndesiredBundleIDs;
@property(nonatomic) _Bool collectScores; // @synthesize collectScores=_collectScores;
@property(nonatomic) _Bool collectAnonymousData; // @synthesize collectAnonymousData=_collectAnonymousData;
@property(nonatomic) _Bool disableAsTypedSuggestion; // @synthesize disableAsTypedSuggestion=_disableAsTypedSuggestion;
@property(retain, nonatomic) NSArray *enabledDomains; // @synthesize enabledDomains=_enabledDomains;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSSet *appBlacklist; // @synthesize appBlacklist=_appBlacklist;
@property(retain) PRSRankingServerKnobs *ranking_server_knobs; // @synthesize ranking_server_knobs=_ranking_server_knobs;
@property(retain) SSPlistDataReader *cep_server_values; // @synthesize cep_server_values=_cep_server_values;
@property(nonatomic) double suggestionsRenderTimeout; // @synthesize suggestionsRenderTimeout=_suggestionsRenderTimeout;
@property(nonatomic) double searchRenderTimeout; // @synthesize searchRenderTimeout=_searchRenderTimeout;
@property(nonatomic) long long status; // @synthesize status=_status;
@property __weak id <PRSSessionController> client; // @synthesize client=_client;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)refreshGUID;
- (void)getFTEStringsWithReply:(CDUnknownBlockType)arg1;
- (void)triggerTaskWhenReady:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)updateFromSession:(id)arg1 bag:(id)arg2 forClient:(id)arg3 error:(id)arg4;
- (void)fetchModifiedResourceFromSession:(id)arg1 resource:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateWithBagDictionary:(id)arg1 error:(id)arg2;
- (_Bool)isLocaleSupported:(id)arg1;
- (id)supportedServices;
- (_Bool)sessionReady;
- (id)excludedDomainIdentifiers;
- (void)deactivate;
- (void)activate;
- (id)init;
- (_Bool)searchSupported:(_Bool)arg1;
- (id)userId;
- (id)applicationNameForUserAgent;
- (_Bool)isEnabled;
- (void)updateWithDictionary:(id)arg1;
- (void)parseCEPFromData:(id)arg1 forClient:(id)arg2;
- (void)_processQIFeatures:(id)arg1 forClient:(id)arg2;
- (id)_base64CEPDataNoCopyFromFeatureData:(id)arg1;

@end

