//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, STAlwaysAllowList, STDeviceBedtime;

@interface STTimeAllowancesViewModel : NSObject
{
    STDeviceBedtime *_bedtime;
    NSDictionary *_allowancesByIdentifier;
    STAlwaysAllowList *_alwaysAllowList;
}

@property(copy, nonatomic) STAlwaysAllowList *alwaysAllowList; // @synthesize alwaysAllowList=_alwaysAllowList;
@property(copy, nonatomic) NSDictionary *allowancesByIdentifier; // @synthesize allowancesByIdentifier=_allowancesByIdentifier;
@property(copy, nonatomic) STDeviceBedtime *bedtime; // @synthesize bedtime=_bedtime;
- (void).cxx_destruct;
- (id)init;

@end

