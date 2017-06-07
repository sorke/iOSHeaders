//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPCloudAccess-Protocol.h>

@class NSError, NSMutableDictionary, NSString, NSUUID;

@interface _MSPMockCloudAccess : NSObject <MSPCloudAccess>
{
    NSUUID *_identifier;
    NSMutableDictionary *_records;
    NSMutableDictionary *_deletedRecordNamesByRecordTypeSinceLastCachingCall;
    NSError *_retryableError;
    CDUnknownBlockType _availabilityDidChangeHandler;
    CDUnknownBlockType _contentsDidChangeHandler;
}

+ (id)_clientRegistrationRecordsDictionary;
+ (id)allAccesses;
+ (void)_beginTrackingAccess:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType contentsDidChangeHandler; // @synthesize contentsDidChangeHandler=_contentsDidChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType availabilityDidChangeHandler; // @synthesize availabilityDidChangeHandler=_availabilityDidChangeHandler;
- (void).cxx_destruct;
- (id)minimumStartDate;
- (id)retryDelayForError:(id)arg1;
- (_Bool)shouldRetryAfterError:(id)arg1 isCancelation:(_Bool *)arg2 afterDelay:(out id *)arg3 withResolvingRequest:(out id *)arg4;
- (void)checkForAvailabilityWithCallbackQueue:(id)arg1 schedulePreAvailabilityOperationHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)newSubscriptionRegistrationRequestWithSuccessHandler:(CDUnknownBlockType)arg1;
- (id)newModifyClientRegistrationRecordRequestWithEditedRecord:(id)arg1;
- (id)newFetchRequestForCurrentClientRegistrationRecordWithSuccessHandler:(CDUnknownBlockType)arg1;
- (id)newCachingFetchRequestForClientRegistrationRecordsWithSuccessHandler:(CDUnknownBlockType)arg1;
- (id)newCachingFetchChangesRequestWithSuccessHandler:(CDUnknownBlockType)arg1;
- (id)newModifyRequestForRecordsToModify:(id)arg1 namesOfRecordsToDelete:(id)arg2;
- (id)newQueryRequestForRecordsOfType:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 successHandler:(CDUnknownBlockType)arg4;
- (id)newFetchRequestForRecordsWithNames:(id)arg1 successHandler:(CDUnknownBlockType)arg2;
- (id)newReferenceToRecordWithName:(id)arg1;
- (id)newReferenceToRecord:(id)arg1;
- (id)newRecordOfType:(id)arg1 name:(id)arg2;
- (id)init;
- (void)setShouldAllowRetryForError:(id)arg1;
- (void)loadSnapshot;
- (id)snapshot;
- (id)snapshotURL;
- (void)setClientRegistrationIdentifier:(id)arg1;
- (void)networkReachabilityChanged:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
