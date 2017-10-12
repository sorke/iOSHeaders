//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileCoreServices/_LSDClient.h>

#import "_LSDOpenProtocol.h"

__attribute__((visibility("hidden")))
@interface _LSDOpenClient : _LSDClient <_LSDOpenProtocol>
{
}

- (void)failedToOpenApplication:(id)arg1 withURL:(id)arg2;
- (void)getAppLinkOpenStrategyForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setAppLinkOpenStrategy:(long long)arg1 forBundleIdentifier:(id)arg2;
- (void)openAppLink:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resolveAppLinksForURL:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)canOpenURL:(id)arg1 publicSchemes:(_Bool)arg2 privateSchemes:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)openUserActivityWithUniqueIdentifier:(id)arg1 activityData:(id)arg2 activityType:(id)arg3 bundleIdentifier:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)openURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openApplicationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performOpenOperationWithURL:(id)arg1 applicationIdentifier:(id)arg2 documentIdentifier:(id)arg3 isContentManaged:(_Bool)arg4 sourceAuditToken:(const CDStruct_4c969caf *)arg5 userInfo:(id)arg6 options:(id)arg7 delegate:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;

@end

