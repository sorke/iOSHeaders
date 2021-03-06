//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFetchRequestResult.h"
#import "UIActivityItemSource.h"

@class AVAsset, CLLocation, NSDate, NSString, NSURL;

@protocol RCRecording <NSFetchRequestResult, UIActivityItemSource>
@property(readonly, nonatomic) AVAsset *avAsset;
@property(readonly, nonatomic) _Bool evicted;
@property(readonly, nonatomic) _Bool editing;
@property(readonly, nonatomic) _Bool manuallyRenamed;
@property(readonly, nonatomic) _Bool playable;
@property(readonly, nonatomic) _Bool pendingRestore;
@property(readonly, nonatomic) _Bool synced;
@property(readonly, nonatomic) long long iTunesPersistentID;
@property(readonly, copy, nonatomic) NSString *uniqueID;
@property(readonly, copy, nonatomic) NSString *customLabel;
@property(readonly, copy, nonatomic) NSString *titleDisallowingEmptyString;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) CLLocation *location;
@property(readonly, nonatomic) double duration;
@property(readonly, copy, nonatomic) NSURL *URIRepresentation;
@property(readonly, copy, nonatomic) NSURL *url;
@property(readonly, copy, nonatomic) NSString *path;
@property(readonly, copy, nonatomic) NSDate *evictionDate;
@property(readonly, copy, nonatomic) NSDate *date;
@property(readonly, nonatomic) _Bool isContentBeingModified;
@end

