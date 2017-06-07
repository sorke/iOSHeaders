//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPFavoritesReplicaRecord-Protocol.h>

@class MSPPosition, MSPVectorTimestamp, NSData, NSString;

@interface MSPFavoritesReplicaSimpleRecord : NSObject <MSPFavoritesReplicaRecord>
{
    NSData *_contents;
    MSPVectorTimestamp *_contentsTimestamp;
    MSPPosition *_position;
    MSPVectorTimestamp *_positionTimestamp;
}

+ (id)recordsByApplyingEdits:(id)arg1 toArbitraryRecords:(id)arg2;
+ (id)recordWithContentsOfRecord:(id)arg1;
@property(readonly, nonatomic) MSPVectorTimestamp *positionTimestamp; // @synthesize positionTimestamp=_positionTimestamp;
@property(readonly, nonatomic) MSPPosition *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp; // @synthesize contentsTimestamp=_contentsTimestamp;
@property(readonly, copy, nonatomic) NSData *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)derivedRecordWithPosition:(id)arg1 positionTimestamp:(id)arg2;
- (id)derivedRecordWithContents:(id)arg1 contentsTimestamp:(id)arg2;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
