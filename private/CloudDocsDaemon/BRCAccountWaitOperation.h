//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class CKContainer, NSObject, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCAccountWaitOperation : _BRCOperation <BRCOperationSubclass>
{
    NSObject<OS_dispatch_source> *_source;
    CKContainer *_ckContainer;
    long long _lastAccountStatus;
    _Bool _resumed;
}

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)start;
- (void)_accountDidChange;
- (void)_accountChangeHandler;
- (void)dealloc;
- (void)cancel;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)subclassableDescriptionWithContext:(id)arg1;
- (id)descriptionForCKAccountStatus:(long long)arg1 dumpContext:(id)arg2;
- (id)createActivity;
- (id)initWithCKContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
