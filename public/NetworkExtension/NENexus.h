//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NENexusAgentDelegate.h"

@class NENexusAgent, NENexusFlowManager, NEPolicySession, NSArray, NSMutableDictionary, NSObject<NENexusDelegate>, NSObject<OS_nw_nexus>, NSString;

@interface NENexus : NSObject <NENexusAgentDelegate>
{
    _Bool _asserted;
    unsigned long long _level;
    NSString *_name;
    unsigned long long _availability;
    NSArray *_localAddresses;
    NSArray *_dnsServerAddresses;
    unsigned long long _maximumTransmissionUnit;
    NSObject<OS_nw_nexus> *_userNexus;
    NSMutableDictionary *_userNexusInstances;
    NSMutableDictionary *_userNexusClientCount;
    NSMutableDictionary *_userNexusClientFlows;
    NSMutableDictionary *_assertions;
    struct NEVirtualInterface_s *_virtualInterface;
    NENexusFlowManager *_flowManager;
    NEPolicySession *_policySession;
    NENexusAgent *_agent;
    NSObject<NENexusDelegate> *_delegate;
    NSMutableDictionary *_kernelNexusClientFlows;
}

@property(retain) NSMutableDictionary *kernelNexusClientFlows; // @synthesize kernelNexusClientFlows=_kernelNexusClientFlows;
@property __weak NSObject<NENexusDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain) NENexusAgent *agent; // @synthesize agent=_agent;
@property(retain) NEPolicySession *policySession; // @synthesize policySession=_policySession;
@property(retain) NENexusFlowManager *flowManager; // @synthesize flowManager=_flowManager;
@property struct NEVirtualInterface_s *virtualInterface; // @synthesize virtualInterface=_virtualInterface;
@property(retain) NSMutableDictionary *assertions; // @synthesize assertions=_assertions;
@property(retain) NSMutableDictionary *userNexusClientFlows; // @synthesize userNexusClientFlows=_userNexusClientFlows;
@property(retain) NSMutableDictionary *userNexusClientCount; // @synthesize userNexusClientCount=_userNexusClientCount;
@property(retain) NSMutableDictionary *userNexusInstances; // @synthesize userNexusInstances=_userNexusInstances;
@property(retain) NSObject<OS_nw_nexus> *userNexus; // @synthesize userNexus=_userNexus;
@property(nonatomic) unsigned long long maximumTransmissionUnit; // @synthesize maximumTransmissionUnit=_maximumTransmissionUnit;
@property(retain, nonatomic) NSArray *dnsServerAddresses; // @synthesize dnsServerAddresses=_dnsServerAddresses;
@property(retain, nonatomic) NSArray *localAddresses; // @synthesize localAddresses=_localAddresses;
@property(getter=isAsserted) _Bool asserted; // @synthesize asserted=_asserted;
@property(nonatomic) unsigned long long availability; // @synthesize availability=_availability;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long level; // @synthesize level=_level;
- (void).cxx_destruct;
- (void)handleUnassertFromClient:(id)arg1;
- (void)handleAssertFromClient:(id)arg1;
- (void)handleStartFromClient:(id)arg1;
- (void)closeFlowWithClientIdentifier:(id)arg1;
- (void)rejectFlowWithClientIdentifier:(id)arg1;
- (_Bool)handleRequestNexusFromClient:(id)arg1;
@property(readonly, nonatomic) NSString *interfaceName;
- (void)dealloc;
- (void)cancel;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (id)initWithLevel:(unsigned long long)arg1 name:(id)arg2 virtualInterfaceType:(long long)arg3 delegate:(id)arg4;
- (_Bool)setupPolicySession;
- (_Bool)setupFlowManager;
- (void)disconnectFlow:(id)arg1;
- (void)connectNewFlow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

