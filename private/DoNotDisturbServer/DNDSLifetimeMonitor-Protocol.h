//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate;

@protocol DNDSLifetimeMonitor <NSObject>
@property(nonatomic) __weak id <DNDSLifetimeMonitorDelegate> delegate;
@property(nonatomic) __weak id <DNDSLifetimeMonitorDataSource> dataSource;
@property(readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
- (void)refreshMonitorForDate:(NSDate *)arg1;
@end

