//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentValidating.h"

@class CNContact, NSArray, NSDecimalNumber, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString, PKPassLibrary, PKPayment, PKPaymentApplication, PKPaymentInstructions, PKPaymentOptionsDefaults, PKPaymentOptionsRecents, PKPaymentPass, PKPaymentRequest, PKPaymentWebService, PKPeerPaymentQuote, PKPeerPaymentService, PKRemoteDevice, PKRemotePaymentInstrument, PKShippingMethod;

@interface PKPaymentAuthorizationDataModel : NSObject <PKPaymentValidating>
{
    NSMutableArray *_items;
    NSMutableDictionary *_typeToItemMap;
    unsigned long long _holdPendingUpdatesCount;
    _Bool _ignoreProximity;
    NSArray *_acceptedPasses;
    NSArray *_unavailablePasses;
    NSMutableDictionary *_acceptedApplications;
    NSMapTable *_instrumentToDeviceMap;
    NSMutableDictionary *_remoteDeviceToAcceptedInstruments;
    NSArray *_allRemoteDevices;
    NSMutableDictionary *_statusForPass;
    NSString *_paymentApplicationIdentifierForErrors;
    NSArray *_clientErrors;
    _Bool _shippingEditable;
    PKPaymentPass *_pass;
    PKRemoteDevice *_remoteDevice;
    long long _mode;
    PKPaymentRequest *_paymentRequest;
    NSArray *_paymentContentItems;
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
    NSArray *_paymentErrors;
    PKPayment *_payment;
    PKPaymentOptionsDefaults *_defaults;
    PKPaymentOptionsRecents *_recents;
    PKPassLibrary *_library;
    PKPaymentWebService *_paymentWebService;
    PKPeerPaymentService *_peerPaymentService;
    PKPaymentPass *_peerPaymentPass;
    NSArray *_pendingTransactions;
    CDUnknownBlockType _updateHandler;
    PKPeerPaymentQuote *_peerPaymentQuote;
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
@property(retain, nonatomic) PKPeerPaymentQuote *peerPaymentQuote; // @synthesize peerPaymentQuote=_peerPaymentQuote;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(retain, nonatomic) NSArray *pendingTransactions; // @synthesize pendingTransactions=_pendingTransactions;
@property(retain, nonatomic) PKPaymentPass *peerPaymentPass; // @synthesize peerPaymentPass=_peerPaymentPass;
@property(retain, nonatomic) PKPeerPaymentService *peerPaymentService; // @synthesize peerPaymentService=_peerPaymentService;
@property(retain, nonatomic) PKPaymentWebService *paymentWebService; // @synthesize paymentWebService=_paymentWebService;
@property(retain, nonatomic) PKPassLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) PKPaymentOptionsRecents *recents; // @synthesize recents=_recents;
@property(retain, nonatomic) PKPaymentOptionsDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) PKPayment *payment; // @synthesize payment=_payment;
@property(retain, nonatomic) NSArray *paymentErrors; // @synthesize paymentErrors=_paymentErrors;
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
@property(retain, nonatomic) NSArray *paymentContentItems; // @synthesize paymentContentItems=_paymentContentItems;
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
- (id)unavailablePaymentApplicationsForPass:(id)arg1;
- (id)acceptedPaymentApplicationsForPass:(id)arg1;
@property(readonly, nonatomic) NSArray *acceptedPasses;
- (void)updateRemoteDevices:(id)arg1 ignoreProximity:(_Bool)arg2;
- (void)updateRemoteDevices:(id)arg1;
@property(retain, nonatomic) PKRemoteDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly, nonatomic) NSArray *allNearbyRemoteDevices;
@property(readonly, nonatomic) NSArray *remoteDevices;
- (void)setPass:(id)arg1 paymentApplication:(id)arg2;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (_Bool)isValidWithError:(id *)arg1;
- (id)paymentErrorsFromLegacyStatus:(long long)arg1;
- (id)_filterAndProcessPaymentPassesUsingConfiguration:(id)arg1;
- (id)_filterAndProcessPaymentApplicationsUsingConfigurationForPass:(id)arg1;
- (id)_inAppPrivateLabelPaymentPasses;
- (id)_inAppPaymentPassesForPaymentRequest:(id)arg1;
- (void)_notifyModelChanged;
- (void)_ensurePlaceholderItems;
- (void)_ensurePaymentContentItems;
- (void)_ensureItemForClass:(Class)arg1;
- (void)_updatePeerPaymentPromotionAvailability;
- (void)_ensureItems;
@property(readonly, nonatomic) NSString *defaultPaymentPassUniqueIdentifier;
- (unsigned long long)_insertionIndexForItem:(id)arg1;
- (void)_setPaymentContentDataItems:(id)arg1;
- (void)_setDataItem:(id)arg1;
- (id)itemForType:(long long)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (id)automaticallyPresentedPassFromAcceptedPasses:(id)arg1;
@property(readonly, nonatomic) NSDecimalNumber *transactionAmount;
@property(retain, nonatomic) NSArray *paymentSummaryItems;
@property(readonly, nonatomic) NSString *currencyCode;
@property(readonly, nonatomic) NSString *merchantName;
- (void)setShippingAddressErrors:(id)arg1;
- (void)updateBillingErrors;
- (_Bool)shouldUpdateContactDataItem;
- (id)initWithMode:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

