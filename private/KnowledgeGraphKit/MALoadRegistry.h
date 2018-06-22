//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MADatabase, MAGraph, MALoadRequirement, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface MALoadRegistry : NSObject
{
    MADatabase *_database;
    MAGraph *_graph;
    MALoadRequirement *_unionOfRequirements;
    NSMutableArray *_pendingNodeRequirements;
    NSMutableSet *_loadedNodeRequirements;
    NSMutableArray *_pendingEdgeRequirements;
    NSMutableSet *_loadedEdgeRequirements;
    NSMutableSet *_registeredLoadRequirements;
    NSMutableSet *_deregisteredLoadRequirements;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    // Error parsing type: Ai, name: _transactionCount
    // Error parsing type: AB, name: _purgeInProgress
}

@property(retain, nonatomic) NSMutableSet *deregisteredLoadRequirements; // @synthesize deregisteredLoadRequirements=_deregisteredLoadRequirements;
@property(retain, nonatomic) NSMutableSet *registeredLoadRequirements; // @synthesize registeredLoadRequirements=_registeredLoadRequirements;
@property(retain, nonatomic) NSMutableSet *loadedEdgeRequirements; // @synthesize loadedEdgeRequirements=_loadedEdgeRequirements;
@property(retain, nonatomic) NSMutableArray *pendingEdgeRequirements; // @synthesize pendingEdgeRequirements=_pendingEdgeRequirements;
@property(retain, nonatomic) NSMutableSet *loadedNodeRequirements; // @synthesize loadedNodeRequirements=_loadedNodeRequirements;
@property(retain, nonatomic) NSMutableArray *pendingNodeRequirements; // @synthesize pendingNodeRequirements=_pendingNodeRequirements;
@property(retain, nonatomic) MAGraph *graph; // @synthesize graph=_graph;
@property(retain, nonatomic) MADatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (void)loadPropertyRequirementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadPropertyRequirements;
- (void)unregisterLoadRequirement:(id)arg1;
- (void)registerAlreadyLoadedLoadRequirement:(id)arg1;
- (void)registerAlreadyLoadedProperties:(id)arg1 forEdge:(id)arg2;
- (void)registerAlreadyLoadedProperties:(id)arg1 forNode:(id)arg2;
- (void)registerLoadRequirement:(id)arg1;
- (void)endTransaction;
- (void)beginTransaction;
- (void)purgeLoadRequirements;
- (void)purgeLoadRequirementPart:(id)arg1;
- (void)implementLoadRequirementPart:(id)arg1;
- (void)purgePropertiesForKeys:(id)arg1 edges:(id)arg2;
- (void)loadProperties:(id)arg1 forEdges:(id)arg2;
- (void)purgePropertiesForKeys:(id)arg1 nodes:(id)arg2;
- (void)loadProperties:(id)arg1 forNodes:(id)arg2;
- (id)propertyValue:(id)arg1;
- (id)initWithGraph:(id)arg1 database:(id)arg2;

@end

