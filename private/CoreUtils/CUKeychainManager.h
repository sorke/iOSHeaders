//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CUKeychainManager : NSObject
{
}

- (_Bool)updateItem:(id)arg1 matchingItem:(id)arg2 error:(id *)arg3;
- (_Bool)removeItemMatchingItem:(id)arg1 error:(id *)arg2;
- (_Bool)addOrUpdateOrReAddItem:(id)arg1 logCategory:(struct LogCategory *)arg2 logLabel:(id)arg3 error:(id *)arg4;
- (_Bool)addItem:(id)arg1 error:(id *)arg2;
- (id)_copyItemsMatchingItemSeparate:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)_copyItemsMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)copyItemsMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)copyItemMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;

@end

