//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL, UIViewController;

@protocol PXMutableMessagesExtensionViewModel <NSObject>
@property(nonatomic) _Bool drawerActive;
@property(retain, nonatomic) UIViewController *presentedViewController;
@property(retain, nonatomic) NSDate *selectedMessageDate;
@property(copy, nonatomic) NSString *selectedMessageText;
@property(nonatomic) unsigned long long selectedActivityType;
@property(retain, nonatomic) NSURL *selectedURL;
@property(retain, nonatomic) id <PXCMMSuggestion> selectedSuggestion;
- (void)clearSelection;
@end

