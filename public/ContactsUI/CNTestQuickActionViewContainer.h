//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactQuickActionViewContainer.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CNTestQuickActionViewContainer : NSObject <CNContactQuickActionViewContainer>
{
    NSDictionary *_actionViewsByActionType;
}

@property(readonly, nonatomic) NSDictionary *actionViewsByActionType; // @synthesize actionViewsByActionType=_actionViewsByActionType;
- (void).cxx_destruct;
- (id)viewForActionType:(id)arg1;
- (id)initWithActionTypes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

