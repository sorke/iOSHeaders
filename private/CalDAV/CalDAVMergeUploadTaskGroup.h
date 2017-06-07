//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

@class CalDAVBulkUploadTaskGroup;
@protocol CalDAVCalendar, CalDAVPrincipal;

@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup
{
    _Bool _shouldTrySyncTokenForBulkUpload;
    CalDAVBulkUploadTaskGroup *_uploadTaskGroup;
    id <CalDAVCalendar> _calendar;
    id <CalDAVPrincipal> _principal;
}

@property(nonatomic) _Bool shouldTrySyncTokenForBulkUpload; // @synthesize shouldTrySyncTokenForBulkUpload=_shouldTrySyncTokenForBulkUpload;
@property(retain, nonatomic) id <CalDAVPrincipal> principal; // @synthesize principal=_principal;
@property(retain, nonatomic) id <CalDAVCalendar> calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) CalDAVBulkUploadTaskGroup *uploadTaskGroup; // @synthesize uploadTaskGroup=_uploadTaskGroup;
- (void).cxx_destruct;
- (void)cancelTaskGroup;
- (void)startTaskGroup;
- (void)_performRegularUpload;
- (void)_performBulkUpload;
- (id)dataContentType;
- (void)dealloc;
- (id)initWithCalendar:(id)arg1 principal:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;

@end
