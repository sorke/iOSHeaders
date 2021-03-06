//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURL, SKCloudServiceSetupRemoteViewController;

@protocol SKCloudServiceSetupRemoteViewControllerDelegate <NSObject>
- (void)overrideCreditCardPresentationWithCompletion:(void (^)(SUCreditCardReaderOutput *))arg1;
- (void)cloudServiceSetupRemoteViewController:(SKCloudServiceSetupRemoteViewController *)arg1 requestsDismissingSafariViewControllerAnimated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)cloudServiceSetupRemoteViewController:(SKCloudServiceSetupRemoteViewController *)arg1 requestsPresentingSafariViewControllerWithURL:(NSURL *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)cloudServiceSetupRemoteViewController:(SKCloudServiceSetupRemoteViewController *)arg1 requestsDismissalWithAnimation:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)cloudServiceSetupRemoteViewController:(SKCloudServiceSetupRemoteViewController *)arg1 didFinishLoadingWithSuccess:(_Bool)arg2 error:(NSError *)arg3;
@end

