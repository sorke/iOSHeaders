//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import "CNCDContainerPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNCDAllContainersPredicate : CNPredicate <CNCDContainerPredicate>
{
}

- (id)cn_persistenceFilterRequest;
- (id)cn_coreDataPredicate;
- (id)cn_topLevelFilter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

