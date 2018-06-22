//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CADDatabaseProvider.h"

@class CADDatabaseInitializationOptions, CADOperationProxy, ClientIdentity, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSXPCConnection;

@interface ClientConnection : NSObject <CADDatabaseProvider>
{
    _Bool _allowedEntityTypesValid;
    long long _eventAccess;
    long long _reminderAccess;
    // Error parsing type: ^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B}, name: _database
    NSObject<OS_dispatch_queue> *_dbQueue;
    NSOperationQueue *_operations;
    NSMutableDictionary *_insertedObjects;
    NSMutableSet *_canceledRequests;
    NSObject<OS_dispatch_queue> *_canceledRequestsLock;
    _Bool _initializationOptionsSet;
    CADOperationProxy *_cadOperationProxy;
    id <ClientConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    ClientIdentity *_identity;
    NSXPCConnection *_xpcConnection;
    CADDatabaseInitializationOptions *_databaseInitializationOptions;
    id <CADAccountAccessHandler> _accountAccessHandler;
}

@property(readonly, nonatomic) id <CADAccountAccessHandler> accountAccessHandler; // @synthesize accountAccessHandler=_accountAccessHandler;
@property(readonly) _Bool initializationOptionsSet; // @synthesize initializationOptionsSet=_initializationOptionsSet;
@property(retain, nonatomic) CADDatabaseInitializationOptions *databaseInitializationOptions; // @synthesize databaseInitializationOptions=_databaseInitializationOptions;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) ClientIdentity *identity; // @synthesize identity=_identity;
// Error parsing type for property database:
// Property attributes: T^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B},N,V_database

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak id <ClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CADOperationProxy *cadOperationProxy; // @synthesize cadOperationProxy=_cadOperationProxy;
- (void).cxx_destruct;
- (_Bool)isCalendarItemManaged:(void *)arg1;
- (_Bool)isCalendarManaged:(void *)arg1;
- (_Bool)isStoreManaged:(void *)arg1;
- (_Bool)isCalendarItemRestricted:(void *)arg1 forAction:(unsigned long long)arg2;
- (_Bool)isCalendarRestricted:(void *)arg1 forAction:(unsigned long long)arg2;
- (_Bool)isStoreRestricted:(void *)arg1 forAction:(unsigned long long)arg2;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (_Bool)isObjectWithObjectIDAJunkEvent:(id)arg1;
- (_Bool)_hasTCCAccessToEntityWithObjectIDUsingDeepInspection:(id)arg1;
- (_Bool)hasTCCAccessToEntityWithObjectID:(id)arg1;
- (_Bool)reminderAccessGranted;
- (_Bool)eventAccessGranted;
- (void)clearCachedAuthorizationStatus;
- (void)_loadAccessPermissionsIfNeeded;
- (void)dumpState;
- (id)insertedObjects;
- (void)clearInsertedObjects;
- (void *)objectForKey:(id)arg1;
- (void)insertObject:(void *)arg1 key:(id)arg2;
- (id)operations;
- (void)addOperation:(id)arg1;
@property(readonly, nonatomic) NSString *changeTrackingID;
- (void)closeDatabase;
- (void)dealloc;
- (void)invalidate;
- (void)_initAccountAccessHandler;
- (id)initWithXPCConnection:(id)arg1;

@end

