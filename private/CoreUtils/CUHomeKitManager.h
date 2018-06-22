//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMAccessoryDelegatePrivate.h"
#import "HMHomeDelegate.h"
#import "HMHomeDelegatePrivate.h"
#import "HMHomeManagerDelegate.h"
#import "HMHomeManagerDelegatePrivate.h"
#import "HMMediaSystemDelegate.h"
#import "HMUserDelegatePrivate.h"

@class HMAccessory, HMHomeManager, HMMediaSystem, HMMediaSystemRole, HMUser, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface CUHomeKitManager : NSObject <HMAccessoryDelegatePrivate, HMHomeDelegate, HMHomeDelegatePrivate, HMHomeManagerDelegate, HMHomeManagerDelegatePrivate, HMMediaSystemDelegate, HMUserDelegatePrivate>
{
    int _homeKitPrefsNotifyToken;
    HMHomeManager *_homeManager;
    _Bool _homeManagerDidUpdateHomes;
    struct NSMutableDictionary *_homes;
    NSDictionary *_selfAccessoryAppData;
    _Bool _selfAccessoryEnabled;
    NSUUID *_selfAccessoryRoomID;
    _Bool _selfAccessoryMediaAccessEnabled;
    _Bool _selfAccessoryMediaSystemEnabled;
    _Bool _selfAccessorySiriAccessEnabled;
    HMUser *_selfAccessoryUser;
    struct NSMutableDictionary *_users;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    _Bool _selfAccessorySiriEnabled;
    unsigned int _flags;
    unsigned int _state;
    unsigned int _selfAccessoryMediaAccessFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _stateChangedHandler;
    HMAccessory *_selfAccessory;
    CDUnknownBlockType _selfAccessoryAppDataChangedHandler;
    CDUnknownBlockType _selfAccessoryUpdatedHandler;
    NSString *_selfAccessoryMediaAccessPassword;
    CDUnknownBlockType _selfAccessoryMediaAccessUpdatedHandler;
    HMMediaSystem *_selfAccessoryMediaSystem;
    HMAccessory *_selfAccessoryMediaSystemCounterpart;
    NSString *_selfAccessoryMediaSystemName;
    HMMediaSystemRole *_selfAccessoryMediaSystemRole;
    CDUnknownBlockType _selfAccessoryMediaSystemUpdatedHandler;
    CDUnknownBlockType _selfAccessorySiriAccessUpdatedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType selfAccessorySiriAccessUpdatedHandler; // @synthesize selfAccessorySiriAccessUpdatedHandler=_selfAccessorySiriAccessUpdatedHandler;
@property(readonly, nonatomic) _Bool selfAccessorySiriEnabled; // @synthesize selfAccessorySiriEnabled=_selfAccessorySiriEnabled;
@property(copy, nonatomic) CDUnknownBlockType selfAccessoryMediaSystemUpdatedHandler; // @synthesize selfAccessoryMediaSystemUpdatedHandler=_selfAccessoryMediaSystemUpdatedHandler;
@property(readonly, nonatomic) HMMediaSystemRole *selfAccessoryMediaSystemRole; // @synthesize selfAccessoryMediaSystemRole=_selfAccessoryMediaSystemRole;
@property(copy, nonatomic) NSString *selfAccessoryMediaSystemName; // @synthesize selfAccessoryMediaSystemName=_selfAccessoryMediaSystemName;
@property(readonly, nonatomic) HMAccessory *selfAccessoryMediaSystemCounterpart; // @synthesize selfAccessoryMediaSystemCounterpart=_selfAccessoryMediaSystemCounterpart;
@property(readonly, nonatomic) HMMediaSystem *selfAccessoryMediaSystem; // @synthesize selfAccessoryMediaSystem=_selfAccessoryMediaSystem;
@property(copy, nonatomic) CDUnknownBlockType selfAccessoryMediaAccessUpdatedHandler; // @synthesize selfAccessoryMediaAccessUpdatedHandler=_selfAccessoryMediaAccessUpdatedHandler;
@property(readonly, copy, nonatomic) NSString *selfAccessoryMediaAccessPassword; // @synthesize selfAccessoryMediaAccessPassword=_selfAccessoryMediaAccessPassword;
@property(readonly, nonatomic) unsigned int selfAccessoryMediaAccessFlags; // @synthesize selfAccessoryMediaAccessFlags=_selfAccessoryMediaAccessFlags;
@property(copy, nonatomic) CDUnknownBlockType selfAccessoryUpdatedHandler; // @synthesize selfAccessoryUpdatedHandler=_selfAccessoryUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType selfAccessoryAppDataChangedHandler; // @synthesize selfAccessoryAppDataChangedHandler=_selfAccessoryAppDataChangedHandler;
@property(readonly, copy, nonatomic) NSDictionary *selfAccessoryAppData; // @synthesize selfAccessoryAppData=_selfAccessoryAppData;
@property(readonly, nonatomic) HMAccessory *selfAccessory; // @synthesize selfAccessory=_selfAccessory;
@property(copy, nonatomic) CDUnknownBlockType stateChangedHandler; // @synthesize stateChangedHandler=_stateChangedHandler;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)user:(id)arg1 didUpdatePairingIdentity:(id)arg2;
- (void)user:(id)arg1 didUpdateAssistantAccessControl:(id)arg2 forHome:(id)arg3;
- (void)accessory:(id)arg1 didUpdatePairingIdentity:(id)arg2;
- (void)accessoryDidUpdateApplicationData:(id)arg1;
- (void)mediaSystem:(id)arg1 didUpdateName:(id)arg2;
- (void)mediaSystem:(id)arg1 didUpdateComponents:(id)arg2;
- (void)home:(id)arg1 didRemoveMediaSystem:(id)arg2;
- (void)home:(id)arg1 didAddMediaSystem:(id)arg2;
- (void)home:(id)arg1 didUpdateMediaPassword:(id)arg2;
- (void)home:(id)arg1 didUpdateMediaPeerToPeerEnabled:(_Bool)arg2;
- (void)home:(id)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (id)_selfAccessoryMediaSystemUncached:(id *)arg1;
- (id)_selfAccessoryUncached;
- (_Bool)_isOwnerOfHome:(id)arg1;
- (id)_cuPairingIdentityWithHMFPairingIdentity:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_bestPairingIdentityAndLabel:(id *)arg1;
- (void)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_getPairingIdentityForUserWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPairingIdentityForAccessoryWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateUsers;
- (void)_updateState;
- (void)_updateSelfAccessorySiriAccess;
- (void)_updateSelfAccessoryMediaSystem;
- (void)_updateSelfAccessoryMediaAccess;
- (void)_updateSelfAccessoryIfNeeded;
- (void)_updateHomes;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_activateIfNeeded;
- (void)activate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

