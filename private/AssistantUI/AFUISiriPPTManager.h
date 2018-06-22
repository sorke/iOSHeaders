//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface AFUISiriPPTManager : NSObject
{
    _Bool _runningPPT;
    NSString *_currentTestName;
    NSDictionary *_testOptions;
}

+ (id)sharedManager;
@property(readonly, copy, nonatomic) NSDictionary *testOptions; // @synthesize testOptions=_testOptions;
@property(readonly, copy, nonatomic) NSString *currentTestName; // @synthesize currentTestName=_currentTestName;
@property(readonly, nonatomic) _Bool runningPPT; // @synthesize runningPPT=_runningPPT;
- (void).cxx_destruct;
- (void)reset;
- (void)setRunningPPT:(_Bool)arg1 withTestName:(id)arg2 testOptions:(id)arg3;
- (_Bool)isRunningTestName:(id)arg1;
- (void)setRunningPPT:(_Bool)arg1 withTestName:(id)arg2;

@end

