//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RemoteManagement/RMUniquedManagedObject.h>

#import "RMReconcilableObject.h"

@class NSData, NSString, NSUUID, RMCloudDevice, RMCloudUser;

@interface RMCloudUserDevicePair : RMUniquedManagedObject <RMReconcilableObject>
{
}

+ (_Bool)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id *)arg3;
+ (id)fetchRequest;
- (id)computeUniqueIdentifier;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;

// Remaining properties
@property(copy, nonatomic) NSString *altURI; // @dynamic altURI;
@property(copy, nonatomic) NSString *ckRecordID; // @dynamic ckRecordID;
@property(retain, nonatomic) NSData *ckRecordSystemFields; // @dynamic ckRecordSystemFields;
@property(copy, nonatomic) NSUUID *sortKey; // @dynamic sortKey;
@property(retain, nonatomic) RMCloudDevice *sourceDevice; // @dynamic sourceDevice;
@property(retain, nonatomic) RMCloudUser *sourceUser; // @dynamic sourceUser;

@end

