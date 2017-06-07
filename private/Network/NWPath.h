//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSArray, NSString, NSUUID, NWEndpoint, NWInterface, NWParameters;
@protocol OS_nw_path;

@interface NWPath : NSObject <NWPrettyDescription>
{
    NSObject<OS_nw_path> *_internalPath;
}

+ (id)statusToString:(long long)arg1;
+ (id)pathForClientID:(id)arg1;
+ (id)allClientIDs;
@property(readonly) NSObject<OS_nw_path> *internalPath; // @synthesize internalPath=_internalPath;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isEligibleForCrazyIvan46) _Bool eligibleForCrazyIvan46;
@property(readonly, nonatomic) _Bool supportsDNS;
@property(readonly, nonatomic) _Bool supportsIPv6;
@property(readonly, nonatomic) _Bool supportsIPv4;
@property(retain, nonatomic) NWEndpoint *derivedEndpoint;
@property(readonly, nonatomic) NSArray *proxySettings;
@property(readonly, nonatomic) _Bool fallbackEligible;
@property(readonly, nonatomic) _Bool fallbackIsWeak;
@property(readonly, nonatomic) unsigned int fallbackInterfaceIndex;
@property(readonly, nonatomic) NWParameters *derivedParameters;
@property(readonly, nonatomic) NWEndpoint *endpoint;
@property(readonly, nonatomic) NWParameters *parameters;
@property(readonly, nonatomic, getter=isRoaming) _Bool roaming;
@property(readonly, nonatomic) unsigned int policyID;
@property(readonly, nonatomic, getter=isDirect) _Bool direct;
@property(readonly, nonatomic, getter=isLocal) _Bool local;
@property(readonly, nonatomic) unsigned int filterControlUnit;
@property(readonly, nonatomic, getter=isFiltered) _Bool filtered;
@property(readonly, nonatomic) int dnsServiceID;
- (_Bool)hasUnsatisfiedFallbackAgent;
- (_Bool)unsatisfiedVoluntaryAgentMatchesAddress:(id)arg1 triggerImmediately:(_Bool *)arg2;
- (id)copyFlowDivertToken;
@property(readonly, nonatomic) unsigned int flowDivertControlUnit;
@property(readonly, nonatomic, getter=isFlowDivert) _Bool flowDivert;
@property(readonly, nonatomic) NSString *reasonDescription;
@property(readonly, nonatomic) long long reason;
@property(readonly, nonatomic) long long mtu;
@property(readonly, nonatomic) NSArray *dnsSearchDomains;
@property(readonly, nonatomic) NSArray *dnsServersAsStrings;
@property(readonly, nonatomic) NSArray *dnsServers;
@property(readonly, nonatomic) NWInterface *fallbackInterface;
@property(readonly, nonatomic) NWInterface *interface;
@property(readonly, nonatomic) NWInterface *scopedInterface;
- (id)inactiveNetworkAgentUUIDsOnlyVoluntary:(_Bool)arg1;
- (id)genericNetworkAgentsWithDomain:(id)arg1 type:(id)arg2;
- (id)networkAgentsOfType:(Class)arg1;
- (_Bool)usesNetworkAgent:(id)arg1;
- (_Bool)usesNetworkAgentType:(Class)arg1;
- (_Bool)usesInterfaceType:(long long)arg1;
@property(readonly, nonatomic, getter=isExpensive) _Bool expensive;
@property(readonly, nonatomic) NSUUID *clientID;
@property(readonly, nonatomic) long long status;
- (_Bool)isEqualToPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
@property(readonly, nonatomic) NSString *statusAsString;
- (id)initWithPath:(id)arg1;
- (id)init;

@end
