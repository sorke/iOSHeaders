//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface PFStateMachineNode : NSObject
{
    NSString *_name;
    NSMutableDictionary *_transitions;
    CDUnknownBlockType _action;
}

+ (id)nodeWithName:(id)arg1;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3;
- (id)_dotReachableNodes:(id)arg1 graph:(id)arg2;
- (id)performAction:(id)arg1;
- (id)transitionForEventName:(id)arg1;
- (id)addReturnTransitionOn:(id)arg1;
- (id)addTransitionOn:(id)arg1 subflow:(id)arg2 to:(id)arg3;
- (id)addTransitionOn:(id)arg1 to:(id)arg2;
- (id)addTransition:(id)arg1;
- (void)setAction:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1;

@end

