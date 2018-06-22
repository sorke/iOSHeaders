//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PPEventNameRecordLoadingDelegate : NSObject
{
    NSString *_name;
    CDUnknownBlockType _eventNameRecordsSetup;
    CDUnknownBlockType _eventNameRecordsHandler;
    CDUnknownBlockType _eventNameRecordsCompletion;
    CDUnknownBlockType _recentEventNameRecordsSetup;
    CDUnknownBlockType _recentEventNameRecordsHandler;
    CDUnknownBlockType _recentEventNameRecordsCompletion;
    CDUnknownBlockType _resetEventNameRecordData;
}

@property(copy, nonatomic) CDUnknownBlockType resetEventNameRecordData; // @synthesize resetEventNameRecordData=_resetEventNameRecordData;
@property(copy, nonatomic) CDUnknownBlockType recentEventNameRecordsCompletion; // @synthesize recentEventNameRecordsCompletion=_recentEventNameRecordsCompletion;
@property(copy, nonatomic) CDUnknownBlockType recentEventNameRecordsHandler; // @synthesize recentEventNameRecordsHandler=_recentEventNameRecordsHandler;
@property(copy, nonatomic) CDUnknownBlockType recentEventNameRecordsSetup; // @synthesize recentEventNameRecordsSetup=_recentEventNameRecordsSetup;
@property(copy, nonatomic) CDUnknownBlockType eventNameRecordsCompletion; // @synthesize eventNameRecordsCompletion=_eventNameRecordsCompletion;
@property(copy, nonatomic) CDUnknownBlockType eventNameRecordsHandler; // @synthesize eventNameRecordsHandler=_eventNameRecordsHandler;
@property(copy, nonatomic) CDUnknownBlockType eventNameRecordsSetup; // @synthesize eventNameRecordsSetup=_eventNameRecordsSetup;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1;

@end

