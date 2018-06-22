//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface GEOComponentAction : PBCodable <NSCopying>
{
    CDStruct_95bda58d _actions;
    int _component;
    _Bool _handleLocally;
    struct {
        unsigned int component:1;
        unsigned int handleLocally:1;
    } _has;
}

@property(nonatomic) _Bool handleLocally; // @synthesize handleLocally=_handleLocally;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasHandleLocally;
- (int)StringAsActions:(id)arg1;
- (id)actionsAsString:(int)arg1;
- (void)setActions:(int *)arg1 count:(unsigned long long)arg2;
- (int)actionsAtIndex:(unsigned long long)arg1;
- (void)addActions:(int)arg1;
- (void)clearActions;
@property(readonly, nonatomic) int *actions;
@property(readonly, nonatomic) unsigned long long actionsCount;
- (int)StringAsComponent:(id)arg1;
- (id)componentAsString:(int)arg1;
@property(nonatomic) _Bool hasComponent;
@property(nonatomic) int component; // @synthesize component=_component;
- (void)dealloc;

@end

