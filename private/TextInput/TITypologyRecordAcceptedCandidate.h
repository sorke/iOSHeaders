//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class NSString, TIKeyboardCandidate, TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordAcceptedCandidate : TITypologyRecord
{
    TIKeyboardCandidate *_candidate;
    TIKeyboardState *_keyboardState;
    TIKeyboardConfiguration *_keyboardConfig;
    NSString *_textToCommit;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *textToCommit; // @synthesize textToCommit=_textToCommit;
@property(retain, nonatomic) TIKeyboardConfiguration *keyboardConfig; // @synthesize keyboardConfig=_keyboardConfig;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
@property(retain, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)textSummary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end

