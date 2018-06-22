//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INWatchdogTimer, NSArray, NSError, NSExtension, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSUUID;

@interface INCExtensionRequest : NSObject
{
    NSUUID *_requestIdentifier;
    INWatchdogTimer *_contextTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_requestOperationQueue;
    _Bool _requiresTCC;
    NSExtension *_extension;
    NSError *_error;
    NSString *_identifier;
    NSArray *_extensionInputItems;
}

+ (void)initialize;
@property(nonatomic) _Bool requiresTCC; // @synthesize requiresTCC=_requiresTCC;
@property(retain, nonatomic) NSArray *extensionInputItems; // @synthesize extensionInputItems=_extensionInputItems;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSError *_error; // @synthesize _error;
@property(retain, nonatomic) NSExtension *_extension; // @synthesize _extension;
- (void).cxx_destruct;
- (void)_scheduleContextTimer;
- (void)_resetContextTimer;
- (void)_resetExtensionContextHostWithCompletion:(CDUnknownBlockType)arg1;
- (id)_extensionContextHost;
- (id)_requestOperationQueue;
- (void)reset;
- (void)startRequestForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1;

@end

