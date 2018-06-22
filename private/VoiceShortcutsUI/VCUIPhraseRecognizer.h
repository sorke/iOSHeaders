//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFDictationDelegate.h"

@class AFDictationConnection, NSObject<OS_dispatch_queue>, NSString;

@interface VCUIPhraseRecognizer : NSObject <AFDictationDelegate>
{
    _Bool _recordingUsingAudioFile;
    _Bool _currentlyRecording;
    id <VCUIPhraseRecognizerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_audioQueue;
    AFDictationConnection *_dictationConnection;
    NSString *_languageCode;
}

+ (void)initialize;
@property(nonatomic) _Bool currentlyRecording; // @synthesize currentlyRecording=_currentlyRecording;
@property(nonatomic) _Bool recordingUsingAudioFile; // @synthesize recordingUsingAudioFile=_recordingUsingAudioFile;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) AFDictationConnection *dictationConnection; // @synthesize dictationConnection=_dictationConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(nonatomic) __weak id <VCUIPhraseRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)stopRecording;
- (void)_startRecordingWithContextualStrings:(id)arg1 fileAtPath:(id)arg2;
- (void)startRecordingWithFileAtPath:(id)arg1 contextualStrings:(id)arg2;
- (void)startRecordingWithContextualStrings:(id)arg1;
@property(readonly, nonatomic) float averagePowerLevel;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (_Bool)isSiriEnabled;
- (_Bool)isNetworkAvailable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

