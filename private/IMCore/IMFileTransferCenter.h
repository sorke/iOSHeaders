//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface IMFileTransferCenter : NSObject
{
    NSMutableDictionary *_guidToTransferMap;
    NSMutableDictionary *_guidToRemovedTransferMap;
    NSMutableDictionary *_accountIDToTransferGUIDsMap;
    NSMutableArray *_preauthorizedInfos;
    NSMutableArray *_preauthorizedGUIDs;
    NSMutableSet *_activeTransfers;
    NSMutableSet *_pendingTransfers;
    _Bool _disconnectionListenerSetUp;
    NSMutableDictionary *_fetchHighQualityVariantCompletionHandlers;
}

+ (Class)fileTransferClass;
+ (Class)transferCenterClass;
+ (void)setTransferCenterClass:(Class)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)preWarmConnection;
- (void)_daemonRestarted:(id)arg1;
- (void)_initiateHighQualityVariantDownloadWithDaemonForGUID:(id)arg1;
- (void)_fetchHighQualityVariantForTransferGUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchHighQualityVariantForTransfer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)guidsForStoredAttachmentPayloadData:(id)arg1 messageGUID:(id)arg2;
- (void)setAuxVideoForTransfer:(id)arg1 value:(_Bool)arg2;
- (void)setAuxImageForTransfer:(id)arg1 value:(_Bool)arg2;
- (void)_handleFileTransferHighQualityDownloadFailed:(id)arg1;
- (void)_handleFileTransfer:(id)arg1 highQualityDownloadSucceededWithPath:(id)arg2;
- (void)_handleFileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;
- (void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)_handleFileTransfers:(id)arg1 createdWithLocalPaths:(id)arg2;
- (void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2;
- (void)_handleAllFileTransfers:(id)arg1;
- (void)_handleStandaloneFileTransferRegistered:(id)arg1;
- (void)acceptFileTransferIfPreauthorzed:(id)arg1;
- (_Bool)wasFileTransferPreauthorized:(id)arg1;
- (void)preauthorizeFileTransferFromOtherPerson:(id)arg1 account:(id)arg2 filename:(id)arg3 saveToPath:(id)arg4;
- (_Bool)isFileTransfer:(id)arg1 preauthorizedWithDictionary:(id)arg2;
- (void)clearFinishedTransfers;
@property(readonly, nonatomic) NSArray *orderedTransfersGUIDs;
@property(readonly, nonatomic) __weak NSArray *orderedTransfers;
@property(readonly, nonatomic) NSArray *activeTransferGUIDs;
@property(readonly, nonatomic) __weak NSArray *activeTransfers;
@property(readonly, nonatomic) NSDictionary *transfers;
- (id)transfersForAccount:(id)arg1;
- (void)retargetTransfer:(id)arg1 toPath:(id)arg2;
- (void)deleteTransfer:(id)arg1;
- (void)removeTransfer:(id)arg1;
- (void)stopTransfer:(id)arg1;
- (void)acceptTransfer:(id)arg1;
- (void)acceptTransfer:(id)arg1 withPath:(id)arg2 autoRename:(_Bool)arg3 overwrite:(_Bool)arg4;
- (void)sendTransfer:(id)arg1;
- (id)transferForGUID:(id)arg1 includeRemoved:(_Bool)arg2;
- (id)transferForGUID:(id)arg1;
- (id)chatForTransfer:(id)arg1;
- (void)registerTransferWithDaemon:(id)arg1;
- (void)assignTransfer:(id)arg1 toHandle:(id)arg2;
- (void)assignTransfer:(id)arg1 toMessage:(id)arg2 account:(id)arg3;
- (void)_addSpotlightProperties:(id)arg1 sender:(id)arg2 recipients:(id)arg3 incoming:(_Bool)arg4;
- (_Bool)registerGUID:(id)arg1 forNewOutgoingTransferWithLocalURL:(id)arg2;
- (id)guidForNewOutgoingTransferWithLocalURL:(id)arg1;
- (_Bool)doesLocalURLRequireArchiving:(id)arg1 toHandle:(id)arg2;
- (void)_addTransfer:(id)arg1;
- (void)_addTransfer:(id)arg1 toAccount:(id)arg2;
- (void)_clearTransfers;
- (void)_removeAllActiveTransfers;
- (void)_removeActiveTransfer:(id)arg1;
- (void)_addActiveTransfer:(id)arg1;
@property(readonly, nonatomic) _Bool hasActiveFileTransfers;
- (void)acknowledgeAllPendingTransfers;
- (void)acknowledgePendingTransfer:(id)arg1;
- (void)_removePendingTransfer:(id)arg1;
- (void)_addPendingTransfer:(id)arg1;
@property(readonly, nonatomic) _Bool hasPendingFileTransfers;
- (void)dealloc;

@end

