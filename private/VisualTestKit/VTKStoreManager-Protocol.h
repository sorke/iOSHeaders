//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, XCTestCase;

@protocol VTKStoreManager <NSObject>
@property(copy, nonatomic) NSString *itemsDirectory;
- (id <VTKStoreManagerSaveResult>)saveItems:(NSArray *)arg1 withID:(id <VTKAssertID>)arg2 testCase:(XCTestCase *)arg3;
@end

