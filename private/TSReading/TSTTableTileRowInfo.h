//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSPContainedObject.h>

@interface TSTTableTileRowInfo : TSPContainedObject
{
    struct __CFData *mStorageBuffer;
    unsigned short mStorageOffsets[255];
    unsigned short mBufferSize;
    unsigned short mTileRowIndex;
    unsigned short mCellCount;
    unsigned char mMaxTileColumnIndex;
    _Bool mMaxTileColumnIndexValid;
    unsigned char mStorageVersion;
}

@property(readonly, nonatomic) unsigned short cellCount; // @synthesize cellCount=mCellCount;
@property(nonatomic) unsigned short tileRowIndex; // @synthesize tileRowIndex=mTileRowIndex;
- (id)description;
- (id)p_debugDumpCompact;
- (void)validate;
- (void)debugDump;
- (void)dealloc;
- (id)initWithOwner:(id)arg1 tileRowIndex:(unsigned short)arg2;
- (void)i_upgradeWithDataStore:(id)arg1;

@end
