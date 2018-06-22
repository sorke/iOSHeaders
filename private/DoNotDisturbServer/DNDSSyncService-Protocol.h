//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol DNDSSyncService <NSObject>
- (void)removeUpdateListener:(id <DNDSSyncServiceUpdateListener>)arg1;
- (void)addUpdateListener:(id <DNDSSyncServiceUpdateListener>)arg1;
- (void)sendRecordToRemotes:(id <DNDSSyncRecord>)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)resume;
- (id)initWithRecordClass:(Class)arg1 versionNumber:(unsigned long long)arg2;
@end

