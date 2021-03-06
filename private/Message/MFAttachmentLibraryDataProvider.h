//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFAttachmentDataProviderProtocol.h"

@class MFMessageLibrary, NSString;

@interface MFAttachmentLibraryDataProvider : NSObject <MFAttachmentDataProviderProtocol>
{
    MFMessageLibrary *_messageLibrary;
}

@property __weak MFMessageLibrary *messageLibrary; // @synthesize messageLibrary=_messageLibrary;
- (void).cxx_destruct;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;
- (id)messageForAttachment:(id)arg1;
- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)initWithLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

