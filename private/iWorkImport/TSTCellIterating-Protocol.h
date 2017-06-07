//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSTTableTileRowInfo;
@protocol TSTCellIteratorData;

@protocol TSTCellIterating <NSObject>
@property(readonly, nonatomic) TSTTableTileRowInfo *currentRowInfo;
- (void)terminate;
- (_Bool)getNextCellData:(id *)arg1;
- (id <TSTCellIteratorData>)nextCellData;
- (void)iterateCellsUsingBlock:(void (^)(id <TSTCellIteratorData>, _Bool *))arg1;
@end
