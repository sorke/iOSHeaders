//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NRDataFileHistoryHelpers : NSObject
{
}

+ (id)unarchiveSecureProperties;
+ (_Bool)archiveSecureProperties:(id)arg1;
+ (_Bool)createMissingDates:(id)arg1;
+ (void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)findPairedDateForDeviceID:(id)arg1 inHistory:(id)arg2;
+ (_Bool)archiveDeviceHistory:(id)arg1;
+ (id)unarchiveDeviceHistory;

@end

