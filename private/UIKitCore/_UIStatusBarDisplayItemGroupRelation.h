//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDisplayItemRelation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemGroupRelation : _UIStatusBarDisplayItemRelation
{
    _Bool _requiresAll;
    NSArray *_relations;
}

@property(nonatomic) _Bool requiresAll; // @synthesize requiresAll=_requiresAll;
@property(retain, nonatomic) NSArray *relations; // @synthesize relations=_relations;
- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (id)type;
- (id)itemStates;
- (_Bool)isFulfilled;

@end

