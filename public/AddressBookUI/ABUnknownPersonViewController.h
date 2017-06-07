//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AddressBookUI/CNContactViewControllerPrivateDelegate-Protocol.h>

@class CNContactViewController, NSString;
@protocol ABUnknownPersonViewControllerDelegate;

@interface ABUnknownPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate>
{
    void *_addressBook;
    void *_displayedPerson;
    _Bool _allowsActions;
    _Bool _allowsAddingToAddressBook;
    id <ABUnknownPersonViewControllerDelegate> _unknownPersonViewDelegate;
    NSString *_alternateName;
    NSString *_message;
    CNContactViewController *_cnContactViewController;
}

@property(retain, nonatomic) CNContactViewController *cnContactViewController; // @synthesize cnContactViewController=_cnContactViewController;
@property(nonatomic) _Bool allowsAddingToAddressBook; // @synthesize allowsAddingToAddressBook=_allowsAddingToAddressBook;
@property(nonatomic) _Bool allowsActions; // @synthesize allowsActions=_allowsActions;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *alternateName; // @synthesize alternateName=_alternateName;
@property(nonatomic) id <ABUnknownPersonViewControllerDelegate> unknownPersonViewDelegate; // @synthesize unknownPersonViewDelegate=_unknownPersonViewDelegate;
- (void)loadContactViewController;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
@property(nonatomic) const void *displayedPerson;
- (id)contactStore;
@property(nonatomic) const void *addressBook;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
