//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NLModelTrainerDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NLPModelTrainingDelegate : NSObject <NLModelTrainerDelegate>
{
    CDUnknownBlockType _logHandler;
    _Bool _stop;
}

- (void).cxx_destruct;
- (_Bool)modelTrainerShouldStop:(id)arg1;
- (void)modelTrainer:(id)arg1 logMessage:(id)arg2;
- (id)initWithLogHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

