//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RemoteConfiguration/RCOperation.h>

@class NSObject<OS_dispatch_queue>, NSString, NSURL, RCConfigurationResource;

@interface RCFallbackOperation : RCOperation
{
    _Bool _enableExtraLogs;
    NSString *_requestKey;
    NSURL *_fallbackURL;
    unsigned long long _environment;
    CDUnknownBlockType _configurationCompletionHandler;
    NSObject<OS_dispatch_queue> *_completionQueue;
    RCConfigurationResource *_configurationResource;
}

@property(retain, nonatomic) RCConfigurationResource *configurationResource; // @synthesize configurationResource=_configurationResource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(copy, nonatomic) CDUnknownBlockType configurationCompletionHandler; // @synthesize configurationCompletionHandler=_configurationCompletionHandler;
@property(nonatomic) _Bool enableExtraLogs; // @synthesize enableExtraLogs=_enableExtraLogs;
@property(nonatomic) unsigned long long environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(retain, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
- (void).cxx_destruct;
- (void)_parseFallbackResponse:(id)arg1 fallbackURL:(id)arg2 requestKey:(id)arg3 enableExtraLogs:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchConfigurationWithURL:(id)arg1 requestKey:(id)arg2 enableExtraLogs:(_Bool)arg3;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end

