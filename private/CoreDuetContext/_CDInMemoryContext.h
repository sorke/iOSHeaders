//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_CDContextInternal.h"
#import "_CDLocalContext.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface _CDInMemoryContext : NSObject <_CDLocalContext, _CDContextInternal>
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_context;
    NSMutableDictionary *_registrations;
}

+ (id)context;
@property(retain, nonatomic) NSMutableDictionary *registrations; // @synthesize registrations=_registrations;
@property(retain, nonatomic) NSMutableDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
- (void).cxx_destruct;
- (id)description;
- (_Bool)evaluatePredicate:(id)arg1;
- (void)deregisterCallback:(id)arg1;
- (void)unsafeDeregisterCallback:(id)arg1;
- (void)registerCallback:(id)arg1;
- (void)addCallback:(id)arg1 forKeyPath:(id)arg2;
- (_Bool)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2;
- (_Bool)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2;
- (_Bool)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3;
- (id)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 valueDidChange:(_Bool *)arg4;
- (_Bool)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)propertiesForContextualKeyPath:(id)arg1;
- (id)lastModifiedDateForContextualKeyPath:(id)arg1;
- (_Bool)setObject:(id)arg1 forContextualKeyPath:(id)arg2;
- (id)setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2;
- (id)unsafe_setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2;
- (void)setContextValue:(id)arg1 forContextualKeyPath:(id)arg2;
- (id)objectForContextualKeyPath:(id)arg1;
- (_Bool)hasKnowledgeOfContextualKeyPath:(id)arg1;
- (id)init;

@end

