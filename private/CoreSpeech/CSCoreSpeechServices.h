//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSCoreSpeechServices : NSObject
{
}

+ (long long)getFirstPassRunningMode;
+ (void)requestUpdatedSATAudio;
+ (void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 downloadedModels:(id)arg3 preinstalledModels:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)getCoreSpeechXPCConnection;
+ (id)getCoreSpeechServiceConnection;

@end

