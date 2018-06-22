//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, WBSCache, _SFSiteMetadataManager;

@interface _SFPasswordIconController : NSObject
{
    WBSCache *_iconCache;
    NSMutableDictionary *_domainsToExtractedBackgroundColors;
    NSMutableSet *_touchIconRequests;
    NSMutableDictionary *_domainToItems;
    NSMutableSet *_domainsThatHaveRequestedIcon;
    NSMutableArray *_blocksAwaitingHistoryItems;
    NSObject<OS_dispatch_queue> *_queue;
    _SFSiteMetadataManager *_metadataManager;
    NSMutableDictionary *_domainToAppID;
    NSMutableArray *_blocksAwaitingSharedWebCredentialsInformation;
    _Bool _initializedHistory;
    id <_SFPasswordIconControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <_SFPasswordIconControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_fetchAppIconForDomain:(id)arg1;
- (void)_populateDomainToAppIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestTouchIconForDomain:(id)arg1 iconDownloadingEnabled:(_Bool)arg2;
- (void)_fetchTouchIconForDomain:(id)arg1;
- (void)_checkForLocalVisitToDomain:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_populateDomainToItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_iconDidUpdateForDomain:(id)arg1;
- (id)backgroundColorForDomain:(id)arg1;
- (id)iconForDomain:(id)arg1;
- (void)clearIconFetchingState;
- (id)initWithMetadataManager:(id)arg1;

@end

