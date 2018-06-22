//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TIMobileAssetMatch : NSObject
{
    NSArray *_types;
    NSArray *_inputModeLevels;
    NSArray *_regions;
}

+ (id)mobileAssetMatchWithTypes:(id)arg1 inputModeLevels:(id)arg2 regions:(id)arg3;
+ (id)knownAssetRegionAttributes;
@property(readonly, nonatomic) NSArray *regions; // @synthesize regions=_regions;
@property(readonly, nonatomic) NSArray *inputModeLevels; // @synthesize inputModeLevels=_inputModeLevels;
@property(readonly, nonatomic) NSArray *types; // @synthesize types=_types;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTypes:(id)arg1 inputModeLevels:(id)arg2 regions:(id)arg3;

@end

