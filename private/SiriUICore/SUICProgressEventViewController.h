//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriUICore/SUICProgressIndicatorViewController.h>

#import "SUICProgressIndicatorViewControllerDataSource.h"

@class NSProgress, NSString, SUICProgressStateMachine;

@interface SUICProgressEventViewController : SUICProgressIndicatorViewController <SUICProgressIndicatorViewControllerDataSource>
{
    SUICProgressStateMachine *_stateMachine;
    NSProgress *_progress;
}

@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)handleEvent:(unsigned long long)arg1;
- (id)stateMachineForProgressIndicatorViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

