//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSMutableArray, NSString, SKTileGroup;

@interface SKTileGroupRule : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_tileDefinitions;
    NSMutableArray *_tileDefinitionIDs;
    unsigned char _adjacency;
    NSString *_name;
    SKTileGroup *_parentGroup;
}

+ (id)tileGroupRuleWithAdjacency:(unsigned long long)arg1 tileDefinitions:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak SKTileGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setTileDefinitionsFromIDsWithTileSet:(id)arg1;
- (void)calcTileDefinitionIDsWithTileSet:(id)arg1;
- (id)initWithAdjacency:(unsigned long long)arg1 tileDefinitions:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (_Bool)isEqualToNode:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTileDefinitionParentPointers;
- (void)setTileDefinitionIDs:(id)arg1;
@property(readonly, nonatomic) NSArray *tileDefinitionIDs;
@property(copy, nonatomic) NSArray *tileDefinitions;
@property(nonatomic) unsigned long long adjacency;

@end

