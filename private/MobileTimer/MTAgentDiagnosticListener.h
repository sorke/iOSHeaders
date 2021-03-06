//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTAgentNotificationListener.h"

@class NSString;

@interface MTAgentDiagnosticListener : NSObject <MTAgentNotificationListener>
{
    id <MTAgentDiagnosticDelegate> _delegate;
}

@property(nonatomic) __weak id <MTAgentDiagnosticDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addStateHandler;
- (void)handleNotification:(id)arg1;
- (_Bool)handlesNotification:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

