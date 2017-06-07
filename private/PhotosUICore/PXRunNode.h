//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXRunNode-Protocol.h>

@class NSArray, NSLock, NSSet, NSString, PXRunNodeOperation;
@protocol PXRunNodeDelegate;

@interface PXRunNode : NSObject <PXRunNode>
{
    PXRunNodeOperation *_operation;
    NSArray *_dependencies;
    id <PXRunNodeDelegate> _delegate;
    NSSet *__dependencySet;
    NSLock *__operationLock;
}

+ (void)processGraphForRunNode:(id)arg1;
+ (id)_defaultNodeRunner;
@property(readonly, nonatomic) NSLock *_operationLock; // @synthesize _operationLock=__operationLock;
@property(readonly, nonatomic) NSSet *_dependencySet; // @synthesize _dependencySet=__dependencySet;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *dependencies; // @synthesize dependencies=_dependencies;
- (void).cxx_destruct;
- (void)didCancel;
- (void)cancelWithError:(id)arg1;
- (void)cancel;
- (void)run;
- (void)completeWithError:(id)arg1;
- (void)complete;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly, getter=isWaiting) _Bool waiting;
@property(readonly) unsigned long long state;
- (void)_performChangesToOperation:(CDUnknownBlockType)arg1;
- (id)newOperation;
- (id)initWithDependencies:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
