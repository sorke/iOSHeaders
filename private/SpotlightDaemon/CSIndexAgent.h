//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpotlight/CSXPCConnection.h>

@class NSMutableDictionary;
@protocol MDIndexer;

@interface CSIndexAgent : CSXPCConnection
{
    id <MDIndexer> _indexer;
    NSMutableDictionary *_indexConnections;
}

+ (id)indexAgent;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *indexConnections; // @synthesize indexConnections=_indexConnections;
@property(retain, nonatomic) id <MDIndexer> indexer; // @synthesize indexer=_indexer;
- (void).cxx_destruct;
- (_Bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (id)indexConnection:(id)arg1;
- (_Bool)lostClientConnection:(id)arg1 error:(id)arg2;
- (_Bool)allowClientConnection:(id)arg1;

@end
