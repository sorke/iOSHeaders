//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EMAccountAuthentication : NSObject
{
    id <EMAccountFactory> _accountFactory;
}

+ (id)log;
@property(readonly, nonatomic) id <EMAccountFactory> accountFactory; // @synthesize accountFactory=_accountFactory;
- (void).cxx_destruct;
- (_Bool)_hostnamesHaveSameTopLevelDomain:(id)arg1 deliveryAccount:(id)arg2;
- (_Bool)_shouldAutoUpdateDeliveryAccount:(id)arg1 forChangedReceivingAccount:(id)arg2;
- (_Bool)_updateDeliveryAccountCredentialIfNecessaryForReceivingAccount:(id)arg1;
- (_Bool)_updateDeliveryAccountCredentialIfNecessaryForAccountWithAccount:(id)arg1;
- (_Bool)updateDeliveryAccountCredentialIfNecessaryForAccountWithIdentifier:(id)arg1;
- (_Bool)updateDeliveryAccountCredentialIfNecessaryForAccountWithSystemAccount:(id)arg1;
- (id)initWithAccountFactory:(id)arg1;

@end

