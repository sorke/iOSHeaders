//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PETGoalConversionEventTracker, PETScalarEventTracker;

@interface TIConnectionsMetricsTracker : NSObject
{
    _Bool _inputContextDidChange;
    PETScalarEventTracker *_textFieldEntryTracker;
    PETGoalConversionEventTracker *_predictionEngagementTracker;
}

+ (id)sharedInstance;
@property(retain, nonatomic) PETGoalConversionEventTracker *predictionEngagementTracker; // @synthesize predictionEngagementTracker=_predictionEngagementTracker;
@property(retain, nonatomic) PETScalarEventTracker *textFieldEntryTracker; // @synthesize textFieldEntryTracker=_textFieldEntryTracker;
@property _Bool inputContextDidChange; // @synthesize inputContextDidChange=_inputContextDidChange;
- (void).cxx_destruct;
- (void)trackPredictionEngagmentWithConversion:(_Bool)arg1 age:(unsigned long long)arg2 fieldType:(id)arg3 resultType:(id)arg4 fromBundleId:(id)arg5 targetApp:(id)arg6 linguistic:(_Bool)arg7 semantic:(_Bool)arg8;
- (void)trackTextFieldEntryWithEmpty:(_Bool)arg1 fieldType:(id)arg2 trigger:(id)arg3;
- (void)trackTextFieldEntryWithEmpty:(_Bool)arg1 fieldType:(id)arg2 linguistic:(_Bool)arg3 semantic:(_Bool)arg4 requestType:(id)arg5;
- (_Bool)isIgnoredTrigger:(id)arg1;
- (id)init;

@end

