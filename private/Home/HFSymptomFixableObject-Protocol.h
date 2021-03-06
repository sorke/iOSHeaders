//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFAccessoryVendor.h"
#import "HFHomeKitObject.h"
#import "HFSymptomsHandlerVendor.h"
#import "NSObject.h"

@class HMSymptomsHandler, NSSet, NSUUID;

@protocol HFSymptomFixableObject <NSObject, HFSymptomsHandlerVendor, HFAccessoryVendor, HFHomeKitObject>
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property(readonly, nonatomic) NSSet *accessories;
@property(readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
@end

