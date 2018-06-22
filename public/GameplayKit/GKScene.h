//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface GKScene : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_entities;
    NSMutableDictionary *_graphs;
    id <GKSceneRootNodeType> _rootNode;
}

+ (_Bool)supportsSecureCoding;
+ (id)sceneWithFileNamed:(id)arg1;
+ (id)sceneWithFileNamed:(id)arg1 rootNode:(id)arg2;
+ (id)_sceneWithFileNamed:(id)arg1 rootNode:(id)arg2;
@property(retain, nonatomic) id <GKSceneRootNodeType> rootNode; // @synthesize rootNode=_rootNode;
@property(readonly, nonatomic) NSDictionary *graphs; // @synthesize graphs=_graphs;
@property(readonly, nonatomic) NSArray *entities; // @synthesize entities=_entities;
- (void).cxx_destruct;
- (void)removeGraph:(id)arg1;
- (void)addGraph:(id)arg1 name:(id)arg2;
- (void)removeEntity:(id)arg1;
- (void)addEntity:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

