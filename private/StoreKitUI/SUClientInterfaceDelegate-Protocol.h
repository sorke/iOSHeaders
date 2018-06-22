//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISDialog, SUClientInterface, SUPreviewOverlayViewController, SUScriptInterface, SUTabBarController, UIViewController;

@protocol SUClientInterfaceDelegate <NSObject>

@optional
- (SUTabBarController *)tabBarControllerForClientInterface:(SUClientInterface *)arg1;
- (SUScriptInterface *)scriptInterfaceForClientInterface:(SUClientInterface *)arg1;
- (void)returnToLibraryForClientInterface:(SUClientInterface *)arg1;
- (SUPreviewOverlayViewController *)previewOverlayForClientInterface:(SUClientInterface *)arg1;
- (void)clientInterface:(SUClientInterface *)arg1 setStatusBarStyle:(long long)arg2 animated:(_Bool)arg3;
- (void)clientInterface:(SUClientInterface *)arg1 setStatusBarHidden:(_Bool)arg2 withAnimation:(long long)arg3;
- (void)clientInterface:(SUClientInterface *)arg1 showPreviewOverlayAnimated:(_Bool)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 hidePreviewOverlayAnimated:(_Bool)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 presentDialog:(ISDialog *)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 overrideCreditCardPresentationFromViewController:(UIViewController *)arg2 completion:(void (^)(SUCreditCardReaderOutput *))arg3;
- (void)clientInterface:(SUClientInterface *)arg1 financeInterruptionResolved:(_Bool)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 exitStoreWithReason:(long long)arg2;
- (void)clientInterfaceDidFinishLoading:(SUClientInterface *)arg1;
@end

