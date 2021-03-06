//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RemoteManagementProtocol/RMPRemoteManagementRequest.h>

#import "RMPRegisteredTypeProtocol.h"

@class NSArray, NSString;

@interface RMPServerMessagesRequest : RMPRemoteManagementRequest <RMPRegisteredTypeProtocol>
{
    NSArray *_messages;
}

+ (id)requestWithUUID:(id)arg1 withMessages:(id)arg2;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serialize;
- (_Bool)loadRequestFromDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

