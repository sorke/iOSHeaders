//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFLActionUserInterface.h"
#import "WFLWorkflowControllerDelegate.h"

@class INIntent, NSString, WFLWorkflowController;

@interface APUIWFLIntentController : NSObject <WFLActionUserInterface, WFLWorkflowControllerDelegate>
{
    INIntent *_intent;
    long long _executionContext;
    id <APUIWFLIntentControllerDelegate> _delegate;
    WFLWorkflowController *_workflowController;
    CDUnknownBlockType _intentProceedHandler;
}

+ (void)continueInApp:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType intentProceedHandler; // @synthesize intentProceedHandler=_intentProceedHandler;
@property(retain, nonatomic) WFLWorkflowController *workflowController; // @synthesize workflowController=_workflowController;
@property(nonatomic) __weak id <APUIWFLIntentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long executionContext; // @synthesize executionContext=_executionContext;
@property(retain, nonatomic) INIntent *intent; // @synthesize intent=_intent;
- (void).cxx_destruct;
- (void)handleIntentAction:(id)arg1 requiresUserConfirmation:(_Bool)arg2 requiresUserAuthentication:(_Bool)arg3 withIntentResponse:(id)arg4 proceedHandler:(CDUnknownBlockType)arg5;
- (void)logDebugInformation:(id)arg1;
- (id)workflowController:(id)arg1 userInterfaceForRunningAction:(id)arg2;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (void)action:(id)arg1 requiresContinuingInAppWithProceedHandler:(CDUnknownBlockType)arg2;
- (void)workflowController:(id)arg1 willRunAction:(id)arg2 withInput:(id)arg3 proceedHandler:(CDUnknownBlockType)arg4;
- (void)workflowControllerDidStop:(id)arg1 withError:(id)arg2;
- (void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2;
- (void)workflowControllerWillRun:(id)arg1;
- (void)_setWorkflowControllerExecutionContext;
- (void)confirmationGranted:(_Bool)arg1;
- (void)stop;
- (void)begin;
- (void)dealloc;
- (id)initWithIntent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

