//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSLayoutConstraint, NSString, UILabel, UIScrollView, UITableView, UITextField;

@interface PSUICellularFauxCardInfoViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSString *_fauxCardData;
    NSArray *_tableData;
    UITextField *_activeTextField;
    struct CGSize _keyboardSize;
    CDUnknownBlockType _completion;
    UILabel *_enterActivationLabel;
    UITableView *_infoTableView;
    NSLayoutConstraint *_infoTableViewHeightConstraint;
    UIScrollView *_scrollView;
}

@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak NSLayoutConstraint *infoTableViewHeightConstraint; // @synthesize infoTableViewHeightConstraint=_infoTableViewHeightConstraint;
@property(nonatomic) __weak UITableView *infoTableView; // @synthesize infoTableView=_infoTableView;
@property(nonatomic) __weak UILabel *enterActivationLabel; // @synthesize enterActivationLabel=_enterActivationLabel;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)activatePlan:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)scrollViewForKeyboardIfNecessary;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

