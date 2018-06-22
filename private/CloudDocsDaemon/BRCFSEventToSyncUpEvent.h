//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCEventMetric.h>

@class BRCItemID;

__attribute__((visibility("hidden")))
@interface BRCFSEventToSyncUpEvent : BRCEventMetric
{
    _Bool _isPackage;
    unsigned int _genID;
    unsigned long long _fileID;
    BRCItemID *_itemID;
    unsigned long long _mtime;
    unsigned long long _contentSize;
    unsigned long long _syncUpBatchSize;
}

@property(nonatomic) unsigned long long syncUpBatchSize; // @synthesize syncUpBatchSize=_syncUpBatchSize;
@property(nonatomic) _Bool isPackage; // @synthesize isPackage=_isPackage;
@property(nonatomic) unsigned long long contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) unsigned long long mtime; // @synthesize mtime=_mtime;
@property(retain, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) unsigned int genID; // @synthesize genID=_genID;
@property(nonatomic) unsigned long long fileID; // @synthesize fileID=_fileID;
- (void).cxx_destruct;
- (id)subDescription;
- (id)additionalPayload;

@end

