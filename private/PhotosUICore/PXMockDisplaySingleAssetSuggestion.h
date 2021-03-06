//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXDisplaySuggestion.h"

@class NSDate, NSDictionary, NSString, PHAsset;

@interface PXMockDisplaySingleAssetSuggestion : NSObject <PXDisplaySuggestion>
{
    unsigned short _type;
    unsigned short _subtype;
    unsigned short _state;
    NSString *_title;
    NSDictionary *_actionProperties;
    NSDate *_creationDate;
    PHAsset *_asset;
}

@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) unsigned short state; // @synthesize state=_state;
@property(readonly, nonatomic) NSDictionary *actionProperties; // @synthesize actionProperties=_actionProperties;
@property(readonly, nonatomic) unsigned short subtype; // @synthesize subtype=_subtype;
@property(readonly, nonatomic) unsigned short type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (_Bool)isEqual:(id)arg1;
- (id)fetchKeyAssets;
@property(readonly, copy, nonatomic) NSString *localIdentifier;
- (id)initWithAsset:(id)arg1 type:(unsigned short)arg2 subtype:(unsigned short)arg3 title:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

