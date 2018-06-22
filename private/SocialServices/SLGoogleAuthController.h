//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFSafariViewControllerDelegate.h"

@class ACAccount, ACAccountStore, NSString, SFSafariViewController;

@interface SLGoogleAuthController : NSObject <SFSafariViewControllerDelegate>
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    CDUnknownBlockType _presentationBlock;
    CDUnknownBlockType _completion;
    NSString *_uuid;
    NSString *_redirectURI;
    SFSafariViewController *_safariViewController;
}

+ (_Bool)openURL:(id)arg1;
+ (id)_mapOfUUIDToAuthController;
+ (void)_fetchNamesForToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_exchangeAuthCode:(id)arg1 usingRedirect:(id)arg2 codeVerifier:(id)arg3 forTokensWithCompletion:(CDUnknownBlockType)arg4;
+ (void)_exchangeAuthCode:(id)arg1 usingRedirect:(id)arg2 codeVerifier:(id)arg3 forTokensAndUsernameWithCompletion:(CDUnknownBlockType)arg4;
+ (void)_presentInternetOfflineError;
+ (void)_presentUsernameMismatchAlert;
+ (id)_identityFromUsername:(id)arg1 displayName:(id)arg2 token:(id)arg3 refreshToken:(id)arg4;
+ (id)googleAuthControllerWithYouTubeUsername:(id)arg1 presentationBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)googleAuthControllerWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)googleAuthControllerWithPresentationBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_completeWithIdentity:(id)arg1 error:(id)arg2;
- (void)_dismissAndCompleteWithIdentity:(id)arg1 error:(id)arg2;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)_didRedirectToURL:(id)arg1 codeVerifier:(id)arg2;
- (void)dealloc;
- (id)_redirectPathForURI:(id)arg1;
- (id)_initWithAccount:(id)arg1 accountStore:(id)arg2 username:(id)arg3 youTube:(_Bool)arg4 presentationBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

