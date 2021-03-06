//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface VNFaceLandmarks : NSObject
{
    float _confidence;
    unsigned long long _pointCount;
    NSData *_pointsData;
    struct _Geometry2D_rect2D_ _alignedBBox;
    struct CGRect _userFacingBBox;
}

@property unsigned long long pointCount; // @synthesize pointCount=_pointCount;
@property struct CGRect userFacingBBox; // @synthesize userFacingBBox=_userFacingBBox;
@property struct _Geometry2D_rect2D_ alignedBBox; // @synthesize alignedBBox=_alignedBBox;
@property(retain) NSData *pointsData; // @synthesize pointsData=_pointsData;
@property(readonly) float confidence; // @synthesize confidence=_confidence;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPointsData:(id)arg1 pointCount:(unsigned long long)arg2 userFacingBBox:(struct CGRect)arg3 alignedBBox:(struct _Geometry2D_rect2D_)arg4 landmarkScore:(float)arg5;
- (_Bool)isUserFacingBBoxEquivalentToAlignedBBox;
- (void *)createPointArray:(const int *)arg1 count:(unsigned long long)arg2;

@end

