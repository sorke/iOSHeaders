//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>

@class FBSProcessExecutionStrategy, NSArray, NSString;

@interface FBSProcessExecutionPolicy : NSObject <NSCopying, BSDescriptionProviding>
{
    FBSProcessExecutionStrategy *_strategy;
    NSArray *_provisions;
}

+ (id)policyForStrategy:(id)arg1 withProvisions:(id)arg2;
@property(copy, nonatomic) NSArray *provisions; // @synthesize provisions=_provisions;
@property(copy, nonatomic) FBSProcessExecutionStrategy *strategy; // @synthesize strategy=_strategy;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
