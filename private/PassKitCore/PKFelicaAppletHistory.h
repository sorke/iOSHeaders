//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKTransitAppletHistory.h>

@class NSNumber, NSSet, NSString, PKFelicaGreenCarTicket, PKFelicaShinkansenTicket;

@interface PKFelicaAppletHistory : PKTransitAppletHistory
{
    NSSet *_existingKeys;
    _Bool _shinkansenTicketActive;
    _Bool _greenCarTicketUsed;
    _Bool _balanceAllowedForCommute;
    _Bool _lowBalanceNotificationEnabled;
    long long _type;
    NSString *_transactionID;
    NSNumber *_SPID;
    long long _transactionType;
    PKFelicaShinkansenTicket *_shinkansenTicket;
    PKFelicaGreenCarTicket *_greenCarTicket;
}

+ (long long)appletTypeForDictionary:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) PKFelicaGreenCarTicket *greenCarTicket; // @synthesize greenCarTicket=_greenCarTicket;
@property(readonly, copy, nonatomic) PKFelicaShinkansenTicket *shinkansenTicket; // @synthesize shinkansenTicket=_shinkansenTicket;
@property(readonly, nonatomic, getter=isLowBalanceNotificationEnabled) _Bool lowBalanceNotificationEnabled; // @synthesize lowBalanceNotificationEnabled=_lowBalanceNotificationEnabled;
@property(readonly, nonatomic, getter=isBalanceAllowedForCommute) _Bool balanceAllowedForCommute; // @synthesize balanceAllowedForCommute=_balanceAllowedForCommute;
@property(readonly, nonatomic, getter=isGreenCarTicketUsed) _Bool greenCarTicketUsed; // @synthesize greenCarTicketUsed=_greenCarTicketUsed;
@property(readonly, nonatomic, getter=isShinkansenTicketActive) _Bool shinkansenTicketActive; // @synthesize shinkansenTicketActive=_shinkansenTicketActive;
@property(readonly, nonatomic) long long transactionType; // @synthesize transactionType=_transactionType;
@property(readonly, copy, nonatomic) NSNumber *SPID; // @synthesize SPID=_SPID;
@property(readonly, copy, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isInStation;
@property(readonly, nonatomic, getter=isInShinkansenStation) _Bool inShinkansenStation; // @dynamic inShinkansenStation;
- (void)sanitizeValuesWithState:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 source:(long long)arg2;

@end

