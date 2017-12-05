//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RemoteUIControllerDelegate.h"

@class NSString, RemoteUIController, UINavigationController, UIViewController;

@interface SFTermsAndConditionsManager : NSObject <RemoteUIControllerDelegate>
{
    UINavigationController *_genericTermsUIViewController;
    UIViewController *_presenter;
    _Bool _showWarranty;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _loadedHandler;
    RemoteUIController *_termsController;
}

@property(retain, nonatomic) RemoteUIController *termsController; // @synthesize termsController=_termsController;
@property(copy, nonatomic) CDUnknownBlockType loadedHandler; // @synthesize loadedHandler=_loadedHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)doneButtonPressed;
- (void)loadOfflineTerms;
- (void)activate;
- (id)initWithPresenter:(id)arg1 showWarranty:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

