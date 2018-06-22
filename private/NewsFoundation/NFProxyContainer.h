//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NFRegistrationContainer.h"

@class NFContainer, NSString;

__attribute__((visibility("hidden")))
@interface NFProxyContainer : NSObject <NFRegistrationContainer>
{
    NFContainer *_container;
    NFContainer *_privateContainer;
}

@property(retain, nonatomic) NFContainer *privateContainer; // @synthesize privateContainer=_privateContainer;
@property(retain, nonatomic) NFContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)unsafeRegisterForKey:(id)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)registerProtocol:(id)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)registerProtocol:(id)arg1 factory:(CDUnknownBlockType)arg2;
- (id)registerClass:(Class)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)registerClass:(Class)arg1 factory:(CDUnknownBlockType)arg2;
- (id)initWithContainer:(id)arg1 privateContainer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

