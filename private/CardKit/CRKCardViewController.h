//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CRKCardSectionViewControllerDataSource.h"
#import "CRKCardSectionViewControllerDelegate.h"
#import "CRKCardSectionViewProviderDelegate.h"
#import "CRKCardViewControlling.h"

@class CRKComposedStackView, NSMapTable, NSMutableArray, NSString;

@interface CRKCardViewController : UIViewController <CRKCardSectionViewControllerDelegate, CRKCardSectionViewProviderDelegate, CRKCardSectionViewControllerDataSource, CRKCardViewControlling>
{
    NSMutableArray *_cardSectionViewControllers;
    NSMapTable *_cardSectionsToCardSectionViewControllersMapTable;
    NSMapTable *_handledParametersForInteraction;
    NSMutableArray *_pendingDismissalCommands;
    _Bool _loaded;
    id <CRKCardSectionViewSourcing> _builtInCardSectionViewProviderManager;
    NSMutableArray *_loadingCardSections;
    _Bool _indicatingActivity;
    id <CRCard> _card;
    id <CRKCardViewControllerDelegate> _cardViewControllerDelegate;
    id <CRKCardSectionViewSourcing> _cardSectionViewSource;
    long long _preferredPunchoutIndex;
}

+ (void)_registerCardSectionViewControllers;
+ (void)initialize;
@property long long preferredPunchoutIndex; // @synthesize preferredPunchoutIndex=_preferredPunchoutIndex;
@property(readonly, nonatomic, getter=isIndicatingActivity) _Bool indicatingActivity; // @synthesize indicatingActivity=_indicatingActivity;
@property(retain, nonatomic) id <CRKCardSectionViewSourcing> cardSectionViewSource; // @synthesize cardSectionViewSource=_cardSectionViewSource;
@property(nonatomic) __weak id <CRKCardViewControllerDelegate> cardViewControllerDelegate; // @synthesize cardViewControllerDelegate=_cardViewControllerDelegate;
@property(retain, nonatomic) id <CRCard> card; // @synthesize card=_card;
- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)arg1;
@property(nonatomic) __weak id <CRKCardViewControllerDelegate> delegate;
- (id)defaultFeedbackDelegateForProvider:(id)arg1;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)presentViewController:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (id)cardSectionViewController:(id)arg1 interactionWithIdentifier:(id)arg2;
- (long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1;
- (void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
- (void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2;
- (void)cardSectionViewControllerShouldBeRemoved:(id)arg1;
- (_Bool)performCommand:(id)arg1 forCardSectionViewController:(id)arg2;
- (_Bool)_fireAndForgetOutboundCommand:(id)arg1;
- (void)handleCardCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (struct CGSize)boundingSizeForCardSectionViewController:(id)arg1;
- (void)cardSectionViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (void)cardSectionViewControllerBoundsDidChange:(id)arg1;
- (void)cardSectionViewControllerDidFinishLoading:(id)arg1;
- (id)init;
- (struct CGSize)preferredContentSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_loadCardSectionViewControllersFromCard:(id)arg1 currentSourceInvalid:(_Bool)arg2;
- (void)_setCard:(id)arg1 loadProvidersImmediately:(_Bool)arg2;
- (id)_generateCardViewAppearanceFeedback;
- (_Bool)_isActuallyVisible;
- (void)_finishLoading;
- (void)_configureCardSectionViewController:(id)arg1 forCardSection:(id)arg2;
- (_Bool)_askDelegateToPerformReferentialCommand:(id)arg1;
- (void)_addCardSectionViewControllersAsChildViewControllers:(id)arg1;
- (void)_removeCardSectionViewControllersFromParentViewController:(id)arg1;
- (long long)_convertSFSeparatorStyleToCRKKeylineStyle:(int)arg1;
- (long long)_defaultKeylineStyleBetweenLeadingCardSection:(id)arg1 andTrailingCardSection:(id)arg2;
- (long long)_keylineStyleBetweenLeadingCardSectionViewController:(id)arg1 andTrailingCardSectionViewController:(id)arg2;
- (id)_cardSectionViewControllerForCardSection:(id)arg1;
- (void)_resumeTouchesIfNecessary;
- (void)_cancelTouchesIfNecessary;
- (id)_loadCardSectionViewControllerFromCardSection:(id)arg1;
- (id)_initWithCard:(id)arg1;
- (id)_initWithCard:(id)arg1 delegate:(id)arg2 loadProvidersImmediately:(_Bool)arg3;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)initWithCard:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) CRKComposedStackView *view; // @dynamic view;

@end

