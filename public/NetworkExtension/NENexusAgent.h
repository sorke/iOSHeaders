//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NWNetworkAgent.h"

@class NSObject<NENexusAgentDelegate>, NSString, NSUUID, NWNetworkAgentRegistration;

@interface NENexusAgent : NSObject <NWNetworkAgent>
{
    _Bool active;
    _Bool supportsBrowseRequests;
    _Bool nexusProvider;
    unsigned int _frameType;
    NSUUID *agentUUID;
    NSString *agentDescription;
    NWNetworkAgentRegistration *_registration;
    NSObject<NENexusAgentDelegate> *_delegate;
}

+ (id)agentFromData:(id)arg1;
+ (id)agentType;
+ (id)agentDomain;
@property __weak NSObject<NENexusAgentDelegate> *delegate; // @synthesize delegate=_delegate;
@property unsigned int frameType; // @synthesize frameType=_frameType;
@property(retain) NWNetworkAgentRegistration *registration; // @synthesize registration=_registration;
@property(nonatomic, getter=isNexusProvider) _Bool nexusProvider; // @synthesize nexusProvider;
@property(nonatomic) _Bool supportsBrowseRequests; // @synthesize supportsBrowseRequests;
@property(copy, nonatomic) NSString *agentDescription; // @synthesize agentDescription;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active;
@property(copy, nonatomic) NSUUID *agentUUID; // @synthesize agentUUID;
- (void).cxx_destruct;
- (void)unassertAgentWithOptions:(id)arg1;
- (_Bool)assertAgentWithOptions:(id)arg1;
- (_Bool)startAgentWithOptions:(id)arg1;
- (void)closeNexusWithOptions:(id)arg1;
- (_Bool)requestNexusWithOptions:(id)arg1;
@property(nonatomic, getter=isNetworkProvider) _Bool networkProvider;
@property(nonatomic, getter=isSpecificUseOnly) _Bool specificUseOnly;
@property(nonatomic, getter=isUserActivated) _Bool userActivated;
@property(nonatomic, getter=isKernelActivated) _Bool kernelActivated;
@property(nonatomic, getter=isVoluntary) _Bool voluntary;
- (id)copyAgentData;

// Remaining properties
@property(nonatomic) _Bool requiresAssert;

@end

