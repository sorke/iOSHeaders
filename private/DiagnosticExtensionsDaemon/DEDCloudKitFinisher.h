//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DEDFinisher.h"
#import "DEDSecureArchiving.h"
#import "NSSecureCoding.h"

@class DEDBugSession, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_os_log>, NSString;

@interface DEDCloudKitFinisher : NSObject <DEDFinisher, NSSecureCoding, DEDSecureArchiving>
{
    DEDBugSession *_session;
    NSObject<OS_os_log> *_log;
    unsigned long long _totalUploadSize;
    NSArray *_attachmentURLs;
    NSMutableArray *_attachmentRecords;
    NSMutableArray *_attachments;
    NSMutableDictionary *_uploadedBytes;
}

+ (id)archivedClasses;
+ (_Bool)supportsSecureCoding;
@property(retain) NSMutableDictionary *uploadedBytes; // @synthesize uploadedBytes=_uploadedBytes;
@property(retain) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(retain) NSMutableArray *attachmentRecords; // @synthesize attachmentRecords=_attachmentRecords;
@property(retain) NSArray *attachmentURLs; // @synthesize attachmentURLs=_attachmentURLs;
@property unsigned long long totalUploadSize; // @synthesize totalUploadSize=_totalUploadSize;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property __weak DEDBugSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)localCleanup;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

