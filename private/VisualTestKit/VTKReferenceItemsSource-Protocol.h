//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIImage, XCTestCase;

@protocol VTKReferenceItemsSource <NSObject>
@property(copy, nonatomic) NSString *itemsDirectory;
- (NSURL *)referenceImageURLWithTestCase:(XCTestCase *)arg1;
- (UIImage *)referenceImageWithID:(id <VTKAssertID>)arg1 testCase:(XCTestCase *)arg2;
@end

