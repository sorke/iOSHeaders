//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PXNavigationListDataSourceManager, UIBarButtonItem, UINavigationController;

@protocol PXNavigationRoot <NSObject>
@property(readonly, nonatomic) UINavigationController *navigationController;
@property(readonly, nonatomic) NSString *navigationIdentifier;
@property(readonly, nonatomic) NSString *navigationTitle;
@property(retain, nonatomic) UIBarButtonItem *navigationDisplayModeButtonItem;

@optional
@property(readonly, nonatomic) PXNavigationListDataSourceManager *navigationListDataSourceManager;
- (void)processNavigationListItem:(id <PXNavigationListItem>)arg1 animated:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (_Bool)canProcessNavigationListItem:(id <PXNavigationListItem>)arg1;
@end

