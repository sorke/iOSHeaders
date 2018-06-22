//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXRecipientSearchDataSourceManager.h>

#import "MFContactsSearchConsumer.h"

@class MFContactsSearchManager, NSArray, NSDictionary, NSMutableArray, NSNumber, NSString, PXIDSAddressQueryController, PXMFRecipientSearchDataSource;

@interface PXMFRecipientSearchDataSourceManager : PXRecipientSearchDataSourceManager <MFContactsSearchConsumer>
{
    MFContactsSearchManager *_searchManager;
    NSNumber *_currentSearchTaskID;
    NSMutableArray *_autocompleteSearchResults;
    NSDictionary *_searchResultsByDestination;
    PXIDSAddressQueryController *_addressQueryController;
    NSArray *__searchResults;
}

@property(retain, nonatomic, setter=_setSearchResults:) NSArray *_searchResults; // @synthesize _searchResults=__searchResults;
- (void).cxx_destruct;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)_handleAddressQueryResults:(id)arg1 error:(id)arg2;
- (void)queryStringDidChange;
- (void)_createDataSource;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) PXMFRecipientSearchDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

