//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface LOGMSGEVENTLogMsgEventTableBookedSession : PBCodable <NSCopying>
{
    NSString *_bookedTableSessionId;
    NSMutableArray *_bookedTables;
}

+ (Class)bookedTableType;
@property(retain, nonatomic) NSMutableArray *bookedTables; // @synthesize bookedTables=_bookedTables;
@property(retain, nonatomic) NSString *bookedTableSessionId; // @synthesize bookedTableSessionId=_bookedTableSessionId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)bookedTableAtIndex:(unsigned long long)arg1;
- (unsigned long long)bookedTablesCount;
- (void)addBookedTable:(id)arg1;
- (void)clearBookedTables;
@property(readonly, nonatomic) _Bool hasBookedTableSessionId;

@end

