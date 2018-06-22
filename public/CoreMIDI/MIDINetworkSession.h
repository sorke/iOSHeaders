//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MIDINetworkSession : NSObject
{
    void *_imp;
}

+ (id)defaultSession;
- (unsigned int)destinationEndpoint;
- (unsigned int)sourceEndpoint;
- (void)contactsChanged;
- (void)sessionChanged;
- (_Bool)removeContact:(id)arg1;
- (_Bool)addContact:(id)arg1;
- (id)contacts;
- (_Bool)removeConnection:(id)arg1;
- (_Bool)addConnection:(id)arg1;
- (_Bool)addOrRemoveConnection:(id)arg1 add:(_Bool)arg2;
- (id)connections;
@property(nonatomic) unsigned long long connectionPolicy;
@property(readonly, nonatomic) __weak NSString *localName;
@property(readonly, nonatomic) __weak NSString *networkName;
@property(readonly, nonatomic) unsigned long long networkPort;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)dealloc;
- (id)init;
- (void)refreshBonjourName;
- (void)setStateToEntity;
- (void)updateFromEntity;

@end

