//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _INPBBillDetailsValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBPaymentAmountValue, _INPBString;

@protocol _INPBPayBillIntentResponse <NSObject>
@property(readonly, nonatomic) _Bool hasTransactionScheduledDate;
@property(retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate;
@property(readonly, nonatomic) _Bool hasTransactionNote;
@property(retain, nonatomic) _INPBString *transactionNote;
@property(readonly, nonatomic) _Bool hasTransactionAmount;
@property(retain, nonatomic) _INPBPaymentAmountValue *transactionAmount;
@property(readonly, nonatomic) _Bool hasFromAccount;
@property(retain, nonatomic) _INPBFinancialAccountValue *fromAccount;
@property(readonly, nonatomic) _Bool hasBillDetails;
@property(retain, nonatomic) _INPBBillDetailsValue *billDetails;
@end

