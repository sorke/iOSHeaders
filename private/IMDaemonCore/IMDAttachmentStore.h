//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IMDAttachmentStore : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)deleteAttachmentWithGUID:(id)arg1;
- (_Bool)deleteAttachmentDataForTransfer:(id)arg1;
- (_Bool)deleteAttachmentsWithGUIDs:(id)arg1;
- (id)attachmentWithGUID:(id)arg1;
- (_Bool)updateAttachment:(id)arg1;
- (_Bool)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2;
- (_Bool)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2;

@end
