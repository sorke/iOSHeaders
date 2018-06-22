//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICDeviceManagerProtocol.h"

@class DeviceManagerThread, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface DeviceManager : NSObject <ICDeviceManagerProtocol>
{
    DeviceManagerThread *_thread;
    NSDictionary *_deviceMatchingInfo;
    NSMutableDictionary *_devices;
}

- (void)postNotification:(id)arg1;
- (void)postCommandCompletionNotification:(id)arg1;
- (void)enumerateContent;
- (void)aptpRetrieveDataForFilesImp:(id)arg1;
- (void)aptpRequestDataForFilesImp:(id)arg1;
- (void)ejectImp:(id)arg1;
- (void)downloadFileImp:(id)arg1;
- (void)deleteFileImp:(id)arg1;
- (void)getMetadataOfFileImp:(id)arg1;
- (void)getThumbnailOfFileImp:(id)arg1;
- (void)syncClockImp:(id)arg1;
- (void)closeSessionImp:(id)arg1;
- (void)getDataOfFileImp:(id)arg1;
- (void)openSessionImp:(id)arg1;
- (void)closeDeviceImp:(id)arg1;
- (void)openDeviceImp:(id)arg1;
- (long long)eject:(id)arg1;
- (long long)downloadFile:(id)arg1 fromDevice:(id)arg2 options:(id)arg3 contextInfo:(void *)arg4;
- (long long)deleteFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void *)arg3;
- (long long)getDataOfFile:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)getMetadataOfFile:(id)arg1 fromDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)getThumbnailOfFile:(id)arg1 fromDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)aptpRetrieveDataForFiles:(id)arg1 contextInfo:(void *)arg2;
- (long long)aptpRequestDataForFiles:(id)arg1 fromDevice:(id)arg2 contextInfo:(void *)arg3;
- (long long)syncClock:(id)arg1 contextInfo:(void *)arg2;
- (long long)closeSession:(id)arg1 contextInfo:(void *)arg2;
- (long long)openSession:(id)arg1 contextInfo:(void *)arg2;
- (long long)closeDevice:(id)arg1 contextInfo:(void *)arg2;
- (long long)openDevice:(id)arg1 contextInfo:(void *)arg2;
- (void)stopRunning;
- (void)startRunning;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

