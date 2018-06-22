//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class APSOutgoingMessageCheckpointTrace, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString, NSURL;

@interface IDSBaseMessage : NSObject <NSCopying>
{
    _Bool _forceCellular;
    _Bool _usingOutgoingPush;
    _Bool _wantsResponse;
    _Bool _wantsMultipleResponses;
    _Bool _wantsBinaryPush;
    _Bool _wantsIntegerUniqueIDs;
    _Bool _highPriority;
    _Bool _hasReceivedPushAck;
    _Bool _hasAttemptedAPSDelivery;
    _Bool _httpDoNotDecodeData;
    _Bool _alwaysForceCellular;
    int _timeoutRetries;
    id _context;
    NSDictionary *_clientInfo;
    NSData *_serviceData;
    unsigned long long _uniqueID;
    NSDictionary *_userInfo;
    NSDate *_creationDate;
    NSString *_topic;
    double _timeout;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _deliveryAcknowledgementBlock;
    NSDictionary *_cachedBody;
    NSString *_dsAuthID;
    double _timeSent;
    NSString *_dataUsageBundleIdentifier;
    NSDictionary *_responseAlert;
    NSNumber *_retryCount;
    NSString *_subService;
    NSString *_service;
    long long _importanceLevel;
    long long _deliveryMechanism;
    NSString *_underlyingService;
    id <IDSBaseMessageSigningSession> _signingSession;
    NSURL *_URLOverride;
    unsigned long long _sentByteCount;
    unsigned long long _receivedByteCount;
    APSOutgoingMessageCheckpointTrace *_apsdCheckpointTrace;
    NSDate *_requestStart;
    NSDate *_requestEnd;
    NSDate *_responseReceived;
}

@property(retain, nonatomic) NSDate *responseReceived; // @synthesize responseReceived=_responseReceived;
@property(retain, nonatomic) NSDate *requestEnd; // @synthesize requestEnd=_requestEnd;
@property(retain, nonatomic) NSDate *requestStart; // @synthesize requestStart=_requestStart;
@property _Bool alwaysForceCellular; // @synthesize alwaysForceCellular=_alwaysForceCellular;
@property(retain) APSOutgoingMessageCheckpointTrace *apsdCheckpointTrace; // @synthesize apsdCheckpointTrace=_apsdCheckpointTrace;
@property _Bool httpDoNotDecodeData; // @synthesize httpDoNotDecodeData=_httpDoNotDecodeData;
@property(nonatomic) unsigned long long receivedByteCount; // @synthesize receivedByteCount=_receivedByteCount;
@property(nonatomic) unsigned long long sentByteCount; // @synthesize sentByteCount=_sentByteCount;
@property(copy) NSURL *URLOverride; // @synthesize URLOverride=_URLOverride;
@property(retain, nonatomic) id <IDSBaseMessageSigningSession> signingSession; // @synthesize signingSession=_signingSession;
@property(copy) NSString *underlyingService; // @synthesize underlyingService=_underlyingService;
@property long long deliveryMechanism; // @synthesize deliveryMechanism=_deliveryMechanism;
@property long long importanceLevel; // @synthesize importanceLevel=_importanceLevel;
@property _Bool hasAttemptedAPSDelivery; // @synthesize hasAttemptedAPSDelivery=_hasAttemptedAPSDelivery;
@property(copy) NSString *service; // @synthesize service=_service;
@property(copy) NSString *subService; // @synthesize subService=_subService;
@property(copy, nonatomic) NSNumber *retryCount; // @synthesize retryCount=_retryCount;
@property _Bool hasReceivedPushAck; // @synthesize hasReceivedPushAck=_hasReceivedPushAck;
@property _Bool highPriority; // @synthesize highPriority=_highPriority;
@property(copy) NSDictionary *responseAlertInfo; // @synthesize responseAlertInfo=_responseAlert;
@property _Bool wantsIntegerUniqueIDs; // @synthesize wantsIntegerUniqueIDs=_wantsIntegerUniqueIDs;
@property _Bool wantsBinaryPush; // @synthesize wantsBinaryPush=_wantsBinaryPush;
@property int timeoutRetries; // @synthesize timeoutRetries=_timeoutRetries;
@property double timeSent; // @synthesize timeSent=_timeSent;
@property(copy, nonatomic, setter=setDSAuthID:) NSString *dsAuthID; // @synthesize dsAuthID=_dsAuthID;
@property(retain, setter=_setCachedBody:) NSDictionary *_cachedBody; // @synthesize _cachedBody;
@property _Bool wantsMultipleResponses; // @synthesize wantsMultipleResponses=_wantsMultipleResponses;
@property _Bool wantsResponse; // @synthesize wantsResponse=_wantsResponse;
@property(copy) CDUnknownBlockType deliveryAcknowledgementBlock; // @synthesize deliveryAcknowledgementBlock=_deliveryAcknowledgementBlock;
@property(setter=_setUsingOutgoingPush:) _Bool _usingOutgoingPush; // @synthesize _usingOutgoingPush;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property double timeout; // @synthesize timeout=_timeout;
@property(retain) NSString *topic; // @synthesize topic=_topic;
@property _Bool forceCellular; // @synthesize forceCellular=_forceCellular;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property unsigned long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy) NSData *serviceData; // @synthesize serviceData=_serviceData;
@property(copy) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain) id context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)logFailureInfo;
- (void)handleResponseDictionary:(id)arg1;
- (void)handleResponseStatus:(unsigned long long)arg1;
- (void)handleResponseBody:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
@property(readonly) NSDictionary *messageBody;
@property(readonly) NSDictionary *additionalInternalHeaders;
@property(readonly) NSDictionary *nonStandardMessageHeadersForOutgoingPush;
@property(readonly) NSDictionary *additionalMessageHeadersForOutgoingPush;
@property(readonly) NSDictionary *additionalQueryStringParameters;
@property(readonly) NSDictionary *additionalMessageHeaders;
@property(readonly) NSString *retryCountKey;
@property(readonly) NSString *bagKey;
@property(readonly) long long responseCommand;
@property(readonly) long long command;
@property(readonly) NSString *userAgentHeaderString;
@property(readonly) _Bool wantsUserAgentInHeaders;
@property(readonly) NSArray *requiredKeys;
- (_Bool)hasRequiredKeys:(id *)arg1;
@property(copy, nonatomic) NSNumber *serverTimestampReceivedDate;
@property(copy, nonatomic) NSNumber *serverTimestamp;
@property(readonly, copy, nonatomic) NSData *IDCertificate;
@property(readonly, nonatomic) struct __SecKey *identityPublicKey;
@property(readonly, nonatomic) struct __SecKey *identityPrivateKey;
@property(copy, nonatomic) NSMutableArray *userIDArray;
@property(copy, nonatomic) NSMutableArray *privateKeyArray;
@property(copy, nonatomic) NSMutableArray *publicKeyArray;
@property(copy, nonatomic) NSMutableArray *certDataArray;
@property(copy, nonatomic) NSData *pushToken;
@property(copy, nonatomic) NSData *pushCertificate;
@property(nonatomic) struct __SecKey *pushPublicKey;
@property(nonatomic) struct __SecKey *pushPrivateKey;
- (void)_clearCache;
- (void)_cacheBody;
@property(readonly) NSDictionary *messageBodyUsingCache;
@property(readonly) _Bool isValidMessage;
@property(readonly) _Bool payloadCanBeLogged;
- (_Bool)isIDSMessage;
- (id)messageBodyDataOverride;
@property(readonly) NSString *dataUsageBundleIdentifier; // @synthesize dataUsageBundleIdentifier=_dataUsageBundleIdentifier;
@property(readonly) double customRetryInterval;
@property(readonly) _Bool wantsCustomRetryInterval;
@property(readonly) _Bool wantsIDSSignatures;
@property(readonly) _Bool wantsBodySignature;
@property(readonly) _Bool isWebTunnelMessage;
@property(readonly) _Bool wantsSignature;
@property(readonly) _Bool ignoresNetworkConnectivity;
@property(readonly) double anisetteHeadersTimeout;
@property(readonly) _Bool wantsAnisetteHeaders;
@property(readonly) _Bool wantsAPSRetries;
@property(readonly) _Bool wantsManagedRetries;
@property(readonly) _Bool wantsExtraTimeoutRetry;
@property(readonly) int maxTimeoutRetries;
@property(readonly) _Bool wantsCFNetworkTimeout;
@property(readonly) _Bool wantsBagKey;
@property(readonly) _Bool allowDualDelivery;
@property(readonly) _Bool wantsHTTPGet;
@property(readonly) _Bool wantsHTTPHeaders;
@property(readonly) _Bool wantsJSONBody;
@property(readonly) _Bool wantsCompressedBody;
@property(readonly) _Bool wantsIDSServer;
@property(readonly) NSString *uniqueIDString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

