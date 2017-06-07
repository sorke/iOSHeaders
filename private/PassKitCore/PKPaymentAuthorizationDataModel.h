//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentValidating-Protocol.h>

@class CNContact, NSArray, NSDecimalNumber, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString, PKPassLibrary, PKPaymentApplication, PKPaymentInstructions, PKPaymentOptionsDefaults, PKPaymentOptionsRecents, PKPaymentPass, PKPaymentRequest, PKPaymentTransaction, PKRemoteDevice, PKRemotePaymentInstrument, PKShippingMethod;

@interface PKPaymentAuthorizationDataModel : NSObject <PKPaymentValidating>
{
    NSMutableArray *_items;
    NSMutableDictionary *_typeToItemMap;
    unsigned long long _holdPendingUpdatesCount;
    _Bool _ignoreProximity;
    NSArray *_acceptedPasses;
    NSArray *_unavailablePasses;
    NSMapTable *_instrumentToDeviceMap;
    NSMutableDictionary *_remoteDeviceToAcceptedInstruments;
    NSArray *_allRemoteDevices;
    NSMutableDictionary *_statusForPass;
    _Bool _shippingEditable;
    PKPaymentPass *_pass;
    PKRemoteDevice *_remoteDevice;
    long long _mode;
    PKPaymentRequest *_paymentRequest;
    NSString *_hostAppLocalizedName;
    NSString *_hostApplicationIdentifier;
    CNContact *_shippingEmail;
    CNContact *_shippingPhone;
    CNContact *_shippingName;
    CNContact *_shippingAddress;
    PKShippingMethod *_shippingMethod;
    NSString *_shippingType;
    NSString *_shippingEditableMessage;
    CNContact *_billingAddress;
    PKPaymentOptionsDefaults *_defaults;
    PKPaymentOptionsRecents *_recents;
    PKPassLibrary *_library;
    PKPaymentTransaction *_pendingTransaction;
    CDUnknownBlockType _updateHandler;
    PKPaymentApplication *_paymentApplication;
    PKPaymentInstructions *_instructions;
    PKRemotePaymentInstrument *_remotePaymentInstrument;
    PKRemotePaymentInstrument *_initialRemotePaymentInstrument;
    NSSet *_allAcceptedRemotePaymentInstruments;
    NSSet *_allUnavailableRemotePaymentInstruments;
    CNContact *_cachedRecentAddress;
}

@property(retain, nonatomic) CNContact *cachedRecentAddress; // @synthesize cachedRecentAddress=_cachedRecentAddress;
@property(readonly, nonatomic) NSSet *allUnavailableRemotePaymentInstruments; // @synthesize allUnavailableRemotePaymentInstruments=_allUnavailableRemotePaymentInstruments;
@property(readonly, nonatomic) NSSet *allAcceptedRemotePaymentInstruments; // @synthesize allAcceptedRemotePaymentInstruments=_allAcceptedRemotePaymentInstruments;
@property(retain, nonatomic) PKRemotePaymentInstrument *initialRemotePaymentInstrument; // @synthesize initialRemotePaymentInstrument=_initialRemotePaymentInstrument;
@property(retain, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument; // @synthesize remotePaymentInstrument=_remotePaymentInstrument;
@property(readonly, nonatomic) NSArray *allRemoteDevices; // @synthesize allRemoteDevices=_allRemoteDevices;
@property(retain, nonatomic) PKPaymentInstructions *instructions; // @synthesize instructions=_instructions;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(retain, nonatomic) PKPaymentTransaction *pendingTransaction; // @synthesize pendingTransaction=_pendingTransaction;
@property(retain, nonatomic) PKPassLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) PKPaymentOptionsRecents *recents; // @synthesize recents=_recents;
@property(retain, nonatomic) PKPaymentOptionsDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) CNContact *billingAddress; // @synthesize billingAddress=_billingAddress;
@property(retain, nonatomic) NSString *shippingEditableMessage; // @synthesize shippingEditableMessage=_shippingEditableMessage;
@property(nonatomic, getter=isShippingEditable) _Bool shippingEditable; // @synthesize shippingEditable=_shippingEditable;
@property(retain, nonatomic) NSString *shippingType; // @synthesize shippingType=_shippingType;
@property(retain, nonatomic) PKShippingMethod *shippingMethod; // @synthesize shippingMethod=_shippingMethod;
@property(retain, nonatomic) CNContact *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(retain, nonatomic) CNContact *shippingName; // @synthesize shippingName=_shippingName;
@property(retain, nonatomic) CNContact *shippingPhone; // @synthesize shippingPhone=_shippingPhone;
@property(retain, nonatomic) CNContact *shippingEmail; // @synthesize shippingEmail=_shippingEmail;
@property(retain, nonatomic) NSString *hostApplicationIdentifier; // @synthesize hostApplicationIdentifier=_hostApplicationIdentifier;
@property(retain, nonatomic) NSString *hostAppLocalizedName; // @synthesize hostAppLocalizedName=_hostAppLocalizedName;
@property(retain, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (long long)_statusForPass:(id)arg1;
- (void)_setStatus:(long long)arg1 forPass:(id)arg2;
- (void)setStatus:(long long)arg1 forItemWithType:(long long)arg2 notify:(_Bool)arg3;
- (void)setStatus:(long long)arg1 forItemWithType:(long long)arg2;
@property(readonly, nonatomic) _Bool pinRequired;
@property(readonly, nonatomic) _Bool wantsInstructions;
@property(readonly, nonatomic) NSArray *unavailablePasses;
- (id)_simulatorPasses;
- (id)acceptedRemotePaymentInstrumentsForRemoteDevice:(id)arg1;
@property(readonly, nonatomic) NSArray *acceptedPasses;
- (void)updateRemoteDevices:(id)arg1 ignoreProximity:(_Bool)arg2;
- (void)updateRemoteDevices:(id)arg1;
@property(retain, nonatomic) PKRemoteDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly, nonatomic) NSArray *allNearbyRemoteDevices;
@property(readonly, nonatomic) NSArray *remoteDevices;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (_Bool)isValidWithError:(id *)arg1;
- (id)_filterPaymentPassesUsingConfiguration:(id)arg1;
- (id)_inAppPrivateLabelPaymentPasses;
- (id)_inAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2;
- (void)_notifyModelChanged;
- (void)_ensurePlaceholderItems;
- (void)_ensureItemForClass:(Class)arg1;
- (void)_ensureItems;
@property(readonly, nonatomic) NSString *defaultPaymentPassUniqueIdentifier;
- (void)_setDataItem:(id)arg1;
- (id)itemForType:(long long)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (id)automaticallyPresentedPass;
@property(readonly, nonatomic) NSDecimalNumber *transactionAmount;
@property(retain, nonatomic) NSArray *paymentSummaryItems;
@property(readonly, nonatomic) NSString *currencyCode;
@property(readonly, nonatomic) NSString *merchantName;
- (void)dealloc;
- (id)initWithMode:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
